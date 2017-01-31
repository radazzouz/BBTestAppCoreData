//
//  MyOtherEntity+CoreDataProperties.m
//  BBTestAppCoreData
//
//  Created by Rad Azzouz on 2017-01-31.
//  Copyright © 2017 Chris Stott. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "MyOtherEntity+CoreDataProperties.h"

@implementation MyOtherEntity (CoreDataProperties)

+ (NSFetchRequest<MyOtherEntity *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"MyOtherEntity"];
}

@dynamic myOtherAttribute;
@dynamic relationship;

@end
