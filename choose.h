#ifndef CHOOSE_H
#define CHOOSE_H

#include <QWidget>
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <iostream>
#include <QApplication>
#include <QProcess>

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <common.h>
#include "fileinfo.h"
#include "filecompressor.h"

#define DATA_FILE_NAME "DATA.BACKUP"
#define UNIT_FILE_NAME "UNIT.BACKUP"

struct FIleUnitInfo //文件元信息结构体
{
    off_t TotalLength;  //文件总长度
    ino_t Inode;        //文件的inode
    nlink_t InodeCount;    //文件的硬链接数
    FileType Type;    //文件类型
    short int Auth;    //文件权限
    timespec Atime;    //文件访问时间
    uid_t UserID;      //文件所有者ID
    gid_t GroupID;     //文件所有者所在组ID
    off_t Size;        //文件大小
    off_t StartOffset;     //文件在DATA.BACKUP中的起始偏移量
    std::string RelativePath;      //文件相对路径
};

namespace Ui {
class choose;
}

class choose : public QWidget
{
    Q_OBJECT

public:
    explicit choose(QWidget *parent = nullptr);
    ~choose();

private slots:   
    void on_backup_clicked();
    void on_restore_clicked();
    void getData(QString);

private:
    Ui::choose *ui;
    QString name;
};

#endif // CHOOSE_H
