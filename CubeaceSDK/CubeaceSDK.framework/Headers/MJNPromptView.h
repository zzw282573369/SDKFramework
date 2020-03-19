#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    MJNPromptStyleNormal = 0,
    MJNPromptStyleSuccess,
    MJNPromptStyleFailure,
}MJNPromptStyle;

typedef void (^BackCompletion)(void);

@interface MJNPromptView: UIView

+ (void)showPromptViewWithStyle:(MJNPromptStyle)style tittle:(NSString*)string retainTime:(NSTimeInterval)time;

+ (void)showPromptViewWithStyle:(MJNPromptStyle)style tittle:(NSString*)string retainTime:(NSTimeInterval)time Completion:(BackCompletion) completion;

@end
