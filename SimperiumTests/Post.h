//
//  Post.h
//  Simperium
//
//  Created by Michael Johnston on 11-11-20.
//  Copyright (c) 2011 Simperium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "TestObject.h"

@class Comment;

@interface Post : TestObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *comments;
@end

@interface Post (CoreDataGeneratedAccessors)

- (void)addCommentsObject:(Comment *)value;
- (void)removeCommentsObject:(Comment *)value;
- (void)addComments:(NSSet *)values;
- (void)removeComments:(NSSet *)values;

@end
