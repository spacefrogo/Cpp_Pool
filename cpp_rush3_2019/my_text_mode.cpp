/*
** EPITECH PROJECT, 2020
** sdfg
** File description:
** dfgh
*/

#include <ncurses.h>
#include <sys/utsname.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <errno.h> 
#include <netdb.h> 
#include <sys/types.h> 
#include <sys/socket.h> 
#include <netinet/in.h> 
#include <arpa/inet.h> 
#include <sys/sysinfo.h>
#include "SaveValues.hpp"

void SaveValues::checkHostName(int hostname) 
{ 
    if (hostname == -1) 
    { 
        perror("gethostname"); 
        exit(1); 
    } 
} 

void SaveValues::checkHostEntry(struct hostent * hostentry) 
{ 
    if (hostentry == NULL) 
    { 
        perror("gethostbyname"); 
        exit(1); 
    } 
} 
  
void SaveValues::checkIPbuffer(char *IPbuffer) 
{ 
    if (NULL == IPbuffer) 
    { 
        perror("inet_ntoa"); 
        exit(1); 
    } 
}

int now_sec, now_min, now_hour, now_day, now_wday, now_month, now_year;
time_t now;
struct tm *now_tm;

SaveValues::SaveValues()
{
    if (uname(&this->uts) < 0)
        std::cerr << "Wrong uname." << std::endl;
    this->os = "OS: ";
    this->number_CPU = get_nprocs_conf();
    refresh();
    this->sysname = this->uts.sysname;
    this->kernel = this->uts.release;
    this->kernelversion = "Kernel Version: ";
    this->hostIP = "Host IP: ";
    this->hostnameprint = "Hostname: ";
    this->maketime();
    this->number_CPU = get_nprocs_conf();
    this->hostname = gethostname(this->hostbuffer, sizeof(this->hostbuffer));
    this->username =  getenv("USER");
    checkHostName(this->hostname); 
    
    this->host_entry = gethostbyname(this->hostbuffer); 
    checkHostEntry(this->host_entry);
    
    this->IPbuffer = inet_ntoa(*((struct in_addr*) 
                                 this->host_entry->h_addr_list[0]));
}

void SaveValues::maketime(void)
{
    now = time(NULL);
    now_tm = localtime(&now);
    now_sec = now_tm->tm_sec;
    now_min = now_tm->tm_min;
    now_hour = now_tm->tm_hour;
    now_day = now_tm->tm_mday;
    now_wday = now_tm->tm_wday;
    now_month = now_tm->tm_mon + 1;
    now_year = now_tm->tm_year + 1900;
}

void	SaveValues::get_informations(struct utsname uts)
{
    init_pair(2, COLOR_YELLOW, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    if (uname(&uts) < 0)
        std::cerr << "Wrong uname." << std::endl;
    else {
        mvprintw(12, 15, this->os.c_str());
        mvprintw(12, 20, this->sysname);
        mvprintw(13, 15, this->kernelversion.c_str());
        mvprintw(13, 32, this->kernel);
        this->maketime();
        refresh();
        mvprintw(14, 15, "Time: %d:%d:%d", now_hour, now_min, now_sec);
        mvprintw(15, 15, "Date: %d-%d-%d", now_day, now_month, now_year);
        mvprintw(16, 15, this->hostnameprint.c_str());
        mvprintw(16, 25, this->hostbuffer);
        mvprintw(17, 15, this->hostIP.c_str());
        mvprintw(17, 24, this->IPbuffer.c_str());
	mvprintw(18, 15, "Number of CPU's: %d", this->number_CPU);
	mvprintw(19, 15, "Username: %s", this->username);
	refresh();
    }
}

SaveValues::~SaveValues()
{
    endwin();
}

void	SaveValues::print_gkrellm()
{
    refresh();
    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    mvprintw(5, 23, " GGG   K  K                l   l   MM   MM");
    mvprintw(6, 23, "G      K K   r rrr   eee   l   l   M M M M");
    mvprintw(7, 23, "G GGG  KK    rr     eeeee  l   l   M  M  M");
    mvprintw(8, 23, "G   G  K K   r      e      l   l   M     M");
    mvprintw(9, 23, " GGG   K  K  r       eeee  ll  ll  M     M");
    refresh();
}

void	SaveValues::my_text_mode()
{
    int key = 0;
    struct utsname uts;
    initscr();
    noecho();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    refresh();
    while (1) {
        this->print_gkrellm();
        this->get_informations(uts);
        refresh();
    }
    endwin();
}
