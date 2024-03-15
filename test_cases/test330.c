
#include <stdio.h>
#include <objc/runtime.h>

typedef struct {
    id _Nonnull name;
} Person;

@interface Person : NSObject
@property (nonatomic, copy) NSString *name;
@end

@implementation Person
@synthesize name = _name;
- (void)setName:(NSString *)name {
    if (_name != name) {
        [_name release];
        _name = [name copy];
    }
}
@end

int main(int argc, const char * argv[]) {
    Person *person = [[Person alloc] init];
    person.name = @"John Doe";
    
    printf("Name: %s\n", [person.name UTF8String]);
    
    return 0;
}
