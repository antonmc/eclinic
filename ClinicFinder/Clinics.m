//
//  Clinic.m
//  ClinicFinder
//
//  Created by Anton McConville on 2015-02-24.
//  Copyright (c) 2015 IBM. All rights reserved.
//

#import "Clinics.h"

@implementation Clinics

@dynamic clinicList;

+(void) initialize
{
[self registerSpecialization];
}

+(NSString*) dataClassName
{
    return @"centers";
}

@end