//
//  ImageCardView.h
//  tudou
//
//  Created by jinzelu on 15/6/3.
//  Copyright (c) 2015年 jinzelu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VideosModel.h"

@interface ImageCardView : UIView

@property(nonatomic, strong) UIImageView *imageView;
@property(nonatomic, strong) UILabel *titleLabel;
@property(nonatomic, strong) UILabel *pvLabel;
@property(nonatomic, strong) UILabel *yaofengLabel;

-(id)initWithFrame:(CGRect)frame video:(VideosModel *)video;

@property(nonatomic, strong) VideosModel *video;

@end
