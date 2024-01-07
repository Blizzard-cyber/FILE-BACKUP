# 数据备份与恢复软件

## 实现功能

- 用户注册与登录
- 文件备份与还原
- 文件打包与解包
- 文件的上传与下载
- 特殊文件支持（管道、软链接、硬链接）
- 文件元数据支持
- 用户交互界面GUI
- 压缩解压：LZ78算法
- 管理数据库备份：MySQL维护数据

## 文件夹说明

/filebackup：QT项目源代码

/tests:保存测试用例代码和所需数据

## 数据库说明

数据库名称：filebackup

```sql
create database filebackup;   --创建数据库
use filebackup;              --切换数据库
```

用户信息表：usrinfo

```sql
create table usrinfo(
     uid int primary key auto_increment,         /*usrID（自增）*/
     usrname varchar(20) unique,                    /*用户名(唯一)*/
     password char(30)                          /*用户密码*/
) ;
```

备份记录表：record

```sql
create table record(
     rid int primary key auto_increment,      /*recordID(自增)*/
     time DateTime,                           /*备份时间*/
     Topath varchar(1000),                   /*备份路径*/
     size int,                                /*文件大小*/
     Frompath varchar(1000),                  /*原路径*/
     usrname varchar(20),                     /*备份用户(外键）*/
     foreign key(usrname) references usrinfo(usrname)
) ;
```

## 目录说明

- 编译环境

  - Linux(Ubuntu)
  - QT
  - G++
  - Cmake

- 编译方式

  - main.cpp中数据库密码需要替换

    - ```
      db.setPassword("密码");  //第15行  将密码修改为本地mysql的密码
      ```

  - backup.cpp中选择文件路径需要替换

    - ```
      fileName = QFileDialog::getOpenFileName(this,"选择文件","/home/linux-aka");//第51行 
      fileName = QFileDialog::getExistingDirectory(this,"选择目录","/home/linux-aka");//第53行
      QString rootDirectory = QFileDialog::getExistingDirectory(this,"请选择目标文件夹","/home/linux-aka");//第127行
      QString packDirecroty_user = "/home/linux-aka/recovery/" + name;  //第134行
      ```
  
  - updownload.cpp指定的备份路径需要替换
  
    - ```
      sprintf(filepackage,"/home/linux-aka/packup/%s",name.c_str());//第57行
      sprintf(filepath,"/home/linux-aka/packup/%s/%s",name.c_str(),time_s);//第58行
      ```
  
  - 将项目导入QT，创建好数据库并修改上述路径后，点击运行即可
  
    

