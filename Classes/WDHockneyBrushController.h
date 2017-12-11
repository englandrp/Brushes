//
//  WDHockneyBrushController.h
//  Brushes
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//  Copyright (c) 2011-2013 Steve Sprang
//

#import <UIKit/UIKit.h>
#import "WDSwatches.h"

@class WDBar;
@class WDBarItem;
@class WDBrush;
@class WDPropertyCell;
@class WDStampPicker;
@class WDBar;
@class WDColor;
@class WDColorComparator;
@class WDColorSquare;
@class WDColorWheel;
@class WDColorSlider;
@class WDMatrix;

@interface WDHockneyBrushController : UIViewController <WDSwatchesDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray      *toolbarItems_;
    WDBarItem           *randomize_;
}

@property (nonatomic) IBOutlet UITableView *propertyTable;
@property (nonatomic) IBOutlet WDPropertyCell *propertyCell;
@property (nonatomic) IBOutlet UIImageView *preview;
@property (nonatomic) IBOutlet WDStampPicker *picker;
@property (nonatomic, weak) WDBar *topBar;
@property (nonatomic, weak) WDBar *bottomBar;
@property (nonatomic, weak) WDBrush *brush;

@property (nonatomic) WDColor *color;

@property (nonatomic) IBOutlet WDColorComparator *colorComparator;
@property (nonatomic) IBOutlet WDColorSlider *alphaSlider;
@property (nonatomic) IBOutlet UISwitch *opacitySwitch;
@property (nonatomic) IBOutlet UISwitch *sizeSpeedSwitch;

@property (nonatomic, weak) id delegate;

- (void) setInitialColor:(WDColor *)color;



@end
