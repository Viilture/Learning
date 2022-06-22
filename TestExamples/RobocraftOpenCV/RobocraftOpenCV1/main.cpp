#include "mainwindow.h"

#include <QApplication>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/cvconfig.h"
#include <opencv2/core/types_c.h>


int main(int argc, char *argv[])
{
    //Задаем высоту и ширину картинки
    int height = 620;
    int width = 440;
    //Задаем точку для вывода текста
    cv::Point pt = cv::Point(height/4, width);
    //Создаем 8-битную, 3 канальную картинку
    cv::Mat hw(cv::Size(height, width), 8, 3);
    //Заливаем картинку черным цветом
    hw.setTo(cv::Scalar(0,0,0));

    cv::namedWindow("Hello OpenCV", 0);
    cv::imshow("Hello OpenCV", hw);

    cv::waitKey(100);

}
