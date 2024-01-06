#ifndef FILECOMPRESSOR_H
#define FILECOMPRESSOR_H

#include <map>
#include <unordered_map>
#include <string>
#include <vector>
#include <common.h>
#include <filepacker.h>

#define MAX_COMPRESSOR_SIZE (1024 * 1024 * 32)   // 压缩目录最大尺寸32M
#define COMPRESSOR_FILE_NAME "COMPRESSOR.BACKUP" // 压缩文件名

// 压缩目录树节点
struct CharNode
{
    unsigned int CurrentIndex;                     // 目录项索引
    std::unordered_map<char, CharNode *> Children; //目录项子项
};

// 释放目录树节点
void FreeCharNode(CharNode *node);

class FileCompressor
{
private:
    CharNode Dictionary;         //目录树根节点
    unsigned int Counter;        //目录项计数器
    std::fstream CompressorFile; //压缩文件
    FileRW *PackerDataFile;      //数据文件
    std::string RootDirectory;   //根目录
    enum
    {
        COMPRESS,   //压缩模式
        DECOMPRESS, //解压模式
        ERROR       //错误状态
    } Status{};     // 记录状态
public:
    // 构造函数
    // rootDirectory：根目录
    // packerDataFile：数据文件
    FileCompressor(std::string rootDirectory, FileRW *packerDataFile);
    // 构造函数
    // rootDirectory：根目录
    FileCompressor(std::string rootDirectory);
    ~FileCompressor();
    // 压缩
    StatusCode Compress();
    // 解压缩
    StatusCode Decompress();
    // 删除压缩文件
    void DeleteFile();
};

#endif // FILECOMPRESSOR_H
