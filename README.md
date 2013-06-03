iOS Coding Best Practices
=========================

![alt text](MyAppFiles.png "MyApp Files")


## `MyModel.h`
#### Description
MyModel header file. Header files contain class, type, function, properties, and constant declarations.

#### Documentation
[Learning Objective-C: A Primer](http://developer.apple.com/library/ios/#referencelibrary/GettingStarted/Learning_Objective-C_A_Primer/)

[NSObject Class Reference](http://developer.apple.com/library/ios/#documentation/Cocoa/Reference/Foundation/Classes/NSObject_Class/Reference/Reference.html)

[NSObject Protocol Reference](http://developer.apple.com/library/ios/#documentation/Cocoa/Reference/Foundation/Protocols/NSObject_Protocol/Reference/NSObject.html)


## `MyModel.m`
#### Description
MyModel source file. Source files can contain both Objective-C and C code, implement the methods declared in the header file and extended or inherited class methods.

#### Documentation
[Learning Objective-C: A Primer](http://developer.apple.com/library/ios/#referencelibrary/GettingStarted/Learning_Objective-C_A_Primer/)

[NSObject Class Reference](http://developer.apple.com/library/ios/#documentation/Cocoa/Reference/Foundation/Classes/NSObject_Class/Reference/Reference.html)

[NSObject Protocol Reference](http://developer.apple.com/library/ios/#documentation/Cocoa/Reference/Foundation/Protocols/NSObject_Protocol/Reference/NSObject.html)


## `MyApp.xcdatamodeld`
#### Description
Used by Core Data, groups versions of the model, each represented by an individual .xcdatamodel file, and an Info.plist file that contains the version information.

#### Documentation
[Core Data Model Versioning and Data Migration Programming Guide](http://developer.apple.com/library/ios/#documentation/cocoa/Conceptual/CoreDataVersioning/Articles/vmModelFormat.html)


## `MyAppDelegate.h`
#### Description
MyAppDelegate header file. Header files contain class, type, function, properties, and constant declarations.

#### Documentation
[iOS App Programming Guide](http://developer.apple.com/library/ios/#documentation/iphone/conceptual/iphoneosprogrammingguide/AppArchitecture/AppArchitecture.html)

[UIApplication Class Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIApplication_Class/Reference/Reference.html)

[UIApplicationDelegate Protocol Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIApplicationDelegate_Protocol/Reference/Reference.html)


## `MyAppDelegate.m`
#### Description
MyAppDelegate source file. Handle state transitions within the app. For example, this object is responsible for launch-time initialization and handling transitions to and from the background. 

#### Documentation
[iOS App Programming Guide](http://developer.apple.com/library/ios/#documentation/iphone/conceptual/iphoneosprogrammingguide/AppArchitecture/AppArchitecture.html)

[UIApplication Class Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIApplication_Class/Reference/Reference.html)

[UIApplicationDelegate Protocol Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIApplicationDelegate_Protocol/Reference/Reference.html)


## `MyViewController.h`
#### Description
MyViewController header file. Header files contain class, type, function, properties, and constant declarations.

#### Documentation
[View Controller Programming Guide for iOS](http://developer.apple.com/library/ios/#featuredarticles/ViewControllerPGforiPhoneOS/BasicViewControllers/BasicViewControllers.html#//apple_ref/doc/uid/TP40007457-CH101-SW1)

[UIViewController Class Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIViewController_Class/Reference/Reference.html)


## `MyViewController.m`
#### Description
MyViewController source file. Source files can contain both Objective-C and C code, implement the methods declared in the header file and extended or inherited class methods.

#### Documentation
[View Controller Programming Guide for iOS](http://developer.apple.com/library/ios/#featuredarticles/ViewControllerPGforiPhoneOS/BasicViewControllers/BasicViewControllers.html#//apple_ref/doc/uid/TP40007457-CH101-SW1)

[UIViewController Class Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIViewController_Class/Reference/Reference.html)


## `MyStoryboard.storyboard`
#### Description
A storyboard represents the screens in an app and the transitions between them.

#### Documentation
[Your Second iOS App: Storyboards](http://developer.apple.com/library/ios/#documentation/iPhone/Conceptual/SecondiOSAppTutorial/GettingStarted/GettingStarted.html#//apple_ref/doc/uid/TP40011318-CH2-SW4)

[UIStoryboard Class Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIStoryboard_Class/Reference/Reference.html)


## `MyStoryboard-568h.storyboard`
#### Description
A storyboard represents the screens in an app and the transitions between them. For 4-inch Retina Display.

#### Documentation
[Your Second iOS App: Storyboards](http://developer.apple.com/library/ios/#documentation/iPhone/Conceptual/SecondiOSAppTutorial/GettingStarted/GettingStarted.html#//apple_ref/doc/uid/TP40011318-CH2-SW4)

[UIStoryboard Class Reference](http://developer.apple.com/library/ios/#documentation/UIKit/Reference/UIStoryboard_Class/Reference/Reference.html)


## `Default.png`
#### Description
To enhance the user’s experience at app launch, you must provide at least one launch image. iOS displays this image instantly when the user starts your app and until the app is fully ready to use. As soon as your app is ready for use, your app displays its first screen, replacing the launch placeholder image.

#### Documentation
[iOS Human Interface Guidelines](http://developer.apple.com/library/ios/#documentation/userexperience/conceptual/mobilehig/IconsImages/IconsImages.html)


## `Default@2x.png`
#### Description
To enhance the user’s experience at app launch, you must provide at least one launch image. iOS displays this image instantly when the user starts your app and until the app is fully ready to use. As soon as your app is ready for use, your app displays its first screen, replacing the launch placeholder image. For Retina Display.

#### Documentation
[iOS Human Interface Guidelines](http://developer.apple.com/library/ios/#documentation/userexperience/conceptual/mobilehig/IconsImages/IconsImages.html)


## `Default-568h@2x.png`
#### Description
To enhance the user’s experience at app launch, you must provide at least one launch image. iOS displays this image instantly when the user starts your app and until the app is fully ready to use. As soon as your app is ready for use, your app displays its first screen, replacing the launch placeholder image. For 4-inch Retina Display.

#### Documentation
[iOS Human Interface Guidelines](http://developer.apple.com/library/ios/#documentation/userexperience/conceptual/mobilehig/IconsImages/IconsImages.html)


## `Localizable.strings`
#### Description
Default strings file. You can localize it in the  Project Navigator and add new languages to your project.

#### Documentation
[Resource Programming Guide](http://developer.apple.com/library/ios/#documentation/Cocoa/Conceptual/LoadingResources/Strings/Strings.html)


## `InfoPlist.strings`
#### Description
Contains individual keys you want localized and the appropriately translated value.

#### Documentation
[Information Property List Key Reference](http://developer.apple.com/library/ios/#documentation/general/Reference/InfoPlistKeyReference/Articles/AboutInformationPropertyListFiles.html)


## `MyApp.entitlements`
#### Description
Set entitlement values in order to enable iCloud, push notifications, and App Sandbox.

#### Documentation
[Entitlement Key Reference](http://developer.apple.com/library/mac/#documentation/Miscellaneous/Reference/EntitlementKeyReference/Chapters/AboutEntitlements.html)


## `MyApp-Info.plist`
#### Description
App information property list file, comes preconfigured with keys that every information property list should have, like the app name.

#### Documentation
[Information Property List Key Reference](http://developer.apple.com/library/ios/#documentation/general/Reference/InfoPlistKeyReference/Articles/AboutInformationPropertyListFiles.html)


## `main.m`
#### Description
The main function in main.m calls the UIApplicationMain function within an autorelease pool.

#### Documentation
[Start Developing iOS Apps Today](http://developer.apple.com/library/ios/#referencelibrary/GettingStarted/RoadMapiOS/chapters/RM_YourFirstApp_iOS/Articles/01_CreatingProject.html)


## `MyApp-Prefix.pch`
#### Description
Add general imports or declare general project variables in this file.

#### Documentation
[SDK Compatibility Guide](http://developer.apple.com/library/ios/#documentation/DeveloperTools/Conceptual/cross_development/Configuring/configuring.html#//apple_ref/doc/uid/10000163i-CH1-SW2)


## `Defaults.plist`
#### Description
This file has been created by me, you can declare the default values of NSUserDefaults on it.


## `Settings.bundle`
#### Description
This bundle contains one or more Settings page files that describe the individual pages of preferences. It may also include other support files needed to display your preferences, such as images or localized strings.

#### Documentation
[Preferences and Settings Programming Guide](http://developer.apple.com/library/ios/#documentation/Cocoa/Conceptual/UserDefaults/Preferences/Preferences.html#//apple_ref/doc/uid/10000059i-CH6-SW5)


## `MyAppTests.h`
#### Description
MyAppTests header file. Header files contain class, type, function, properties, and constant declarations.

#### Documentation
[Xcode Unit Testing Guide](http://developer.apple.com/library/ios/#documentation/DeveloperTools/Conceptual/UnitTesting/00-About_Unit_Testing/about.html#//apple_ref/doc/uid/TP40002143-CH1-SW1)


## `MyAppTests.m`
#### Description
MyAppTests source file. Source files can contain both Objective-C and C code, implement the methods declared in the header file and extended or inherited class methods.

#### Documentation
[Xcode Unit Testing Guide](http://developer.apple.com/library/ios/#documentation/DeveloperTools/Conceptual/UnitTesting/00-About_Unit_Testing/about.html#//apple_ref/doc/uid/TP40002143-CH1-SW1)


## `MyAppTests-Info.plist`
#### Description
MyAppTests information property list file, comes preconfigured with keys that every information property list should have.

#### Documentation
[Information Property List Key Reference](http://developer.apple.com/library/ios/#documentation/general/Reference/InfoPlistKeyReference/Articles/AboutInformationPropertyListFiles.html)
