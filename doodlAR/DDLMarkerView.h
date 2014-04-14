@class ARGeoCoordinate;
@protocol MarkerViewDelegate;

@interface DDLMarkerView : UIView

@property (nonatomic, strong) UIView *displayImageview;
@property (nonatomic, strong) ARGeoCoordinate *coordinate;
@property (nonatomic, weak) id <MarkerViewDelegate> delegate;
- (id)initWithCoordinate:(ARGeoCoordinate *)coordinate withDisplayView:(UIView *) displayView andDelegate:(id<MarkerViewDelegate>)delegate;

@end

@protocol MarkerViewDelegate <NSObject>

- (void)didTouchMarkerView:(DDLMarkerView *)markerView;

@end
