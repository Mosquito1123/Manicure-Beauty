

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MyAppointment+CoreDataClass.h"
#import "Appointment.h"

NS_ASSUME_NONNULL_BEGIN

@interface CoreDataService : NSObject

+(instancetype)sharedInstance;
-(NSArray *)appointments;
-(void)addAppointment:(Appointment *)appointment;
-(void)removeAppointment:(MyAppointment *)appointment;


@end

NS_ASSUME_NONNULL_END
