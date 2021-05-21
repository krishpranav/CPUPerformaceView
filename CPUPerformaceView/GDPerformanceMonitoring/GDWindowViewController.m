
#import "GDWindowViewController.h"

@interface GDWindowViewController ()

@property (nonatomic) BOOL selectedStatusBarHidden;

@property (nonatomic) UIStatusBarStyle selectedStatusBarStyle;

@end

@implementation GDWindowViewController

#pragma mark -
#pragma mark - Init Methods & Superclass Overriders

- (instancetype)init {
    self = [super init];
    if (self) {
        [self setSelectedStatusBarHidden:NO];
        [self setSelectedStatusBarStyle:UIStatusBarStyleDefault];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.view setBackgroundColor:[UIColor clearColor]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (BOOL)prefersStatusBarHidden {
    return self.selectedStatusBarHidden;
}

- (UIStatusBarStyle)preferredStatusBarStyle {
    return self.selectedStatusBarStyle;
}

#pragma mark -
#pragma mark - Public Methods

- (void)configureStatusBarAppearanceWithPrefersStatusBarHidden:(BOOL)prefersStatusBarHidden preferredStatusBarStyle:(UIStatusBarStyle)preferredStatusBarStyle {
    self.selectedStatusBarHidden = prefersStatusBarHidden;
    self.selectedStatusBarStyle = preferredStatusBarStyle;
}

@end
