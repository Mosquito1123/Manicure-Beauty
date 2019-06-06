

#import "Appointment.h"

@implementation Appointment

- (instancetype) initWithDate:(NSDate *)date andTime:(NSString *)time {
  self = [super init];
  if (self) {
    self.date = date;
    self.time = time;
  }
  return self;
}

@end
