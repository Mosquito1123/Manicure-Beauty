

#import "MyAppointment+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface MyAppointment (CoreDataProperties)

+ (NSFetchRequest<MyAppointment *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSDate *date;
@property (nullable, nonatomic, copy) NSString *time;

@end

NS_ASSUME_NONNULL_END
