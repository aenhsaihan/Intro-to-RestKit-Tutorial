//
//  VenueCell.h
//  CoffeeKit
//
//  Created by Anar Enhsaihan on 1/16/15.
//  Copyright (c) 2015 Citta LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VenueCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *distanceLabel;
@property (nonatomic, weak) IBOutlet UILabel *checkinsLabel;

@end
