//
//  brightness.cpp
//  opencvtest
//
//  Created by 五零 on 16/7/12.
//  Copyright © 2016年 五零. All rights reserved.
//

#include "brightness.hpp"
#include "opencv2/core/core.hpp"
using namespace cv;
using namespace std;
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

Brightness::Brightness(int s){
    
    Mat img = imread("/Users/superstarwulin/Sites/xcode/helloworld/opencvtest/assets/zzx.jpg", CV_LOAD_IMAGE_COLOR);
    
    if (img.empty())
    {
        cout << "Image cannot be loaded..!!" << endl;
        return;
    }
    
    Mat imgH = img + Scalar(75, 75, 75); //increase the brightness by 75 units
    //img.convertTo(imgH, -1, 1, 75);
    
    Mat imgL = img + Scalar(-75, -75, -75); //decrease the brightness by 75 units
    //img.convertTo(imgL, -1, 1, -75);
    
    namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
    namedWindow("High Brightness", CV_WINDOW_AUTOSIZE);
    namedWindow("Low Brightness", CV_WINDOW_AUTOSIZE);
    
    imshow("Original Image", img);
    imshow("High Brightness", imgH);
    imshow("Low Brightness", imgL);
    
    waitKey(0);
    
    destroyAllWindows(); //destroy all open windows
    
}

void Brightness::demo(){
    cout << "demo"<<endl;
}

//// This creates a Fibonacii series
//void Fibonacii::create_series(void){
//    data.push_back(0);
//    data.push_back(1);
//    for (int i = 2; i < size; ++i)
//    {
//        /* code */
//        data.push_back(data[i - 2] + data[i - 1]);
//    }
//}
//// This is a constructor
//Fibonacii::Fibonacii(int s){
//    size = s;
//}
//// This method is used to print the series
//void Fibonacii::get_data(void){
//    for (long i: data)
//        cout << i << endl;
//}