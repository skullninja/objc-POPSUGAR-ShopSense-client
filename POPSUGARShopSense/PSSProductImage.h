//
//  PSSProductImage.h
//
//  Copyright (c) 2013 POPSUGAR Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "PSSClient.h"

extern NSString * const kPSSProductImageSizeNamedSmall;
extern NSString * const kPSSProductImageSizeNamedMedium;
extern NSString * const kPSSProductImageSizeNamedLarge;
extern NSString * const kPSSProductImageSizeNamedOriginal;
extern NSString * const kPSSProductImageSizeNamedIPhoneSmall;
extern NSString * const kPSSProductImageSizeNamedIPhone;

/** An image of a `PSSProduct` */

@interface PSSProductImage : NSObject <NSCoding, PSSRemoteObject>

/** A name for the size of this image.
 
 Possible values are:
 
 kPSSProductImageSizeNamedSmall = @"Small";
 
 kPSSProductImageSizeNamedMedium = @"Medium";
 
 kPSSProductImageSizeNamedLarge = @"Large";
 
 kPSSProductImageSizeNamedOriginal = @"Original";
 
 kPSSProductImageSizeNamedIPhoneSmall = @"IPhoneSmall";
 
 kPSSProductImageSizeNamedIPhone = @"IPhone";
 */
@property (nonatomic, copy, readonly) NSString *sizeName;

/** The absolute URL to fetch the image data. */
@property (nonatomic, copy, readonly) NSURL *URL;

/** The maximum width of the receiver.
 
 The original image is resized to fit within this width
 without changing the aspect ratio. Therefor the actual width may be less than this number. */
@property (nonatomic, copy, readonly) NSNumber *maxWidth;

/** The maximum height of the receiver. 
 
 The original image is resized to fit within this height
 without changing the aspect ratio. Therefor the actual height may be less than this number. */
@property (nonatomic, copy, readonly) NSNumber *maxHeight;

@end