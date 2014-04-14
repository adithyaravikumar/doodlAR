#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

//CLASS INTERFACES:

@interface DDLPaintingView : UIView

@property(nonatomic, readwrite) CGPoint location;
@property(nonatomic, readwrite) CGPoint previousLocation;

- (void)erase;
- (void)setBrushColorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;
- (void)setBrushTextureWithTextureName:(NSString *)textureName;
- (void)renderLineFromPoint:(CGPoint)start toPoint:(CGPoint)end;

@end
