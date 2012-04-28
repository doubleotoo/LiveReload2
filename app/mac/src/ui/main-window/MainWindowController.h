
#import <Cocoa/Cocoa.h>


@interface MainWindowController : NSWindowController {
    NSObject              *_projectsItem;
    NSImage               *_folderImage;

    NSArray               *_panes;
    NSInteger              _currentPane;

    NSWindowController    *_projectSettingsSheetController;

    IBOutlet NSMenuItem *_showInDockMenuItem;
    IBOutlet NSMenuItem *_showInMenuBarMenuItem;
    IBOutlet NSMenuItem *_showNowhereMenuItem;
}

@property (assign) IBOutlet NSView *titleBarSideView;
@property (assign) IBOutlet NSMenuItem *versionMenuItem;
@property (assign) IBOutlet NSMenuItem *openAtLoginMenuItem;

@property (assign) IBOutlet NSOutlineView *projectOutlineView;
@property (assign) IBOutlet NSButton *addProjectButton;
@property (assign) IBOutlet NSButton *removeProjectButton;
@property (assign) IBOutlet NSView *gettingStartedView;
@property (assign) IBOutlet NSImageView *gettingStartedIconView;
@property (assign) IBOutlet NSTextField *gettingStartedLabelField;

@property (assign) IBOutlet NSTextField *statusTextField;
@property (assign) IBOutlet NSButton *terminalButton;

@property (assign) IBOutlet NSBox *paneBorderBox;
@property (assign) IBOutlet NSView *panePlaceholder;

// welcome pane
@property (assign) IBOutlet NSView *welcomePane;
@property (assign) IBOutlet NSTextField *welcomeMessageField;

// project pane
@property (assign) IBOutlet NSView *projectPane;
@property (assign) IBOutlet NSImageView *iconView;
@property (assign) IBOutlet NSTextField *nameTextField;
@property (assign) IBOutlet NSTextField *pathTextField;
@property (assign) IBOutlet NSTextField *snippetLabelField;
@property (assign) IBOutlet NSTextField *snippetBodyTextField;
@property (assign) IBOutlet NSTextField *monitoringSummaryLabelField;
@property (assign) IBOutlet NSButton *compilerEnabledCheckBox;
@property (assign) IBOutlet NSButton *postProcessingEnabledCheckBox;
@property (assign) IBOutlet NSTextField *availableCompilersLabel;

@end
