//
//  GITPackIndexWriter.h
//  Git.framework
//
//  Created by Geoff Garside on 05/02/2011.
//  Copyright 2011 Geoff Garside. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 * A class cluster
 */
@interface GITPackIndexWriter : NSObject { }

+ (GITPackIndexWriter *)indexWriter;
+ (GITPackIndexWriter *)indexWriterVersion: (NSUInteger)version;

- (id)initWithDefaultVersion;
- (id)initWithVersion: (NSUInteger)version error: (NSError **)error;

@end
