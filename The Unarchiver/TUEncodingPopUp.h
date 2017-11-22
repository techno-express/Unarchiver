#import <Cocoa/Cocoa.h>
#import <XADMaster/XADString.h>

NS_ASSUME_NONNULL_BEGIN

@interface TUEncodingPopUp:NSPopUpButton
{
}

-(instancetype)initWithFrame:(NSRect)frame;
-(nullable instancetype)initWithCoder:(NSCoder *)aDecoder;

-(void)buildEncodingList;
-(void)buildEncodingListWithAutoDetect;
-(void)buildEncodingListWithDefaultEncoding;
-(void)buildEncodingListMatchingXADString:(nullable id <XADString>)string;

@property (class, readonly, copy) NSArray<NSDictionary<NSString*,id>*> *encodings;
+(CGFloat)maximumEncodingNameWidthWithAttributes:(nullable NSDictionary<NSAttributedStringKey, id> *)attrs;

@end

NS_ASSUME_NONNULL_END
