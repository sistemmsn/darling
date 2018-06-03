/*
 This file is part of Darling.

 Copyright (C) 2017 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _CoreImage_H_
#define _CoreImage_H_

#import <Foundation/Foundation.h>

#import <CoreImage/CIFilterConstructor.h>
#import <CoreImage/CIGVRenderer.h>
#import <CoreImage/CIImageProcessorInput.h>
#import <CoreImage/CIImageProcessorOutput.h>
#import <CoreImage/GVRenderer.h>
#import <CoreImage/ImageRowReading.h>
#import <CoreImage/_CIFilterProperties.h>
#import <CoreImage/CIColorMatrix.h>
#import <CoreImage/CIColorInvert.h>
#import <CoreImage/CIPortraitEffect.h>
#import <CoreImage/CIPortraitEffectLight.h>
#import <CoreImage/CIPortraitEffectCommercial.h>
#import <CoreImage/CIPortraitEffectStudio.h>
#import <CoreImage/CIPortraitEffectContour.h>
#import <CoreImage/CIPortraitEffectBlack.h>
#import <CoreImage/CIPortraitEffectStage.h>
#import <CoreImage/CIPortraitEffectBlackoutMono.h>
#import <CoreImage/CIPortraitEffectStageMono.h>
#import <CoreImage/CIOpenGLContext.h>
#import <CoreImage/CICMYKHalftone.h>
#import <CoreImage/CIColorMap.h>
#import <CoreImage/CIColorCurves.h>
#import <CoreImage/CIConstantColorGenerator.h>
#import <CoreImage/CIPhotoGrain.h>
#import <CoreImage/CIUnsharpMask.h>
#import <CoreImage/CITextImageGenerator.h>
#import <CoreImage/CIAttributedTextImageGenerator.h>
#import <CoreImage/CIBarcodeDescriptor.h>
#import <CoreImage/CIQRCodeDescriptor.h>
#import <CoreImage/CIAztecCodeDescriptor.h>
#import <CoreImage/CIPDF417CodeDescriptor.h>
#import <CoreImage/CIDataMatrixCodeDescriptor.h>
#import <CoreImage/FBSProcessor.h>
#import <CoreImage/FBSProcessorCPU.h>
#import <CoreImage/FBSProcessorGPU.h>
#import <CoreImage/CIFastBilateralSolver.h>
#import <CoreImage/MetalFaceMask.h>
#import <CoreImage/CILineOverlay.h>
#import <CoreImage/CISpotColor.h>
#import <CoreImage/CIComicEffect.h>
#import <CoreImage/CIShadedMaterial.h>
#import <CoreImage/CIHeightFieldFromMask.h>
#import <CoreImage/CITriangleTile.h>
#import <CoreImage/CIGlassDistortion.h>
#import <CoreImage/CICheapBlur.h>
#import <CoreImage/CIColorClamp.h>
#import <CoreImage/CIMirror.h>
#import <CoreImage/CIVignette.h>
#import <CoreImage/CIVignetteEffect.h>
#import <CoreImage/CISunbeamsGenerator.h>
#import <CoreImage/CIGenericMetalProcessorSingleChannel.h>
#import <CoreImage/CIGenericMetalProcessor.h>
#import <CoreImage/CIContext.h>
#import <CoreImage/CIContextCache.h>
#import <CoreImage/CIReductionFilter.h>
#import <CoreImage/CIAreaAverage.h>
#import <CoreImage/CIColumnAverage.h>
#import <CoreImage/CIRowAverage.h>
#import <CoreImage/CIAreaMaximum.h>
#import <CoreImage/CIAreaMinimum.h>
#import <CoreImage/CIAreaMaximumAlpha.h>
#import <CoreImage/CIAreaMinMaxRed.h>
#import <CoreImage/CIAreaMinimumAlpha.h>
#import <CoreImage/CIAreaMinMaxNormalize.h>
#import <CoreImage/CIAreaMinMaxRedNormalize.h>
#import <CoreImage/CIGlassLozenge.h>
#import <CoreImage/CITorusLensDistortion.h>
#import <CoreImage/CITwirlDistortion.h>
#import <CoreImage/CIImageRowReader.h>
#import <CoreImage/CISampler.h>
#import <CoreImage/CIFaceCoreDetector.h>
#import <CoreImage/CICircleGenerator.h>
#import <CoreImage/CIMorphology.h>
#import <CoreImage/CICheapMorphology.h>
#import <CoreImage/CIMorphologyMinimum.h>
#import <CoreImage/CIMorphologyMaximum.h>
#import <CoreImage/CIMorphologyGradient.h>
#import <CoreImage/CIMorphologyLaplacian.h>
#import <CoreImage/CIPseudoMedian.h>
#import <CoreImage/CITileFilter.h>
#import <CoreImage/CITile2Filter.h>
#import <CoreImage/CIFourfoldRotatedTile.h>
#import <CoreImage/CISixfoldRotatedTile.h>
#import <CoreImage/CITwelvefoldReflectedTile.h>
#import <CoreImage/CIFourfoldTranslatedTile.h>
#import <CoreImage/CIGlideReflectedTile.h>
#import <CoreImage/CIEightfoldReflectedTile.h>
#import <CoreImage/CIFourfoldReflectedTile.h>
#import <CoreImage/CISixfoldReflectedTile.h>
#import <CoreImage/CIWrapMirror.h>
#import <CoreImage/CIVector.h>
#import <CoreImage/CIEnhancementCalculator.h>
#import <CoreImage/CIColorPosterize.h>
#import <CoreImage/CIBarsSwipeTransition.h>
#import <CoreImage/CIHighlightShadowAdjust.h>
#import <CoreImage/CITriangleKaleidoscope.h>
#import <CoreImage/CIDetector.h>
#import <CoreImage/CIDepthOfField.h>
#import <CoreImage/CIBitmapContext.h>
#import <CoreImage/CIFilterPlugIn.h>
#import <CoreImage/CIPixellate.h>
#import <CoreImage/CIHexagonalPixellate.h>
#import <CoreImage/CIKernelLibrary.h>
#import <CoreImage/CICGContext.h>
#import <CoreImage/CIBlendModeFilter.h>
#import <CoreImage/CIMultiplyBlendMode.h>
#import <CoreImage/CIScreenBlendMode.h>
#import <CoreImage/CIOverlayBlendMode.h>
#import <CoreImage/CIDarkenBlendMode.h>
#import <CoreImage/CILightenBlendMode.h>
#import <CoreImage/CIColorDodgeBlendMode.h>
#import <CoreImage/CIColorBurnBlendMode.h>
#import <CoreImage/CIHardLightBlendMode.h>
#import <CoreImage/CISoftLightBlendMode.h>
#import <CoreImage/CIDifferenceBlendMode.h>
#import <CoreImage/CIExclusionBlendMode.h>
#import <CoreImage/CIPDFNonSeparableBlendMode.h>
#import <CoreImage/CIHueBlendMode.h>
#import <CoreImage/CISaturationBlendMode.h>
#import <CoreImage/CIColorBlendMode.h>
#import <CoreImage/CILuminosityBlendMode.h>
#import <CoreImage/CISubtractBlendMode.h>
#import <CoreImage/CIDivideBlendMode.h>
#import <CoreImage/CILinearBurnBlendMode.h>
#import <CoreImage/CILinearDodgeBlendMode.h>
#import <CoreImage/CIVividLightBlendMode.h>
#import <CoreImage/CILinearLightBlendMode.h>
#import <CoreImage/CIPinLightBlendMode.h>
#import <CoreImage/CIHardMixBlendMode.h>
#import <CoreImage/CISmartBlackAndWhite.h>
#import <CoreImage/CILanczosScaleTransform.h>
#import <CoreImage/CIGaussianBlur.h>
#import <CoreImage/CIGaussianBlurXY.h>
#import <CoreImage/CICGSFilter.h>
#import <CoreImage/CIFilter.h>
#import <CoreImage/CINoiseReduction.h>
#import <CoreImage/CIProSharpenEdges.h>
#import <CoreImage/CIStraightenFilter.h>
#import <CoreImage/CIBoxBlur.h>
#import <CoreImage/CIBoxBlur3_7.h>
#import <CoreImage/CISobelHV.h>
#import <CoreImage/CIMorphologicalMax5Mono.h>
#import <CoreImage/CIConfidenceThresholdProcessor.h>
#import <CoreImage/CIConfidenceThreshold.h>
#import <CoreImage/CIPortraitPrepareStage.h>
#import <CoreImage/CIConfidenceMap.h>
#import <CoreImage/CITextDetector.h>
#import <CoreImage/CIPortraitFaceMask.h>
#import <CoreImage/CIPortraitFaceMaskProcessorKernel.h>
#import <CoreImage/FaceLandmarks.h>
#import <CoreImage/ComputedFaceData.h>
#import <CoreImage/CIEdgePreserveUpsampleFilter.h>
#import <CoreImage/CIEdgePreserveUpsampleRGFilter.h>
#import <CoreImage/CICheatBlur.h>
#import <CoreImage/CIMaskToAlpha.h>
#import <CoreImage/CIColorBalance.h>
#import <CoreImage/CIBilateralGridHash.h>
#import <CoreImage/CILabDeltaE.h>
#import <CoreImage/CIFilterShape.h>
#import <CoreImage/CISmartToneFilter.h>
#import <CoreImage/CISmartColorFilter.h>
#import <CoreImage/CIPlugInStandardFilter.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <CoreImage/CIImageProcessorOutput.h>
#import <CoreImage/CIImageProcessorInput.h>
#import <CoreImage/CIImageProcessorKernel.h>
#import <CoreImage/CIOpacity.h>
#import <CoreImage/CIFaceMaskApply.h>
#import <CoreImage/CIFaceMaskCalculator.h>
#import <CoreImage/CIFaceMaskKernel.h>
#import <CoreImage/CIBicubicScaleTransform.h>
#import <CoreImage/CISoftCubicUpsample.h>
#import <CoreImage/CIDepthToDisparity.h>
#import <CoreImage/CIDisparityToDepth.h>
#import <CoreImage/CIDepthDisparityConverter.h>
#import <CoreImage/CIDepthEffectMakeBlurMap.h>
#import <CoreImage/CIDepthEffectApplyBlurMap.h>
#import <CoreImage/CIDepthEffect.h>
#import <CoreImage/CIDepthBlurEffect.h>
#import <CoreImage/CIKaleidoscope.h>
#import <CoreImage/CIMetalConverter.h>
#import <CoreImage/CIPlugIn.h>
#import <CoreImage/Function.h>
#import <CoreImage/CIPointillize.h>
#import <CoreImage/Polyline.h>
#import <CoreImage/PolylinePair.h>
#import <CoreImage/TopBottomRegion.h>
#import <CoreImage/CIHoleDistortion.h>
#import <CoreImage/CIRAWFilterImpl.h>
#import <CoreImage/CILocalLightMapPrepare.h>
#import <CoreImage/CILocalLightFilter.h>
#import <CoreImage/CIConvolution.h>
#import <CoreImage/CIBokehBlur.h>
#import <CoreImage/CIDiscBlur.h>
#import <CoreImage/CIRingBlur.h>
#import <CoreImage/CIModTransition.h>
#import <CoreImage/CIRedEyeCorrection.h>
#import <CoreImage/CIRedEyeCorrections.h>
#import <CoreImage/CISharpenLuminance.h>
#import <CoreImage/CIPortraitSkinMask.h>
#import <CoreImage/CIPortraitSkinMaskProcessor.h>
#import <CoreImage/CIParallelogramTile.h>
#import <CoreImage/CILenticularHaloGenerator.h>
#import <CoreImage/CICopyMachineTransition.h>
#import <CoreImage/CICircularWrap.h>
#import <CoreImage/CIGVNode.h>
#import <CoreImage/CIAreaHistogram.h>
#import <CoreImage/CITemperatureAndTint.h>
#import <CoreImage/CIWhitePointAdjust.h>
#import <CoreImage/CIFalseColor.h>
#import <CoreImage/CIVNFeature.h>
#import <CoreImage/CIVNDetector.h>
#import <CoreImage/CIVNFaceFeature.h>
#import <CoreImage/CIVNFaceDetector.h>
#import <CoreImage/CIVNRectFeature.h>
#import <CoreImage/CIVNRectDetector.h>
#import <CoreImage/CICheckerboardGenerator.h>
#import <CoreImage/CIRandomGenerator.h>
#import <CoreImage/CISpotLight.h>
#import <CoreImage/CIConvolution3X3.h>
#import <CoreImage/CIConvolution5X5.h>
#import <CoreImage/CIConvolution7X7.h>
#import <CoreImage/CIConvolution9Horizontal.h>
#import <CoreImage/CIConvolution9Vertical.h>
#import <CoreImage/CIDisparityRefinement.h>
#import <CoreImage/CIRenderDestination.h>
#import <CoreImage/CIRenderInfo.h>
#import <CoreImage/CIRenderTask.h>
#import <CoreImage/CISimpleTile.h>
#import <CoreImage/CIAffineTile.h>
#import <CoreImage/CIColorMonochrome.h>
#import <CoreImage/CIAffineTransform.h>
#import <CoreImage/CILinearBlur.h>
#import <CoreImage/CIMotionBlur.h>
#import <CoreImage/CIZoomBlur.h>
#import <CoreImage/CIPassThroughSelectFrom3.h>
#import <CoreImage/CIPassThroughFilter.h>
#import <CoreImage/CIPassThroughColorFilter.h>
#import <CoreImage/CIPassThroughWarpFilter.h>
#import <CoreImage/CIPassThroughGeneralFilter.h>
#import <CoreImage/CIPassThroughGeneralAltFilter.h>
#import <CoreImage/CIPassThroughIntermediateFilter.h>
#import <CoreImage/CIBilateralSolverCPU.h>
#import <CoreImage/CIDisparitySmoothing.h>
#import <CoreImage/CIDisparitySmoothingProcessor.h>
#import <CoreImage/Rgon.h>
#import <CoreImage/RgonStack.h>
#import <CoreImage/CIBloom.h>
#import <CoreImage/CIGloom.h>
#import <CoreImage/CIPremultiply.h>
#import <CoreImage/CIUnpremultiply.h>
#import <CoreImage/CIVortexDistortion.h>
#import <CoreImage/_CICompositeFilter.h>
#import <CoreImage/CISourceOverCompositing.h>
#import <CoreImage/CISourceInCompositing.h>
#import <CoreImage/CISourceOutCompositing.h>
#import <CoreImage/CISourceAtopCompositing.h>
#import <CoreImage/CIAdditionCompositing.h>
#import <CoreImage/CIMultiplyCompositing.h>
#import <CoreImage/CIMinimumCompositing.h>
#import <CoreImage/CIMaximumCompositing.h>
#import <CoreImage/CIPlusDarkerCompositing.h>
#import <CoreImage/CIPlusLighterCompositing.h>
#import <CoreImage/AutoCropper.h>
#import <CoreImage/CIEdgeWork.h>
#import <CoreImage/CUIScaleClampFilter.h>
#import <CoreImage/CUIInnerGlowOrShadowFilter.h>
#import <CoreImage/CUIOuterGlowOrShadowFilter.h>
#import <CoreImage/CUIShapeEffectBlur1.h>
#import <CoreImage/CUIOuterBevelEmbossFilter.h>
#import <CoreImage/CUIInnerBevelEmbossFilter.h>
#import <CoreImage/CISkyAndGrassAdjust.h>
#import <CoreImage/CIRedEyeRepair.h>
#import <CoreImage/CIMedianFilter.h>
#import <CoreImage/CIBumpDistortion.h>
#import <CoreImage/CIBumpDistortionLinear.h>
#import <CoreImage/CIFeature.h>
#import <CoreImage/CIFaceFeature.h>
#import <CoreImage/CIRectangleFeature.h>
#import <CoreImage/CIQRCodeFeature.h>
#import <CoreImage/CITextFeature.h>
#import <CoreImage/CIBlurmapSmoothing.h>
#import <CoreImage/CIPortraitBlurNoise.h>
#import <CoreImage/CIPortraitBlurDirectionalBlur.h>
#import <CoreImage/CIPortraitBlur.h>
#import <CoreImage/CIPortraitBlurPreProcess.h>
#import <CoreImage/CIIntegralImageKernelProcessor.h>
#import <CoreImage/CIIntegralImage.h>
#import <CoreImage/CIPortraitLocalContrast.h>
#import <CoreImage/CIFilterGeneratorCIFilter.h>
#import <CoreImage/CIFilterGeneratorConnection.h>
#import <CoreImage/CIFilterGenerator.h>
#import <CoreImage/CIRadialGradient.h>
#import <CoreImage/CILinearGradient.h>
#import <CoreImage/CISmoothLinearGradient.h>
#import <CoreImage/CIGaussianGradient.h>
#import <CoreImage/CIHueSaturationValueGradient.h>
#import <CoreImage/CIVariableBoxBlur.h>
#import <CoreImage/CIColorControls.h>
#import <CoreImage/CIHueAdjust.h>
#import <CoreImage/CIBilateralSolverGPU.h>
#import <CoreImage/CIRectangleGenerator.h>
#import <CoreImage/CICrop.h>
#import <CoreImage/CIPhotoEffect.h>
#import <CoreImage/CIPhotoEffectNoir.h>
#import <CoreImage/CIPhotoEffectChrome.h>
#import <CoreImage/CIPhotoEffectFade.h>
#import <CoreImage/CIPhotoEffectInstant.h>
#import <CoreImage/CIPhotoEffectMono.h>
#import <CoreImage/CIPhotoEffectProcess.h>
#import <CoreImage/CIPhotoEffectTonal.h>
#import <CoreImage/CIPhotoEffectTransfer.h>
#import <CoreImage/CIPhotoEffectStageMono.h>
#import <CoreImage/CIEdges.h>
#import <CoreImage/CIPortraitLightingSide.h>
#import <CoreImage/CIPortraitLightingFront.h>
#import <CoreImage/CIPortraitLightingStrobe.h>
#import <CoreImage/CIPortraitLightingContour.h>
#import <CoreImage/CIPortraitLightingSpot.h>
#import <CoreImage/CIPortraitLightingNeckContour.h>
#import <CoreImage/CICircleSplashDistortion.h>
#import <CoreImage/CPUFaceMask.h>
#import <CoreImage/CIHistogramDisplayFilter.h>
#import <CoreImage/CIColorCube.h>
#import <CoreImage/CIColorCubeWithColorSpace.h>
#import <CoreImage/CIColorCubesMixedWithMask.h>
#import <CoreImage/CIPortraitToothMask.h>
#import <CoreImage/CIPortraitToothMaskProcessor.h>
#import <CoreImage/CIMinimumComponent.h>
#import <CoreImage/CIMaximumComponent.h>
#import <CoreImage/CIDocumentEnhancer.h>
#import <CoreImage/CIPaperWash.h>
#import <CoreImage/CIAutoEnhanceFace.h>
#import <CoreImage/CIVibrance.h>
#import <CoreImage/CIImageAccumulator.h>
#import <CoreImage/CIStretchCrop.h>
#import <CoreImage/CINinePartStretched.h>
#import <CoreImage/CINinePartTiled.h>
#import <CoreImage/CILocalContrast.h>
#import <CoreImage/_CIScreenFilter.h>
#import <CoreImage/CIDotScreen.h>
#import <CoreImage/CIHatchedScreen.h>
#import <CoreImage/CILineScreen.h>
#import <CoreImage/CICircularScreen.h>
#import <CoreImage/CIColor.h>
#import <CoreImage/CICrystallize.h>
#import <CoreImage/CISepiaTone.h>
#import <CoreImage/CIPageCurlTransition.h>
#import <CoreImage/CIPageCurlWithShadowTransition.h>
#import <CoreImage/CIFlashTransition.h>
#import <CoreImage/CISRGBToneCurveToLinear.h>
#import <CoreImage/CILinearToSRGBToneCurve.h>
#import <CoreImage/CIFilterClassAttributes.h>
#import <CoreImage/CIFilterClassCategories.h>
#import <CoreImage/CIFilterClassDefaults.h>
#import <CoreImage/CIFilterClassInfo.h>
#import <CoreImage/CIEnhancementHistogram.h>
#import <CoreImage/CIExposureAdjust.h>
#import <CoreImage/CILumaMap.h>
#import <CoreImage/CIXRay.h>
#import <CoreImage/CIThermal.h>
#import <CoreImage/CIStripesGenerator.h>
#import <CoreImage/CIDisintegrateWithMaskTransition.h>
#import <CoreImage/CIDisplacementDistortion.h>
#import <CoreImage/CIStarShineGenerator.h>
#import <CoreImage/CIRAWTemperatureAdjust.h>
#import <CoreImage/CIRAWGamutMapping.h>
#import <CoreImage/CILightTunnel.h>
#import <CoreImage/CIBlendWithMask.h>
#import <CoreImage/CIBlendWithRedMask.h>
#import <CoreImage/CIBlendWithBlueMask.h>
#import <CoreImage/CIBlendWithAlphaMask.h>
#import <CoreImage/CIImage.h>
#import <CoreImage/CIReedSolomon.h>
#import <CoreImage/CIStretch.h>
#import <CoreImage/CIGammaAdjust.h>
#import <CoreImage/CIDroste.h>
#import <CoreImage/CIRectangleDetector.h>
#import <CoreImage/CIOpTile.h>
#import <CoreImage/CIClamp.h>
#import <CoreImage/CIAffineClamp.h>
#import <CoreImage/CISwipeTransition.h>
#import <CoreImage/CIPinchDistortion.h>
#import <CoreImage/CGRenderer.h>
#import <CoreImage/PDFRenderer.h>
#import <CoreImage/PNGRenderer.h>
#import <CoreImage/DOTRenderer.h>
#import <CoreImage/CIPerspectiveTransformWithExtent.h>
#import <CoreImage/CIPerspectiveTransform.h>
#import <CoreImage/CIPerspectiveTile.h>
#import <CoreImage/CIPerspectiveCorrection.h>
#import <CoreImage/CIFaceBalance.h>
#import <CoreImage/CIPhotoEffect3D.h>
#import <CoreImage/CIPhotoEffect3DVivid.h>
#import <CoreImage/CIPhotoEffect3DVividWarm.h>
#import <CoreImage/CIPhotoEffect3DVividCool.h>
#import <CoreImage/CIPhotoEffect3DDramatic.h>
#import <CoreImage/CIPhotoEffect3DDramaticWarm.h>
#import <CoreImage/CIPhotoEffect3DDramaticCool.h>
#import <CoreImage/CIPhotoEffect3DSilverplate.h>
#import <CoreImage/CIPhotoEffect3DCommercial.h>
#import <CoreImage/CIPhotoEffect3DNoir.h>
#import <CoreImage/CIBarcodeDetector.h>
#import <CoreImage/CIDissolveTransition.h>
#import <CoreImage/CIColorPolynomial.h>
#import <CoreImage/CIColorCrossPolynomial.h>
#import <CoreImage/CIKernel.h>
#import <CoreImage/CIColorKernel.h>
#import <CoreImage/CIWarpKernel.h>
#import <CoreImage/CIBlendKernel.h>
#import <CoreImage/CIAccordionFoldTransition.h>
#import <CoreImage/CIMaskedVariableBlur.h>
#import <CoreImage/LightingFacePoints.h>
#import <CoreImage/CIBarcodeGenerator.h>
#import <CoreImage/CICodeGenerator.h>
#import <CoreImage/CIQRCodeGenerator.h>
#import <CoreImage/CIAztecCodeGenerator.h>
#import <CoreImage/CIPDF417BarcodeGenerator.h>
#import <CoreImage/CICode128BarcodeGenerator.h>
#import <CoreImage/CIRippleTransition.h>
#import <CoreImage/CILensModelCalculatorNative.h>
#import <CoreImage/CILensModelCalculator.h>
#import <CoreImage/CILensModelApply.h>
#import <CoreImage/CILensModelKernel.h>
#import <CoreImage/CIToneCurve.h>
#import <CoreImage/CIEnhancementCalculation.h>

void* AVCameraCalibrationDataClass(void);
void* AVCameraCalibrationDataIntrinsicMatrix(void);
void* AVCameraCalibrationDataIntrinsicMatrixReferenceDimensions(void);
void* AVDepthDataClass(void);
void* AVDepthDataGetAccuracy(void);
void* AVDepthDataGetPortraitScore(void);
void* AVFDepthCameraCalibrationData(void);
void* AVFDepthDataByConvertingToDepthDataType(void);
void* AVFDepthDataByReplacingDepthDataMapWithPixelBuffer(void);
void* AVFDepthDataDictionaryRepresentation(void);
void* AVFDepthDataFromDictionary(void);
void* AVFDepthDataMap(void);
void* AVFDepthDataType(void);
void* CI_GenericRGBLinear_to_TempTint(void);
void* CI_TempTint_to_xy(void);
void* CI_xy_to_TempTint(void);
void* open_memstream(void);

#endif