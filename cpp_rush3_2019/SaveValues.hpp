/*
** EPITECH PROJECT, 2020
** sdf
** File description:
** sdfgh
*/

#ifndef SAVEVALUES_HPP_
#define SAVEVALUES_HPP_

#include <iostream>
#include <string>
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

class SaveValues {
public:
    struct utsname uts;
    struct hostent *host_entry;
    // time_t now;
    // struct tm *now_tm;
    ~SaveValues();
    SaveValues();
    void checkHostName(int hostname);
    void checkHostEntry(struct hostent *hostentry);
    void checkIPbuffer(char *IPbuffer);
    void maketime(void);
    void print_gkrellm(void);
    void get_informations(struct utsname uts);
    void my_text_mode(void);
private:
    int hostname;
    std::string hostnameprint;
    char hostbuffer[256];
    std::string hostIP;
    std::string IPbuffer;
    // int hour;
    // int min;
    // int sec;
    // int day;
    // int month;
    // int year;
    char *sysname;
    std::string os;
    std::string kernelversion;
    char *kernel;
    char *username;
    int number_CPU;
};

#endif /* SAVEVALUES_HPP_ */
