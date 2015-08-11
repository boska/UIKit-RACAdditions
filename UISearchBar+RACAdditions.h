//
//  UISearchBar+RACAdditions.h
//  eztable-ios-app
//
//  Created by Boska Lee on 12/24/14.
//  Copyright (c) 2014 EZTABLE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ReactiveCocoa.h>
@interface UISearchBar (RACAdditions) <UISearchBarDelegate>
- (RACSignal *)rac_textSignal;
- (RACSignal *)rac_pressSearchSignal;
@end
