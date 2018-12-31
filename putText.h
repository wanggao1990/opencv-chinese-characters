#ifndef PUTTEXT_H_
#define PUTTEXT_H_

/*
  作者：codeaholic 
  来源：CSDN 
  原文：https://blog.csdn.net/wanggao_1990/article/details/52955056 
  版权声明：本文为博主原创文章，转载请附上博文链接！
*/

#include <windows.h>
#include <string>
#include <opencv2/opencv.hpp>

using namespace cv;

void GetStringSize(HDC hDC, const char* str, int* w, int* h);
void putTextZH(Mat &dst, const char* str, Point org, Scalar color, int fontSize,
    const char *fn = "Arial", bool italic = false, bool underline = false);

#endif // PUTTEXT_H_
