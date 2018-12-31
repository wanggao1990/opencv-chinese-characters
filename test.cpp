#include "opencv2/opencv.hpp"
/*
  作者：codeaholic 
  来源：CSDN 
  原文：https://blog.csdn.net/wanggao_1990/article/details/52955056 
  版权声明：本文为博主原创文章，转载请附上博文链接！
*/

#include "putText.h"

using namespace std;
using namespace cv;

int main()
{
    Mat img = imread("src.jpg");

    putTextZH(img, "Arial字体换...\n行显示!", Point(50, 50), Scalar(0, 0, 255), 30, "Arial");
    putTextZH(img, "微软雅黑字体换...\n行，斜体，下划线，显示!", Point(50, 100), Scalar(0, 255, 0), 30, "微软雅黑", true, true);
    putTextZH(img, "楷体字体换...\n行，斜体，下划线，显示!", Point(50, 200), Scalar(128, 255, 0), 30, "楷体", true, true);

    imshow("test", img);

    waitKey();

    return 0;   
}
