#import <LegacyComponents/LegacyComponents.h>

@interface TGPasswordHintController : TGViewController

@property (nonatomic, copy) void (^completion)(NSString *);

- (instancetype)initWithPassword:(NSString *)password;

@end
