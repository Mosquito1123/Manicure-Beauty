
#import "MyAppointment+CoreDataProperties.h"

@implementation MyAppointment (CoreDataProperties)

+ (NSFetchRequest<MyAppointment *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"MyAppointment"];
}

@dynamic date;
@dynamic time;

@end
