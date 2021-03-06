//
//  FindElectionsViewController.h
//  VotingInformationProject
//
//  Created by Andrew Fink on 1/20/14.
//  
//

#import <UIKit/UIKit.h>

#import "AFNetworking/AFNetworking.h"

#import "VIPTableViewController.h"
#import "VIPTabBarController.h"
#import "ContactsSearchViewControllerDelegate.h"
#import "Election+API.h"
#import "FindElectionsCell.h"

@interface FindElectionsViewController : VIPTableViewController <ContactsSearchViewControllerDelegate>

@end
