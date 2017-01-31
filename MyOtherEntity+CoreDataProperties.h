//
//  MyOtherEntity+CoreDataProperties.h
//  BBTestAppCoreData
//
//  Created by Rad Azzouz on 2017-01-31.
//  Copyright © 2017 Chris Stott. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "MyOtherEntity+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface MyOtherEntity (CoreDataProperties)

+ (NSFetchRequest<MyOtherEntity *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *myOtherAttribute;
@property (nullable, nonatomic, retain) MyEntity *relationship;

@end

NS_ASSUME_NONNULL_END
