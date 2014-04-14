#import <MapKit/MapKit.h>
#import "ARKit.h"

@class DDLFlipsideViewController;

@interface DDLFlipsideViewController : UIViewController <ARLocationDelegate, ARDelegate, ARMarkerDelegate>

- (instancetype) initWithLocation:(CLLocation *) location andDisplayView:(UIView *) displayView;

@end
