
#import <Foundation/Foundation.h>
@interface MyClass : NSObject {
    @public NSString *_myProperty;
}
@property (copy) NSString *myProperty;
@end
int main() {
    MyClass *obj1 = [MyClass new];
    obj1.myProperty = @"Test";
    NSLog(@"%@", obj1._myProperty);
    return 0;
}
