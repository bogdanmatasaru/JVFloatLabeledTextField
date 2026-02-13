//
//  JVFloatLabeledText.h
//  JVFloatLabeledTextField
//
//  Umbrella header — self-contained for xcframework distribution.
//  Contains the full public interface for JVFloatLabeledTextField and JVFloatLabeledTextView.
//
//  Original: Copyright (c) 2013-2015 Jared Verdi. MIT License.

#import <UIKit/UIKit.h>

// ── JVFloatLabeledTextField ─────────────────────────────────────────────

IB_DESIGNABLE
@interface JVFloatLabeledTextField : UITextField

@property (nonatomic, strong, readonly) UILabel * floatingLabel;
@property (nonatomic) IBInspectable CGFloat floatingLabelYPadding;
@property (nonatomic) IBInspectable CGFloat floatingLabelXPadding;
@property (nonatomic) IBInspectable CGFloat floatingLabelReductionRatio;
@property (nonatomic) IBInspectable CGFloat placeholderYPadding;
@property (nonatomic, strong) UIFont * floatingLabelFont;
@property (nonatomic, strong) IBInspectable UIColor * floatingLabelTextColor;
@property (nonatomic, strong) IBInspectable UIColor * floatingLabelActiveTextColor;
@property (nonatomic, assign) IBInspectable BOOL animateEvenIfNotFirstResponder;
@property (nonatomic, assign) NSTimeInterval floatingLabelShowAnimationDuration;
@property (nonatomic, assign) NSTimeInterval floatingLabelHideAnimationDuration;
@property (nonatomic, assign) IBInspectable BOOL adjustsClearButtonRect;
@property (nonatomic, assign) IBInspectable BOOL keepBaseline;
@property (nonatomic, assign) BOOL alwaysShowFloatingLabel;
@property (nonatomic, strong) IBInspectable UIColor * placeholderColor;

- (void)setPlaceholder:(NSString *)placeholder floatingTitle:(NSString *)floatingTitle;
- (void)setAttributedPlaceholder:(NSAttributedString *)attributedPlaceholder floatingTitle:(NSString *)floatingTitle;

@end

// ── JVFloatLabeledTextView ──────────────────────────────────────────────

IB_DESIGNABLE
@interface JVFloatLabeledTextView : UITextView

@property (nonatomic, copy) IBInspectable NSString * placeholder;
@property (nonatomic, strong, readonly) UILabel * placeholderLabel;
@property (nonatomic, strong, readonly) UILabel * floatingLabel;
@property (nonatomic) IBInspectable CGFloat floatingLabelYPadding;
@property (nonatomic) IBInspectable CGFloat floatingLabelXPadding;
@property (nonatomic) IBInspectable CGFloat placeholderYPadding;
@property (nonatomic, strong) UIFont * floatingLabelFont;
@property (nonatomic, strong) IBInspectable UIColor * floatingLabelTextColor;
@property (nonatomic, strong) IBInspectable UIColor * floatingLabelActiveTextColor;
@property (nonatomic, assign) IBInspectable BOOL floatingLabelShouldLockToTop;
@property (nonatomic, strong) IBInspectable UIColor * placeholderTextColor;
@property (nonatomic, assign) IBInspectable BOOL animateEvenIfNotFirstResponder;
@property (nonatomic, assign) NSTimeInterval floatingLabelShowAnimationDuration UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) NSTimeInterval floatingLabelHideAnimationDuration UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) BOOL alwaysShowFloatingLabel;
@property (nonatomic) CGFloat startingTextContainerInsetTop;

- (void)setPlaceholder:(NSString *)placeholder floatingTitle:(NSString *)floatingTitle;

@end
