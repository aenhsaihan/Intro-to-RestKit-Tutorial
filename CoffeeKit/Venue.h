//
//  Venue.h
//  CoffeeKit
//
//  Created by Anar Enhsaihan on 1/16/15.
//  Copyright (c) 2015 Citta LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Location;

@interface Venue : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) Location *location;
@end
