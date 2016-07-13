//
//  main.cpp
//  opencvtest
//
//  Created by 五零 on 16/7/11.
//  Copyright © 2016年 五零. All rights reserved.
//
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include "contrast.hpp"
#include "brightness.hpp"
#include "HistogramEqualization.hpp"


using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    
//  static Brightness brightness(-1);
    
//    static Contrast contrast(-1);
    

    static HistogramEqualization histogramEqualization(-1);

    return 0;
}
