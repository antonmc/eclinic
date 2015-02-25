//
//  Clinics.h
//  ClinicFinder
//
//  Created by Anton McConville on 2015-02-24.
//  Copyright (c) 2015 IBM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IBMData/IBMData.h>

@interface Clinics : IBMDataObject <IBMDataObjectSpecialization>

@property(nonatomic, copy) NSArray *clinicList;

@end
