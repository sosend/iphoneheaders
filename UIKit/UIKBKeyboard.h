/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIKBShape.h"

@class NSArray, NSString, NSDictionary, NSMutableArray, NSMutableDictionary, UIKBKey, UIKBKeyplane;

@interface UIKBKeyboard : UIKBShape <NSCoding> {
	NSString* m_name;
	NSString* m_visualStyle;
	NSMutableArray* m_keyplanes;
	NSMutableDictionary* m_keyCache;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* visualStyle;
@property(retain, nonatomic) NSArray* keyplanes;
@property(retain, nonatomic) NSDictionary* keyCache;
+(UIKBKeyboard*)keyboard;
//-(id)init;
//-(void)dealloc;
-(void)cacheKey:(UIKBKey*)key onKeyplane:(UIKBKeyplane*)keyplane;
//-(id)initWithCoder:(id)coder;
//-(void)encodeWithCoder:(id)coder;
-(UIKBKeyplane*)keyplaneWithName:(NSString*)name;
//-(id)description;
-(void)layout;
@end
