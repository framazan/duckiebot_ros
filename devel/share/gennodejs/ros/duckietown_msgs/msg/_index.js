
"use strict";

let SignalsDetection = require('./SignalsDetection.js');
let LineFollowerStamped = require('./LineFollowerStamped.js');
let LEDDetectionArray = require('./LEDDetectionArray.js');
let AprilTagDetectionArray = require('./AprilTagDetectionArray.js');
let IntersectionPoseImg = require('./IntersectionPoseImg.js');
let CarControl = require('./CarControl.js');
let EncoderStamped = require('./EncoderStamped.js');
let AprilTagDetection = require('./AprilTagDetection.js');
let DroneControl = require('./DroneControl.js');
let Rect = require('./Rect.js');
let IntersectionPoseImgDebug = require('./IntersectionPoseImgDebug.js');
let ButtonEvent = require('./ButtonEvent.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let StreetNameDetection = require('./StreetNameDetection.js');
let DisplayFragment = require('./DisplayFragment.js');
let TagInfo = require('./TagInfo.js');
let FSMState = require('./FSMState.js');
let WheelsCmdStamped = require('./WheelsCmdStamped.js');
let Vector2D = require('./Vector2D.js');
let MaintenanceState = require('./MaintenanceState.js');
let LanePose = require('./LanePose.js');
let DiagnosticsRosTopicArray = require('./DiagnosticsRosTopicArray.js');
let DiagnosticsCodeProfiling = require('./DiagnosticsCodeProfiling.js');
let VehiclePose = require('./VehiclePose.js');
let DiagnosticsRosLinkArray = require('./DiagnosticsRosLinkArray.js');
let DiagnosticsRosParameterArray = require('./DiagnosticsRosParameterArray.js');
let IntersectionPose = require('./IntersectionPose.js');
let SegmentList = require('./SegmentList.js');
let DiagnosticsRosTopic = require('./DiagnosticsRosTopic.js');
let KinematicsWeights = require('./KinematicsWeights.js');
let SceneSegments = require('./SceneSegments.js');
let DuckieSensor = require('./DuckieSensor.js');
let DiagnosticsRosLink = require('./DiagnosticsRosLink.js');
let LEDDetectionDebugInfo = require('./LEDDetectionDebugInfo.js');
let LEDInterpreter = require('./LEDInterpreter.js');
let DiagnosticsCodeProfilingArray = require('./DiagnosticsCodeProfilingArray.js');
let ObstacleImageDetection = require('./ObstacleImageDetection.js');
let Segment = require('./Segment.js');
let LightSensor = require('./LightSensor.js');
let Trajectory = require('./Trajectory.js');
let LEDDetection = require('./LEDDetection.js');
let BoolStamped = require('./BoolStamped.js');
let LEDPattern = require('./LEDPattern.js');
let ParamTuner = require('./ParamTuner.js');
let KinematicsParameters = require('./KinematicsParameters.js');
let TurnIDandType = require('./TurnIDandType.js');
let DiagnosticsRosProfiling = require('./DiagnosticsRosProfiling.js');
let Pixel = require('./Pixel.js');
let AprilTagsWithInfos = require('./AprilTagsWithInfos.js');
let DroneMode = require('./DroneMode.js');
let DiagnosticsRosNode = require('./DiagnosticsRosNode.js');
let WheelsCmd = require('./WheelsCmd.js');
let SignalsDetectionETHZ17 = require('./SignalsDetectionETHZ17.js');
let DiagnosticsRosProfilingUnit = require('./DiagnosticsRosProfilingUnit.js');
let ThetaDotSample = require('./ThetaDotSample.js');
let ObstacleProjectedDetection = require('./ObstacleProjectedDetection.js');
let EpisodeStart = require('./EpisodeStart.js');
let DuckiebotLED = require('./DuckiebotLED.js');
let NodeParameter = require('./NodeParameter.js');
let Twist2DStamped = require('./Twist2DStamped.js');
let WheelEncoderStamped = require('./WheelEncoderStamped.js');
let Vsample = require('./Vsample.js');
let SourceTargetNodes = require('./SourceTargetNodes.js');
let Rects = require('./Rects.js');
let AntiInstagramThresholds = require('./AntiInstagramThresholds.js');
let StopLineReading = require('./StopLineReading.js');
let VehicleCorners = require('./VehicleCorners.js');
let ObstacleImageDetectionList = require('./ObstacleImageDetectionList.js');
let StreetNames = require('./StreetNames.js');
let CoordinationClearance = require('./CoordinationClearance.js');
let ObstacleType = require('./ObstacleType.js');
let WheelsCmdDBV2Stamped = require('./WheelsCmdDBV2Stamped.js');
let CoordinationSignal = require('./CoordinationSignal.js');
let ObstacleProjectedDetectionList = require('./ObstacleProjectedDetectionList.js');

module.exports = {
  SignalsDetection: SignalsDetection,
  LineFollowerStamped: LineFollowerStamped,
  LEDDetectionArray: LEDDetectionArray,
  AprilTagDetectionArray: AprilTagDetectionArray,
  IntersectionPoseImg: IntersectionPoseImg,
  CarControl: CarControl,
  EncoderStamped: EncoderStamped,
  AprilTagDetection: AprilTagDetection,
  DroneControl: DroneControl,
  Rect: Rect,
  IntersectionPoseImgDebug: IntersectionPoseImgDebug,
  ButtonEvent: ButtonEvent,
  Pose2DStamped: Pose2DStamped,
  StreetNameDetection: StreetNameDetection,
  DisplayFragment: DisplayFragment,
  TagInfo: TagInfo,
  FSMState: FSMState,
  WheelsCmdStamped: WheelsCmdStamped,
  Vector2D: Vector2D,
  MaintenanceState: MaintenanceState,
  LanePose: LanePose,
  DiagnosticsRosTopicArray: DiagnosticsRosTopicArray,
  DiagnosticsCodeProfiling: DiagnosticsCodeProfiling,
  VehiclePose: VehiclePose,
  DiagnosticsRosLinkArray: DiagnosticsRosLinkArray,
  DiagnosticsRosParameterArray: DiagnosticsRosParameterArray,
  IntersectionPose: IntersectionPose,
  SegmentList: SegmentList,
  DiagnosticsRosTopic: DiagnosticsRosTopic,
  KinematicsWeights: KinematicsWeights,
  SceneSegments: SceneSegments,
  DuckieSensor: DuckieSensor,
  DiagnosticsRosLink: DiagnosticsRosLink,
  LEDDetectionDebugInfo: LEDDetectionDebugInfo,
  LEDInterpreter: LEDInterpreter,
  DiagnosticsCodeProfilingArray: DiagnosticsCodeProfilingArray,
  ObstacleImageDetection: ObstacleImageDetection,
  Segment: Segment,
  LightSensor: LightSensor,
  Trajectory: Trajectory,
  LEDDetection: LEDDetection,
  BoolStamped: BoolStamped,
  LEDPattern: LEDPattern,
  ParamTuner: ParamTuner,
  KinematicsParameters: KinematicsParameters,
  TurnIDandType: TurnIDandType,
  DiagnosticsRosProfiling: DiagnosticsRosProfiling,
  Pixel: Pixel,
  AprilTagsWithInfos: AprilTagsWithInfos,
  DroneMode: DroneMode,
  DiagnosticsRosNode: DiagnosticsRosNode,
  WheelsCmd: WheelsCmd,
  SignalsDetectionETHZ17: SignalsDetectionETHZ17,
  DiagnosticsRosProfilingUnit: DiagnosticsRosProfilingUnit,
  ThetaDotSample: ThetaDotSample,
  ObstacleProjectedDetection: ObstacleProjectedDetection,
  EpisodeStart: EpisodeStart,
  DuckiebotLED: DuckiebotLED,
  NodeParameter: NodeParameter,
  Twist2DStamped: Twist2DStamped,
  WheelEncoderStamped: WheelEncoderStamped,
  Vsample: Vsample,
  SourceTargetNodes: SourceTargetNodes,
  Rects: Rects,
  AntiInstagramThresholds: AntiInstagramThresholds,
  StopLineReading: StopLineReading,
  VehicleCorners: VehicleCorners,
  ObstacleImageDetectionList: ObstacleImageDetectionList,
  StreetNames: StreetNames,
  CoordinationClearance: CoordinationClearance,
  ObstacleType: ObstacleType,
  WheelsCmdDBV2Stamped: WheelsCmdDBV2Stamped,
  CoordinationSignal: CoordinationSignal,
  ObstacleProjectedDetectionList: ObstacleProjectedDetectionList,
};
