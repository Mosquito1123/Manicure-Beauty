
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef struct Notification {
  __unsafe_unretained NSString *_Nullable title;
  __unsafe_unretained NSString *_Nonnull body;
  __unsafe_unretained NSDate *_Nonnull date;
} Notification;

@interface NotificationCenter : NSObject

+ (instancetype _Nonnull)sharedInstance;

- (void)registerService;
- (void) sendNotification:(Notification)notification;

Notification NotificationMake(NSString*_Nullable title, NSString*_Nonnull body, NSDate*_Nonnull date);

@end

NS_ASSUME_NONNULL_END
