#ifndef UPDOWNLOAD_H
#define UPDOWNLOAD_H

#include <string>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include "mainwindow.h"

using namespace std;

struct historysend    //上传历史记录
{
    char id[17];
    char time[20];
    char path[129];
    char size[17];
};

int upload(const std::string &path,const std::string &name,const std::string &packagename);
int download(const std::string &path_user,const std::string &package_path);
char *getFileName(char *path);
char *getTime();
size_t min(size_t a,size_t b);

#endif // UPDOWNLOAD_H

