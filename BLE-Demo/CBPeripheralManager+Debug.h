//
//  CBPeripheralManager+Debug.h
//  BLE-Demo
//
//  Created by Joseph Lin on 4/19/14.
//  Copyright (c) 2014 Joseph Lin. All rights reserved.
//

#import <CoreBluetooth/CoreBluetooth.h>


@interface CBPeripheralManager (Debug)

- (NSString *)stateString;

@end
