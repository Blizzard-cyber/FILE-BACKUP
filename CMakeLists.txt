cmake_minimum_required(VERSION 3.5)

project(filebackup VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "/home/linux-aka/Qt5.12.12/5.12.12/gcc_64")   #因为找不到QT的路径,手动指定(替换为本地目录)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)

set(PROJECT_SOURCES
        main.cpp            #主函数
        mainwindow.cpp      #主界面
        mainwindow.h
        mainwindow.ui
        backup.cpp          #备份和恢复
        backup.h
        backup.ui
        register1.cpp         #注册
        register1.h
        register1.ui
        image.qrc
        filecompressor.cpp  #压缩和解压缩文件
        filecompressor.h
        fileinfo.cpp        #文件元信息处理
        fileinfo.h
        filepacker.cpp       #将文件打包储存
        filepacker.h
        inoderecorder.cpp    #记录文件inode操作状态
        inoderecorder.h
        updownload.cpp           #文件在数据库上传下载
        updownload.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(filebackup
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET filebackup APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(filebackup SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable( filebackup
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(filebackup PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(filebackup PRIVATE Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(filebackup PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS filebackup
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(filebackup)
endif()
