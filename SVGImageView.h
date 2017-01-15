/*
 * This file is part of the PocketSVG package.
 * Copyright (c) Ponderwell, Ariel Elkin, Fjölnir Ásgeirsson, and Contributors
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "SVGPortability.h"

IB_DESIGNABLE

NS_ASSUME_NONNULL_BEGIN

/// A view that renders an SVG file.
@interface SVGImageView : PSVGView


/*!
 *  @discussion Initialises a view that renders the provided SVG data.
 *
 *  @param svgSource The entire string of the XML document representing the SVG.
 *
 *  @code let url = NSBundle.mainBundle().URLForResource("svg_file_name", withExtension: "svg")!
 let svgSource = try! NSString(contentsOfURL: url, encoding: NSUTF8StringEncoding) as String

 let layer = SVGLayer(SVGSource: svgSource)
 // set the layer's frame and add it as a sublayer to display it.
 *
 */
- (instancetype)initWithSVGSource:(NSString *)svgSource;


/*!
 *  @discussion Initialises a view that renders the provided SVG.
 *
 *  @param url The URL of the SVG file.
 *
 *  @code let url = NSBundle.mainBundle().URLForResource("svg_file_name", withExtension: "svg")!
 let svgImageView = SVGImageView(contentsOfURL: url)
 *
 */
- (instancetype)initWithContentsOfURL:(NSURL *)url;


/*!
 *  @discussion Clears contents and renders a new SVG given the filename in the main bundle.
 *
 *  @param svgName The filename of an SVG in the main bundle.
 *
 */
@property(nonatomic, copy) IBInspectable NSString *svgName;

/*!
 *  @discussion Clears contents and renders a new SVG given its complete XML representation.
 *
 *  @param svgSource The entire string of the XML document representing the SVG.
 *
 */
@property(nonatomic, copy) NSString *svgSource;


/*!
 *  @discussion Clears contents and renders a new SVG given the URL of the SVG.
 *
 *  @param svgURL The XML string of an SVG.
 *
 */
@property (nonatomic, copy) NSURL *svgURL;


/*!
 *  @discussion Solidly fills the shape formed by the SVG path with the given color.
 *
 *  @param fillColor A color to fill the SVG shape with.
 *
 */
@property(nonatomic, copy) IBInspectable PSVGColor *fillColor;


/*!
 *  @discussion Solidly colors the path generated by the SVG file.
 *
 *  @param strokeColor The color to stroke the path with.
 *
 */
@property(nonatomic, copy) IBInspectable PSVGColor *strokeColor;


/*!
 *  @discussion Specifies whether or not line thickness should be scaled 
 when scaling paths.
 *
 */
@property(nonatomic) IBInspectable BOOL scaleLineWidth;

@end
NS_ASSUME_NONNULL_END
