//
//  MyEntity+CoreDataProperties.m
//  BBTestAppCoreData
//
//  Created by Rad Azzouz on 2017-01-31.
//  Copyright © 2017 Chris Stott. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "MyEntity+CoreDataProperties.h"

@implementation MyEntity (CoreDataProperties)

+ (NSFetchRequest<MyEntity *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"MyEntity"];
}

@dynamic myAttribute;
@dynamic relationship;

@end
