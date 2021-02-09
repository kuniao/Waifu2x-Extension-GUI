﻿/*
    Copyright (C) 2021  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高分辨率屏幕支持
    QApplication a(argc,argv);
    a.setQuitOnLastWindowClosed(false);//隐藏无窗口时保持运行
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}

/*
Change log:

v2.71.22:
- The maximum number of threads will no longer be limited by the number of CPU logical cores.
- Speed up the assembly of GIF.
- Kill the sub process that is stuck in the background after stopping processing the file.
- Fix bug: Gif scale ratio is wrong when using Anime4k.
- Fix bug: Modifying the duration of the video clip after pausing and then continuing processing will cause the video sequence to be disordered.
- Fix bug: Hotkey for Remove from list is still enabled when processing files.
- Fix bug: [Time remaining] and [ETA] are still bing calculated even though they are not being displayed.
Recent changes:
- Significantly improve the efficiency, speed and stability of ALL engines when processing Video and GIF.
- The OLD version of waifu2x-ncnn-vulkan engine will no longer support the use of multiple graphics cards to process GIF and video.
- Update ImageMagick,FFmpeg&FFprobe.

- 最大线程数量将不再受到CPU逻辑核心数量的限制.
- 加快组装GIF的速度.
- 停止处理文件后，杀死滞留在后台的子进程。
- 修复bug: 当使用Anime4k时,GIF放大倍率错误.
- 修复bug: 即便在处理文件时,从列表中移除文件的热键依旧可用.
- 修复bug: 即使[剩余时间]和[预计完成时间]没有被显示,但是仍旧被计算.
- 修复bug: 暂停后修改视频片段时长然后继续处理会造成视频顺序错乱.
近期更新:
- 重写大量代码,大幅提升所有引擎在处理视频和GIF时的效率,速度和稳定性.
- 旧版本的waifu2x-ncnn-vulkan引擎不再支持使用多显卡处理视频和GIF.
- 更新ImageMagick,FFmpeg&FFprobe.

--------------------------------------------------------------------------
To do:
- 在SRMD和REALSR正式加入cpu支持后, 在GPU ID tooltip上添加[★ "-1" is CPU,others are GPUs ★]
- 将文件列表的状态替换为预设的QString
---------------------------------------------------------------------------
Integrated component:
- gifsicle version 1.92
- SoX 14.4.2-win32
- waifu2x-caffe 1.2.0.4
- Waifu2x-converter 9e0284ae23d43c990efb6320253ff0f1e3776854
- waifu2x-ncnn-vulkan 20210102
- SRMD-ncnn-Vulkan 20200818
- realsr-ncnn-vulkan 20200818
- ImageMagick 7.0.10-61-portable-Q16-x64
- Anime4KCPP v2.5.0
- FFmpeg&FFprobe 2021-02-02-git-2367affc2c-full_build
- NirCmd v2.86
- Ghostscript 9.53.3
- GNU Wget 1.20.3
---------------------------------------------------------------------------
Icons made by :
Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/
Roundicons (https://www.flaticon.com/authors/roundicons) From Flaticon : https://www.flaticon.com/
Icongeek26 (https://www.flaticon.com/authors/Icongeek26) From Flaticon : https://www.flaticon.com/
*/
