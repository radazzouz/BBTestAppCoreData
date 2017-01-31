//
//  MyEntity+CoreDataProperties.h
//  BBTestAppCoreData
//
//  Created by Rad Azzouz on 2017-01-31.
//  Copyright © 2017 Chris Stott. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "MyEntity+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface MyEntity (CoreDataProperties)

+ (NSFetchRequest<MyEntity *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *myAttribute;
@property (nullable, nonatomic, retain) MyEntity *relationship;

@end

NS_ASSUME_NONNULL_END
