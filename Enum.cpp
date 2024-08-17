																/* VALORANT V9.03*/
																/* QQ 1787174068  */
																/* QQ 2278616922*/
// Enum  CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
    Info                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    EAutomationEventType                           = 3

};


// Enum  CoreUObject.Default
enum class Default : uint8_t
{

};


// Enum  CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    Open                                           = 2,
    ERangeBoundTypes                               = 3

};


// Enum  CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
    CIM                                            = 0,
    CIM                                            = 1,
    CIM                                            = 2,
    CIM                                            = 3,
    CIM                                            = 4,
    CIM                                            = 5,
    CIM                                            = 6

};


// Enum  CoreUObject.EInputDeviceConnectionState
enum class EInputDeviceConnectionState : uint8_t
{
    Invalid                                        = 0,
    Unknown                                        = 1,
    Disconnected                                   = 2,
    Connected                                      = 3,
    EInputDeviceConnectionState                    = 4

};


// Enum  CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
    Game                                           = 0,
    Engine                                         = 1,
    Editor                                         = 2,
    ELocalizedTextSourceCategory                   = 3

};


// Enum  GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
    CancelAbilityImmediately                       = 0,
    RemoveAbilityOnEnd                             = 1,
    DoNothing                                      = 2,
    EGameplayEffectGrantedAbilityRemovePolicy      = 3

};


// Enum  DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
    NotStarted                                     = 0,
    WaitingForInitialAcquire                       = 1,
    InitialAcquireFinished                         = 2,
    WaitingForResources                            = 3,
    AcquireFinished                                = 4,
    AcquireError                                   = 5,
    DoesNotExist                                   = 6,
    EDataRegistryAcquireStatus                     = 7

};


// Enum  Engine.ETextGender
enum class ETextGender : uint8_t
{
    Masculine                                      = 0,
    Feminine                                       = 1,
    Neuter                                         = 2,
    ETextGender                                    = 3

};


// Enum  Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
    Int                                            = 0,
    UInt                                           = 1,
    Float                                          = 2,
    Double                                         = 3,
    Text                                           = 4,
    Gender                                         = 5,
    EFormatArgumentType                            = 6

};


// Enum  Engine.EAnimDataModelNotifyType
enum class EAnimDataModelNotifyType : uint8_t
{
    BracketOpened                                  = 0,
    BracketClosed                                  = 1,
    TrackAdded                                     = 2,
    TrackChanged                                   = 3,
    TrackRemoved                                   = 4,
    SequenceLengthChanged                          = 5,
    FrameRateChanged                               = 6,
    CurveAdded                                     = 7,
    CurveChanged                                   = 8,
    CurveRemoved                                   = 9,
    CurveFlagsChanged                              = 10,
    CurveRenamed                                   = 11,
    CurveScaled                                    = 12,
    CurveColorChanged                              = 13,
    AttributeAdded                                 = 14,
    AttributeRemoved                               = 15,
    AttributeChanged                               = 16,
    Populated                                      = 17,
    Reset                                          = 18,
    Invalid                                        = 19,
    EAnimDataModelNotifyType                       = 20

};


// Enum  InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
    Touch1                                         = 0,
    Touch2                                         = 1,
    Touch3                                         = 2,
    Touch4                                         = 3,
    Touch5                                         = 4,
    Touch6                                         = 5,
    Touch7                                         = 6,
    Touch8                                         = 7,
    Touch9                                         = 8,
    Touch10                                        = 9,
    CursorPointerIndex                             = 10,
    MAX                                            = 11,
    ETouchIndex                                    = 12

};


// Enum  Engine.EMovementMode
enum class EMovementMode : uint8_t
{
    MOVE                                           = 0,
    MOVE                                           = 1,
    MOVE                                           = 2,
    MOVE                                           = 3,
    MOVE                                           = 4,
    MOVE                                           = 5,
    MOVE                                           = 6,
    MOVE                                           = 7

};


// Enum  Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
    Playing                                        = 0,
    Stopped                                        = 1,
    Paused                                         = 2,
    FadingIn                                       = 3,
    FadingOut                                      = 4,
    Count                                          = 5,
    EAudioComponentPlayState                       = 6

};


// Enum  Engine.EDataLayerRuntimeState
enum class EDataLayerRuntimeState : uint8_t
{
    Unloaded                                       = 0,
    Loaded                                         = 1,
    Activated                                      = 2,
    EDataLayerRuntimeState                         = 3

};


// Enum  Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
    CommandOnFailedToQueue                         = 0,
    CommandOnQueued                                = 1,
    CommandOnCanceled                              = 2,
    CommandOnAboutToStart                          = 3,
    CommandOnStarted                               = 4,
    Count                                          = 5,
    EQuartzCommandDelegateSubType                  = 6

};


// Enum  Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8_t
{
    Bar                                            = 0,
    Beat                                           = 1,
    ThirtySecondNote                               = 2,
    SixteenthNote                                  = 3,
    EighthNote                                     = 4,
    QuarterNote                                    = 5,
    HalfNote                                       = 6,
    WholeNote                                      = 7,
    DottedSixteenthNote                            = 8,
    DottedEighthNote                               = 9,
    DottedQuarterNote                              = 10,
    DottedHalfNote                                 = 11,
    DottedWholeNote                                = 12,
    SixteenthNoteTriplet                           = 13,
    EighthNoteTriplet                              = 14,
    QuarterNoteTriplet                             = 15,
    HalfNoteTriplet                                = 16,
    Tick                                           = 17,
    Count                                          = 18,
    None                                           = 19,
    EQuartzCommandQuantization                     = 20

};


// Enum  Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
    PIDT                                           = 0,
    PIDT                                           = 1,
    PIDT                                           = 2,
    PIDT                                           = 3,
    PIDT                                           = 4,
    PIDT                                           = 5,
    PIDT                                           = 6

};


// Enum  Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
    Destroyed                                      = 0,
    LevelTransition                                = 1,
    EndPlayInEditor                                = 2,
    RemovedFromWorld                               = 3,
    Quit                                           = 4,
    EEndPlayReason                                 = 5

};


// Enum  Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
    TG                                             = 0,
    TG                                             = 1,
    TG                                             = 2,
    TG                                             = 3,
    TG                                             = 4,
    TG                                             = 5,
    TG                                             = 6,
    TG                                             = 7,
    TG                                             = 8

};


// Enum  Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
    Native                                         = 0,
    SimpleConstructionScript                       = 1,
    UserConstructionScript                         = 2,
    Instance                                       = 3,
    EComponentCreationMethod                       = 4

};


// Enum  Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
    Unknown                                        = 0,
    Good                                           = 1,
    Bad                                            = 2,
    Serious                                        = 3,
    Critical                                       = 4,
    NumSeverities                                  = 5,
    ETemperatureSeverityType                       = 6

};


// Enum  Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
    Custom                                         = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    UseGlobalPhysicsSetting                        = 4,
    EPlaneConstraintAxisSetting                    = 5

};


// Enum  Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
    OneShot                                        = 0,
    OneShot                                        = 1,
    Loop                                           = 2,
    PingPong                                       = 3,
    EInterpToBehaviourType                         = 4

};


// Enum  Engine.ETeleportType
enum class ETeleportType : uint8_t
{
    None                                           = 0,
    TeleportPhysics                                = 1,
    ResetPhysics                                   = 2,
    ETeleportType                                  = 3

};


// Enum  Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
    ObjectTypeQuery1                               = 0,
    ObjectTypeQuery2                               = 1,
    ObjectTypeQuery3                               = 2,
    ObjectTypeQuery4                               = 3,
    ObjectTypeQuery5                               = 4,
    ObjectTypeQuery6                               = 5,
    ObjectTypeQuery7                               = 6,
    ObjectTypeQuery8                               = 7,
    ObjectTypeQuery9                               = 8,
    ObjectTypeQuery10                              = 9,
    ObjectTypeQuery11                              = 10,
    ObjectTypeQuery12                              = 11,
    ObjectTypeQuery13                              = 12,
    ObjectTypeQuery14                              = 13,
    ObjectTypeQuery15                              = 14,
    ObjectTypeQuery16                              = 15,
    ObjectTypeQuery17                              = 16,
    ObjectTypeQuery18                              = 17,
    ObjectTypeQuery19                              = 18,
    ObjectTypeQuery20                              = 19,
    ObjectTypeQuery21                              = 20,
    ObjectTypeQuery22                              = 21,
    ObjectTypeQuery23                              = 22,
    ObjectTypeQuery24                              = 23,
    ObjectTypeQuery25                              = 24,
    ObjectTypeQuery26                              = 25,
    ObjectTypeQuery27                              = 26,
    ObjectTypeQuery28                              = 27,
    ObjectTypeQuery29                              = 28,
    ObjectTypeQuery30                              = 29,
    ObjectTypeQuery31                              = 30,
    ObjectTypeQuery32                              = 31,
    ObjectTypeQuery                                = 32,
    EObjectTypeQuery                               = 33

};


// Enum  Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
    None                                           = 0,
    ForOneFrame                                    = 1,
    ForDuration                                    = 2,
    Persistent                                     = 3,
    EDrawDebugTrace                                = 4

};


// Enum  Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
    TraceTypeQuery1                                = 0,
    TraceTypeQuery2                                = 1,
    TraceTypeQuery3                                = 2,
    TraceTypeQuery4                                = 3,
    TraceTypeQuery5                                = 4,
    TraceTypeQuery6                                = 5,
    TraceTypeQuery7                                = 6,
    TraceTypeQuery8                                = 7,
    TraceTypeQuery9                                = 8,
    TraceTypeQuery10                               = 9,
    TraceTypeQuery11                               = 10,
    TraceTypeQuery12                               = 11,
    TraceTypeQuery13                               = 12,
    TraceTypeQuery14                               = 13,
    TraceTypeQuery15                               = 14,
    TraceTypeQuery16                               = 15,
    TraceTypeQuery17                               = 16,
    TraceTypeQuery18                               = 17,
    TraceTypeQuery19                               = 18,
    TraceTypeQuery20                               = 19,
    TraceTypeQuery21                               = 20,
    TraceTypeQuery22                               = 21,
    TraceTypeQuery23                               = 22,
    TraceTypeQuery24                               = 23,
    TraceTypeQuery25                               = 24,
    TraceTypeQuery26                               = 25,
    TraceTypeQuery27                               = 26,
    TraceTypeQuery28                               = 27,
    TraceTypeQuery29                               = 28,
    TraceTypeQuery30                               = 29,
    TraceTypeQuery31                               = 30,
    TraceTypeQuery32                               = 31,
    TraceTypeQuery                                 = 32,
    ETraceTypeQuery                                = 33

};


// Enum  Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
    Move                                           = 0,
    Stop                                           = 1,
    Return                                         = 2,
    EMoveComponentAction                           = 3

};


// Enum  Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
    Quit                                           = 0,
    Background                                     = 1,
    EQuitPreference                                = 2

};


// Enum  NetCore.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
    NetDriverAlreadyExists                         = 0,
    NetDriverCreateFailure                         = 1,
    NetDriverListenFailure                         = 2,
    ConnectionLost                                 = 3,
    ConnectionTimeout                              = 4,
    FailureReceived                                = 5,
    OutdatedClient                                 = 6,
    OutdatedServer                                 = 7,
    PendingConnectionFailure                       = 8,
    NetGuidMismatch                                = 9,
    NetChecksumMismatch                            = 10,
    ENetworkFailure                                = 11

};


// Enum  Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
    NoLevel                                        = 0,
    LoadMapFailure                                 = 1,
    InvalidURL                                     = 2,
    PackageMissing                                 = 3,
    PackageVersion                                 = 4,
    NoDownload                                     = 5,
    TravelFailure                                  = 6,
    CheatCommands                                  = 7,
    PendingNetGameCreateFailure                    = 8,
    CloudSaveFailure                               = 9,
    ServerTravelFailure                            = 10,
    ClientTravelFailure                            = 11,
    ETravelFailure                                 = 12

};


// Enum  Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
    Unknown                                        = 0,
    Portrait                                       = 1,
    PortraitUpsideDown                             = 2,
    LandscapeLeft                                  = 3,
    LandscapeRight                                 = 4,
    FaceUp                                         = 5,
    FaceDown                                       = 6,
    PortraitSensor                                 = 7,
    LandscapeSensor                                = 8,
    FullSensor                                     = 9,
    EScreenOrientation                             = 10

};


// Enum  Engine.EApplicationState
enum class EApplicationState : uint8_t
{
    Unknown                                        = 0,
    Inactive                                       = 1,
    Background                                     = 2,
    Active                                         = 3,
    EApplicationState                              = 4

};


// Enum  Engine.EComponentPhysicsStateChange
enum class EComponentPhysicsStateChange : uint8_t
{
    Created                                        = 0,
    Destroyed                                      = 1,
    EComponentPhysicsStateChange                   = 2

};


// Enum  GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
    Source                                         = 0,
    Target                                         = 1,
    EGameplayEffectAttributeCaptureSource          = 2

};


// Enum  GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
    OnActive                                       = 0,
    WhileActive                                    = 1,
    Executed                                       = 2,
    Removed                                        = 3,
    EGameplayCueEvent                              = 4

};


// Enum  GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
    StartOnTop                                     = 0,
    StartAtEnd                                     = 1,
    RequestCancelAndStartOnTop                     = 2,
    RequestCancelAndStartAtEnd                     = 3,
    ETaskResourceOverlapPolicy                     = 4

};


// Enum  GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
    Error                                          = 0,
    Failed                                         = 1,
    Success                                        = 2,
    Success                                        = 3,
    Success                                        = 4,
    EGameplayTaskRunResult                         = 5

};


// Enum  GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
    Authority                                      = 0,
    NonAuthority                                   = 1,
    Predicting                                     = 2,
    Confirmed                                      = 3,
    Rejected                                       = 4,
    EGameplayAbilityActivationMode                 = 5

};


// Enum  GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
    GenericConfirm                                 = 0,
    GenericCancel                                  = 1,
    InputPressed                                   = 2,
    InputReleased                                  = 3,
    GenericSignalFromClient                        = 4,
    GenericSignalFromServer                        = 5,
    GameCustom1                                    = 6,
    GameCustom2                                    = 7,
    GameCustom3                                    = 8,
    GameCustom4                                    = 9,
    GameCustom5                                    = 10,
    GameCustom6                                    = 11,
    MAX                                            = 12

};


// Enum  NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
    None                                           = 0,
    HasBeenSerialized                              = 1,
    HasDeltaBeenRequested                          = 2,
    IsUsingDeltaSerialization                      = 4,
    EFastArraySerializerDeltaFlags                 = 5

};


// Enum  GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
    CueParameters                                  = 0,
    FromSpec                                       = 1,
    EGameplayCuePayloadType                        = 2

};


// Enum  GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
    Ability1                                       = 0,
    Ability2                                       = 1,
    Ability3                                       = 2,
    Ability4                                       = 3,
    Ability5                                       = 4,
    Ability6                                       = 5,
    Ability7                                       = 6,
    Ability8                                       = 7,
    Ability9                                       = 8,
    EGameplayAbilityInputBinds                     = 9

};


// Enum  GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
    TDFS                                           = 0,
    TDFS                                           = 1,
    TDFS                                           = 2,
    TDFS                                           = 3

};


// Enum  GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
    WaitingOnGame                                  = 1,
    WaitingOnUser                                  = 2,
    WaitingOnAvatar                                = 4,
    EAbilityTaskWaitState                          = 5

};


// Enum  GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
    AlignFromTargetToSource                        = 0,
    AlignToTargetForward                           = 1,
    AlignToWorldSpace                              = 2,
    ERootMotionMoveToActorTargetOffsetType         = 3

};


// Enum  GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
    BothWait                                       = 0,
    OnlyServerWait                                 = 1,
    OnlyClientWait                                 = 2,
    EAbilityTaskNetSyncType                        = 3

};


// Enum  GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
    None                                           = 0,
    GreaterThan                                    = 1,
    LessThan                                       = 2,
    GreaterThanOrEqualTo                           = 3,
    LessThanOrEqualTo                              = 4,
    NotEqualTo                                     = 5,
    ExactlyEqualTo                                 = 6,
    MAX                                            = 7

};


// Enum  GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
enum class EWaitGameplayTagQueryTriggerCondition : uint8_t
{
    WhenTrue                                       = 0,
    WhenFalse                                      = 1,
    EWaitGameplayTagQueryTriggerCondition          = 2

};


// Enum  GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
    Minimal                                        = 0,
    Mixed                                          = 1,
    Full                                           = 2,
    EGameplayEffectReplicationMode                 = 3

};


// Enum  GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
    Instant                                        = 0,
    UserConfirmed                                  = 1,
    Custom                                         = 2,
    CustomMulti                                    = 3,
    EGameplayTargetingConfirmation                 = 4

};


// Enum  GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
    LiteralTransform                               = 0,
    ActorTransform                                 = 1,
    SocketTransform                                = 2,
    EGameplayAbilityTargetingLocationType          = 3

};


// Enum  GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
    NonInstanced                                   = 0,
    InstancedPerActor                              = 1,
    InstancedPerExecution                          = 2,
    InstancedPerExecutionAndCheckActivation        = 3,
    EGameplayAbilityInstancingPolicy               = 4

};


// Enum  GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
    LocalPredicted                                 = 0,
    LocalOnly                                      = 1,
    ServerInitiated                                = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetExecutionPolicy             = 4

};


// Enum  GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
    ClientOrServer                                 = 0,
    ServerOnlyExecution                            = 1,
    ServerOnlyTermination                          = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetSecurityPolicy              = 4

};


// Enum  GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
    ReplicateNo                                    = 0,
    ReplicateYes                                   = 1,
    EGameplayAbilityReplicationPolicy              = 2

};


// Enum  GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
    GameplayEvent                                  = 0,
    OwnedTagAdded                                  = 1,
    OwnedTagPresent                                = 2,
    EGameplayAbilityTriggerSource                  = 3

};


// Enum  GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
    Position                                       = 0,
    CurrentSectionId                               = 1,
    ERepAnimPositionMethod                         = 2

};


// Enum  GameplayAbilities.EGameplayCueNotify
enum class EGameplayCueNotify : uint8_t
{
    EGameplayCueNotify                             = 0,
    EGameplayCueNotify                             = 1,
    EGameplayCueNotify                             = 2

};


// Enum  GameplayAbilities.EGameplayCueNotify
enum class EGameplayCueNotify : uint8_t
{
    EGameplayCueNotify                             = 0,
    EGameplayCueNotify                             = 1,
    EGameplayCueNotify                             = 2

};


// Enum  GameplayAbilities.EGameplayCueNotify
enum class EGameplayCueNotify : uint8_t
{
    EGameplayCueNotify                             = 0,
    EGameplayCueNotify                             = 1,
    EGameplayCueNotify                             = 2,
    EGameplayCueNotify                             = 3

};


// Enum  GameplayAbilities.EGameplayCueNotify
enum class EGameplayCueNotify : uint8_t
{
    EGameplayCueNotify                             = 0,
    EGameplayCueNotify                             = 1,
    EGameplayCueNotify                             = 2

};


// Enum  GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
    ScalableFloat                                  = 0,
    AttributeBased                                 = 1,
    CustomCalculationClass                         = 2,
    SetByCaller                                    = 3,
    EGameplayEffectMagnitudeCalculation            = 4

};


// Enum  GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
    AttributeMagnitude                             = 0,
    AttributeBaseValue                             = 1,
    AttributeBonusMagnitude                        = 2,
    AttributeMagnitudeEvaluatedUpToChannel         = 3,
    EAttributeBasedFloatCalculationType            = 4

};


// Enum  GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
    CapturedAttributeBacked                        = 0,
    Transient                                      = 1,
    EGameplayEffectScopedModifierAggregatorType    = 2

};


// Enum  GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
    Instant                                        = 0,
    Infinite                                       = 1,
    HasDuration                                    = 2,
    EGameplayEffectDurationType                    = 3

};


// Enum  GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
    RefreshOnSuccessfulApplication                 = 0,
    NeverRefresh                                   = 1,
    EGameplayEffectStackingDurationPolicy          = 2

};


// Enum  GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
    ResetOnSuccessfulApplication                   = 0,
    NeverReset                                     = 1,
    EGameplayEffectStackingPeriodPolicy            = 2

};


// Enum  GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
    ClearEntireStack                               = 0,
    RemoveSingleStackAndRefreshDuration            = 1,
    RefreshDuration                                = 2,
    RemoveSingleStackAndRefreshDurationAndExecution = 3,
    EGameplayEffectStackingExpirationPolicy        = 4

};


// Enum  GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
    NeverReset                                     = 0,
    ResetPeriod                                    = 1,
    ExecuteAndResetPeriod                          = 2,
    EGameplayEffectPeriodInhibitionRemovedPolicy   = 3

};


// Enum  GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
    Channel0                                       = 0,
    Channel1                                       = 1,
    Channel2                                       = 2,
    Channel3                                       = 3,
    Channel4                                       = 4,
    Channel5                                       = 5,
    Channel6                                       = 6,
    Channel7                                       = 7,
    Channel8                                       = 8,
    Channel9                                       = 9,
    Channel                                        = 10,
    EGameplayModEvaluationChannel                  = 11

};


// Enum  GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
    Additive                                       = 0,
    Multiplicitive                                 = 1,
    Division                                       = 2,
    Override                                       = 3,
    Factor                                         = 4,
    Max                                            = 5

};


// Enum  GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
    None                                           = 0,
    AggregateBySource                              = 1,
    AggregateByTarget                              = 2,
    EGameplayEffectStackingType                    = 3

};


// Enum  GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
    NewOrRemoved                                   = 0,
    AnyCountChange                                 = 1,
    EGameplayTagEventType                          = 2

};


// Enum  Niagara.ENiagaraSimCacheAttributeCaptureMode
enum class ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
    All                                            = 0,
    RenderingOnly                                  = 1,
    ExplicitAttributes                             = 2,
    ENiagaraSimCacheAttributeCaptureMode           = 3

};


// Enum  Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
    None                                           = 0,
    SceneGeometry                                  = 1,
    DepthBuffer                                    = 2,
    DistanceField                                  = 3,
    ENiagaraCollisionMode                          = 4

};


// Enum  Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
    UsePrereqs                                     = 0,
    UseComponentTickGroup                          = 1,
    ForceTickFirst                                 = 2,
    ForceTickLast                                  = 3,
    ENiagaraTickBehavior                           = 4

};


// Enum  Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
    Float                                          = 0,
    HalfFloat                                      = 1,
    UnsignedNormalizedByte                         = 2,
    Max                                            = 3

};


// Enum  Niagara.ENiagaraGpuSyncMode
enum class ENiagaraGpuSyncMode : uint8_t
{
    None                                           = 0,
    SyncCpuToGpu                                   = 1,
    SyncGpuToCpu                                   = 2,
    SyncBoth                                       = 3,
    ENiagaraGpuSyncMode                            = 4

};


// Enum  Niagara.ENiagaraMipMapGeneration
enum class ENiagaraMipMapGeneration : uint8_t
{
    Disabled                                       = 0,
    PostStage                                      = 1,
    PostSimulate                                   = 2,
    ENiagaraMipMapGeneration                       = 3

};


// Enum  Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
    Value                                          = 0,
    Binding                                        = 1,
    Custom                                         = 2,
    FailIfPreviouslyNotSet                         = 3,
    ENiagaraDefaultMode                            = 4

};


// Enum  Niagara.ENiagaraDefaultRendererMotionVectorSetting
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t
{
    Precise                                        = 0,
    Approximate                                    = 1,
    ENiagaraDefaultRendererMotionVectorSetting     = 2

};


// Enum  Niagara.ENiagaraRendererMotionVectorSetting
enum class ENiagaraRendererMotionVectorSetting : uint8_t
{
    AutoDetect                                     = 0,
    Precise                                        = 1,
    Approximate                                    = 2,
    Disable                                        = 3,
    ENiagaraRendererMotionVectorSetting            = 4

};


// Enum  Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
    CPUSim                                         = 0,
    GPUComputeSim                                  = 1,
    ENiagaraSimTarget                              = 2

};


// Enum  Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
    TickDeltaTime                                  = 0,
    DesiredAge                                     = 1,
    DesiredAgeNoSeek                               = 2,
    ENiagaraAgeUpdateMode                          = 3

};


// Enum  Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
    Average                                        = 0,
    Maximum                                        = 1,
    ENiagaraStatEvaluationType                     = 2

};


// Enum  Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
    Percent                                        = 0,
    Absolute                                       = 1,
    ENiagaraStatDisplayMode                        = 2

};


// Enum  Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
    ParticleData                                   = 0,
    Shared                                         = 1,
    Event                                          = 2,
    ENiagaraDataSetType                            = 3

};


// Enum  Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
    Undefined                                      = 0,
    Parameter                                      = 1,
    Attribute                                      = 2,
    SystemConstant                                 = 3,
    TranslatorConstant                             = 4,
    RapidIterationParameter                        = 5,
    ENiagaraInputNodeUsage                         = 6

};


// Enum  Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
    NCS                                            = 0,
    NCS                                            = 1,
    NCS                                            = 2,
    NCS                                            = 3,
    NCS                                            = 4,
    NCS                                            = 5,
    NCS                                            = 6,
    NCS                                            = 7

};


// Enum  Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
    Function                                       = 0,
    Module                                         = 1,
    DynamicInput                                   = 2,
    ParticleSpawnScript                            = 3,
    ParticleSpawnScriptInterpolated                = 4,
    ParticleUpdateScript                           = 5,
    ParticleEventScript                            = 6,
    ParticleSimulationStageScript                  = 7,
    ParticleGPUComputeScript                       = 8,
    EmitterSpawnScript                             = 9,
    EmitterUpdateScript                            = 10,
    SystemSpawnScript                              = 11,
    SystemUpdateScript                             = 12,
    ENiagaraScriptUsage                            = 13

};


// Enum  Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
    Spawn                                          = 0,
    Update                                         = 1,
    Event                                          = 2,
    SimulationStage                                = 3,
    Default                                        = 4,
    ENiagaraCompileUsageStaticSwitch               = 5

};


// Enum  Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
    System                                         = 0,
    Emitter                                        = 1,
    Particle                                       = 2,
    ENiagaraScriptContextStaticSwitch              = 3

};


// Enum  Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
    Particle                                       = 0,
    Emitter                                        = 1,
    System                                         = 2,
    Max                                            = 3

};


// Enum  Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
    Particles                                      = 0,
    DataInterface                                  = 1,
    ENiagaraIterationSource                        = 2

};


// Enum  Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
    ImplicitFromSource                             = 0,
    ExplicitParticles                              = 1,
    ExplicitEmitter                                = 2,
    ExplicitSystem                                 = 3,
    ExplicitUser                                   = 4,
    MaxBindingSource                               = 5,
    ENiagaraBindingSource                          = 6

};


// Enum  Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
    Particles                                      = 0,
    Emitter                                        = 1,
    ENiagaraRendererSourceDataMode                 = 2

};


// Enum  Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
    FromCentre                                     = 0,
    FromFirst                                      = 1,
    FromSecond                                     = 2,
    ENiagaraLegacyTrailWidthMode                   = 3

};


// Enum  Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease                                  = 3,
    FreeInPool                                     = 4,
    ENCPoolMethod                                  = 5

};


// Enum  Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8_t
{
    None                                           = 0,
    PendingSpawn                                   = 1,
    PendingSpawnPaused                             = 2,
    Spawning                                       = 3,
    Running                                        = 4,
    Paused                                         = 5,
    Num                                            = 6,
    ENiagaraSystemInstanceState                    = 7

};


// Enum  Niagara.ENiagaraFunctionDebugState
enum class ENiagaraFunctionDebugState : uint8_t
{
    NoDebug                                        = 0,
    Basic                                          = 1,
    ENiagaraFunctionDebugState                     = 2

};


// Enum  Niagara.ENiagaraGpuComputeTickStage
enum class ENiagaraGpuComputeTickStage : uint8_t
{
    PreInitViews                                   = 0,
    PostInitViews                                  = 1,
    PostOpaqueRender                               = 2,
    Max                                            = 3,
    First                                          = 0,
    Last                                           = 2

};


// Enum  Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
    None                                           = 0,
    ViewDepth                                      = 1,
    ViewDistance                                   = 2,
    CustomAscending                                = 3,
    CustomDecending                                = 4,
    ENiagaraSortMode                               = 5

};


// Enum  Niagara.ENDISkelMesh
enum class ENDISkelMesh : uint8_t
{
    ENDISkelMesh                                   = 0,
    ENDISkelMesh                                   = 1,
    ENDISkelMesh                                   = 2,
    ENDISkelMesh                                   = 3

};


// Enum  Niagara.ENDISkelMesh
enum class ENDISkelMesh : uint8_t
{
    ENDISkelMesh                                   = 0,
    ENDISkelMesh                                   = 1,
    ENDISkelMesh                                   = 2,
    ENDISkelMesh                                   = 3

};


// Enum  Niagara.ENDISkelMesh
enum class ENDISkelMesh : uint8_t
{
    ENDISkelMesh                                   = 0,
    ENDISkelMesh                                   = 1,
    ENDISkelMesh                                   = 2

};


// Enum  Niagara.ENiagaraDefaultRendererPixelCoverageMode
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    ENiagaraDefaultRendererPixelCoverageMode       = 2

};


// Enum  Niagara.ENiagaraDefaultSortPrecision
enum class ENiagaraDefaultSortPrecision : uint8_t
{
    Low                                            = 0,
    High                                           = 1,
    ENiagaraDefaultSortPrecision                   = 2

};


// Enum  Niagara.ENiagaraDefaultGpuTranslucentLatency
enum class ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
    Immediate                                      = 0,
    Latent                                         = 1,
    ENiagaraDefaultGpuTranslucentLatency           = 2

};


// Enum  Niagara.ENDICollisionQuery
enum class ENDICollisionQuery : uint8_t
{
    ENDICollisionQuery                             = 0,
    ENDICollisionQuery                             = 1,
    ENDICollisionQuery                             = 2,
    ENDICollisionQuery                             = 3,
    ENDICollisionQuery                             = 4

};


// Enum  Niagara.ENDIActorComponentSourceMode
enum class ENDIActorComponentSourceMode : uint8_t
{
    Default                                        = 0,
    AttachParent                                   = 1,
    LocalPlayer                                    = 2,
    ENDIActorComponentSourceMode                   = 3

};


// Enum  Niagara.ENDIStaticMesh
enum class ENDIStaticMesh : uint8_t
{
    ENDIStaticMesh                                 = 0,
    ENDIStaticMesh                                 = 1,
    ENDIStaticMesh                                 = 2,
    ENDIStaticMesh                                 = 3,
    ENDIStaticMesh                                 = 4

};


// Enum  Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
    Activate                                       = 0,
    ENiagaraSystemSpawnSectionStartBehavior        = 1

};


// Enum  Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
    ActivateIfInactive                             = 0,
    None                                           = 1,
    ENiagaraSystemSpawnSectionEvaluateBehavior     = 2

};


// Enum  Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
    SetSystemInactive                              = 0,
    Deactivate                                     = 1,
    None                                           = 2,
    ENiagaraSystemSpawnSectionEndBehavior          = 3

};


// Enum  Niagara.ENiagaraCompilationState
enum class ENiagaraCompilationState : uint8_t
{
    CheckDDC                                       = 0,
    Precompile                                     = 1,
    StartCompileJob                                = 2,
    AwaitResult                                    = 3,
    OptimizeByteCode                               = 4,
    ProcessResult                                  = 5,
    PutToDDC                                       = 6,
    Finished                                       = 7,
    Aborted                                        = 8,
    ENiagaraCompilationState                       = 9

};


// Enum  Niagara.ENiagaraBakerViewMode
enum class ENiagaraBakerViewMode : uint8_t
{
    Perspective                                    = 0,
    OrthoFront                                     = 1,
    OrthoBack                                      = 2,
    OrthoLeft                                      = 3,
    OrthoRight                                     = 4,
    OrthoTop                                       = 5,
    OrthoBottom                                    = 6,
    Num                                            = 7,
    ENiagaraBakerViewMode                          = 8

};


// Enum  Niagara.ENiagaraDataInterfaceEmitterBindingMode
enum class ENiagaraDataInterfaceEmitterBindingMode : uint8_t
{
    Self                                           = 0,
    Other                                          = 1,
    ENiagaraDataInterfaceEmitterBindingMode        = 2

};


// Enum  Niagara.ENDIExport
enum class ENDIExport : uint8_t
{
    ENDIExport                                     = 0,
    ENDIExport                                     = 1,
    ENDIExport                                     = 2

};


// Enum  Niagara.ENDILandscape
enum class ENDILandscape : uint8_t
{
    ENDILandscape                                  = 0,
    ENDILandscape                                  = 1,
    ENDILandscape                                  = 2,
    ENDILandscape                                  = 3

};


// Enum  Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
    Independent                                    = 0,
    MaxAxis                                        = 1,
    CellSize                                       = 2,
    ESetResolutionMethod                           = 3

};


// Enum  Niagara.ENDISkeletalMesh
enum class ENDISkeletalMesh : uint8_t
{
    ENDISkeletalMesh                               = 0,
    ENDISkeletalMesh                               = 1,
    ENDISkeletalMesh                               = 2,
    ENDISkeletalMesh                               = 3

};


// Enum  Niagara.ENDISkeletalMesh
enum class ENDISkeletalMesh : uint8_t
{
    ENDISkeletalMesh                               = 255,
    ENDISkeletalMesh                               = 0,
    ENDISkeletalMesh                               = 1,
    ENDISkeletalMesh                               = 2,
    ENDISkeletalMesh                               = 256

};


// Enum  Niagara.ENiagaraDebugPlaybackMode
enum class ENiagaraDebugPlaybackMode : uint8_t
{
    Play                                           = 0,
    Loop                                           = 1,
    Paused                                         = 2,
    Step                                           = 3,
    ENiagaraDebugPlaybackMode                      = 4

};


// Enum  Niagara.ENiagaraDebugHudHAlign
enum class ENiagaraDebugHudHAlign : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    ENiagaraDebugHudHAlign                         = 3

};


// Enum  Niagara.ENiagaraDebugHudVAlign
enum class ENiagaraDebugHudVAlign : uint8_t
{
    Top                                            = 0,
    Center                                         = 1,
    Bottom                                         = 2,
    ENiagaraDebugHudVAlign                         = 3

};


// Enum  Niagara.ENiagaraDebugHudFont
enum class ENiagaraDebugHudFont : uint8_t
{
    Small                                          = 0,
    Normal                                         = 1,
    ENiagaraDebugHudFont                           = 2

};


// Enum  Niagara.ENiagaraDebugHudVerbosity
enum class ENiagaraDebugHudVerbosity : uint8_t
{
    None                                           = 0,
    Basic                                          = 1,
    Verbose                                        = 2,
    ENiagaraDebugHudVerbosity                      = 3

};


// Enum  Niagara.ENiagaraDebugHUDOverviewMode
enum class ENiagaraDebugHUDOverviewMode : uint8_t
{
    Overview                                       = 0,
    Scalability                                    = 1,
    Performance                                    = 2,
    GpuComputePerformance                          = 3,
    ENiagaraDebugHUDOverviewMode                   = 4

};


// Enum  Niagara.ENiagaraDebugHUDPerfGraphMode
enum class ENiagaraDebugHUDPerfGraphMode : uint8_t
{
    None                                           = 0,
    GameThread                                     = 1,
    RenderThread                                   = 2,
    GPU                                            = 3,
    ENiagaraDebugHUDPerfGraphMode                  = 4

};


// Enum  Niagara.ENiagaraDebugHUDPerfSampleMode
enum class ENiagaraDebugHUDPerfSampleMode : uint8_t
{
    FrameTotal                                     = 0,
    PerInstanceAverage                             = 1,
    ENiagaraDebugHUDPerfSampleMode                 = 2

};


// Enum  Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
    Deactivate                                     = 0,
    DeactivateImmediate                            = 1,
    DeactivateResume                               = 2,
    DeactivateImmediateResume                      = 3,
    ENiagaraCullReaction                           = 4

};


// Enum  Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
    SpawnOnly                                      = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Continuous                                     = 4,
    ENiagaraScalabilityUpdateFrequency             = 5

};


// Enum  Niagara.ENiagaraCullProxyMode
enum class ENiagaraCullProxyMode : uint8_t
{
    None                                           = 0,
    Instanced                                      = 1,
    ENiagaraCullProxyMode                          = 2

};


// Enum  Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
    EveryParticle                                  = 0,
    SpawnedParticles                               = 1,
    SingleParticle                                 = 2,
    EScriptExecutionMode                           = 3

};


// Enum  Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
    AutomaticEstimate                              = 0,
    ManualEstimate                                 = 1,
    FixedCount                                     = 2,
    EParticleAllocationMode                        = 3

};


// Enum  Niagara.ENiagaraEmitterCalculateBoundMode
enum class ENiagaraEmitterCalculateBoundMode : uint8_t
{
    Dynamic                                        = 0,
    Fixed                                          = 1,
    Programmable                                   = 2,
    ENiagaraEmitterCalculateBoundMode              = 3

};


// Enum  Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
    Default                                        = 0,
    Velocity                                       = 1,
    CameraPosition                                 = 2,
    CameraPlane                                    = 3,
    ENiagaraMeshFacingMode                         = 4

};


// Enum  Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
    Mesh                                           = 0,
    Simulation                                     = 1,
    World                                          = 2,
    Local                                          = 3,
    ENiagaraMeshPivotOffsetSpace                   = 4

};


// Enum  Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
    Simulation                                     = 0,
    World                                          = 1,
    Local                                          = 2,
    ENiagaraMeshLockedAxisSpace                    = 3

};


// Enum  Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
    Default                                        = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    ENiagaraPlatformSelectionState                 = 3

};


// Enum  Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Active                                         = 2,
    Unknown                                        = 3,
    ENiagaraPlatformSetState                       = 4

};


// Enum  Niagara.ENiagaraCVarConditionResponse
enum class ENiagaraCVarConditionResponse : uint8_t
{
    None                                           = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    ENiagaraCVarConditionResponse                  = 3

};


// Enum  Niagara.ENiagaraDeviceProfileRedirectMode
enum class ENiagaraDeviceProfileRedirectMode : uint8_t
{
    CVar                                           = 0,
    DeviceProfile                                  = 1,
    ENiagaraDeviceProfileRedirectMode              = 2

};


// Enum  Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
    Never                                          = 0,
    Individual                                     = 1,
    All                                            = 2,
    ENiagaraPreviewGridResetMode                   = 3

};


// Enum  Niagara.ENiagaraRendererSortPrecision
enum class ENiagaraRendererSortPrecision : uint8_t
{
    Default                                        = 0,
    Low                                            = 1,
    High                                           = 2,
    ENiagaraRendererSortPrecision                  = 3

};


// Enum  Niagara.ENiagaraRendererGpuTranslucentLatency
enum class ENiagaraRendererGpuTranslucentLatency : uint8_t
{
    ProjectDefault                                 = 0,
    Immediate                                      = 1,
    Latent                                         = 2,
    ENiagaraRendererGpuTranslucentLatency          = 3

};


// Enum  Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
    Screen                                         = 0,
    Custom                                         = 1,
    CustomSideVector                               = 2,
    ENiagaraRibbonFacingMode                       = 3

};


// Enum  Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
    Scale                                          = 0,
    Clip                                           = 1,
    ENiagaraRibbonAgeOffsetMode                    = 2

};


// Enum  Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
    FrontToBack                                    = 0,
    BackToFront                                    = 1,
    ENiagaraRibbonDrawDirection                    = 2

};


// Enum  Niagara.ENiagaraRibbonShapeMode
enum class ENiagaraRibbonShapeMode : uint8_t
{
    Plane                                          = 0,
    MultiPlane                                     = 1,
    Tube                                           = 2,
    Custom                                         = 3,
    ENiagaraRibbonShapeMode                        = 4

};


// Enum  Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
    Automatic                                      = 0,
    Custom                                         = 1,
    Disabled                                       = 2,
    ENiagaraRibbonTessellationMode                 = 3

};


// Enum  Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
    SmoothTransition                               = 0,
    Locked                                         = 1,
    ENiagaraRibbonUVEdgeMode                       = 2

};


// Enum  Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
    ScaledUniformly                                = 0,
    ScaledUsingRibbonSegmentLength                 = 1,
    TiledOverRibbonLength                          = 2,
    TiledFromStartOverRibbonLength                 = 3,
    ENiagaraRibbonUVDistributionMode               = 4

};


// Enum  Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
    Copy                                           = 0,
    Zero                                           = 1,
    None                                           = 2,
    MarkInvalid                                    = 3,
    PassThrough                                    = 4,
    EUnusedAttributeBehaviour                      = 5

};


// Enum  Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
    PreDependency                                  = 0,
    PostDependency                                 = 1,
    ENiagaraModuleDependencyType                   = 2

};


// Enum  Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
    SameScript                                     = 0,
    AllScripts                                     = 1,
    ENiagaraModuleDependencyScriptConstraint       = 2

};


// Enum  Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
    Invalid                                        = 0,
    Unexposed                                      = 1,
    Library                                        = 2,
    Hidden                                         = 3,
    ENiagaraScriptLibraryVisibility                = 4

};


// Enum  Niagara.ENiagaraScriptTemplateSpecification
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
    None                                           = 0,
    Template                                       = 1,
    Behavior                                       = 2,
    ENiagaraScriptTemplateSpecification            = 3

};


// Enum  Niagara.ENiagaraModuleDependencyUsage
enum class ENiagaraModuleDependencyUsage : uint8_t
{
    None                                           = 0,
    Spawn                                          = 1,
    Update                                         = 2,
    Event                                          = 3,
    SimulationStage                                = 4,
    ENiagaraModuleDependencyUsage                  = 5

};


// Enum  Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
    Unaligned                                      = 0,
    VelocityAligned                                = 1,
    CustomAlignment                                = 2,
    ENiagaraSpriteAlignment                        = 3

};


// Enum  Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
    FaceCamera                                     = 0,
    FaceCameraPlane                                = 1,
    CustomFacingVector                             = 2,
    FaceCameraPosition                             = 3,
    FaceCameraDistanceBlend                        = 4,
    ENiagaraSpriteFacingMode                       = 5

};


// Enum  Niagara.ENiagaraRendererPixelCoverageMode
enum class ENiagaraRendererPixelCoverageMode : uint8_t
{
    Automatic                                      = 0,
    Disabled                                       = 1,
    Enabled                                        = 2,
    Enabled                                        = 3,
    Enabled                                        = 4,
    Enabled                                        = 5,
    ENiagaraRendererPixelCoverageMode              = 6

};


// Enum  Niagara.ENiagaraStructConversionType
enum class ENiagaraStructConversionType : uint8_t
{
    CopyOnly                                       = 0,
    DoubleToFloat                                  = 1,
    Vector2                                        = 2,
    Vector3                                        = 3,
    Vector4                                        = 4,
    Quat                                           = 5,
    ENiagaraStructConversionType                   = 6

};


// Enum  Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
    None                                           = 0,
    Largest                                        = 1,
    Smallest                                       = 2,
    Scalar                                         = 3,
    Custom                                         = 4,
    ENiagaraNumericOutputTypeSelectionMode         = 5

};


// Enum  Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
    Scalability                                    = 0,
    Internal                                       = 1,
    Owner                                          = 2,
    InternalCompletion                             = 3,
    ENiagaraExecutionStateSource                   = 4

};


// Enum  Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
    Active                                         = 0,
    Inactive                                       = 1,
    InactiveClear                                  = 2,
    Complete                                       = 3,
    Disabled                                       = 4,
    Num                                            = 5,
    ENiagaraExecutionState                         = 6

};


// Enum  Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8_t
{
    Simulation                                     = 0,
    World                                          = 1,
    Local                                          = 2,
    ENiagaraCoordinateSpace                        = 3

};


// Enum  Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
    None                                           = 0,
    ScriptAsset                                    = 1,
    DirectTextEntry                                = 2,
    ENiagaraPythonUpdateScriptReference            = 3

};


// Enum  Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8_t
{
    XAxis                                          = 0,
    YAxis                                          = 1,
    ZAxis                                          = 2,
    ENiagaraOrientationAxis                        = 3

};


// Enum  Niagara.ENiagaraBoolDisplayMode
enum class ENiagaraBoolDisplayMode : uint8_t
{
    DisplayAlways                                  = 0,
    DisplayIfTrue                                  = 1,
    DisplayIfFalse                                 = 2,
    ENiagaraBoolDisplayMode                        = 3

};


// Enum  Niagara.ENiagaraValidationSeverity
enum class ENiagaraValidationSeverity : uint8_t
{
    Info                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    ENiagaraValidationSeverity                     = 3

};


// Enum  Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    DataInterface                                  = 2,
    Bytes                                          = 3,
    ENiagaraVariantMode                            = 4

};


// Enum  Niagara.EVolumeCacheType
enum class EVolumeCacheType : uint8_t
{
    OpenVDB                                        = 0,
    EVolumeCacheType                               = 1

};


// Enum  NiagaraShader.ENiagaraMipMapGenerationType
enum class ENiagaraMipMapGenerationType : uint8_t
{
    Unfiltered                                     = 0,
    Linear                                         = 1,
    Blur1                                          = 2,
    Blur2                                          = 3,
    Blur3                                          = 4,
    Blur4                                          = 5,
    ENiagaraMipMapGenerationType                   = 6

};


// Enum  NiagaraShader.ENiagaraGpuDispatchType
enum class ENiagaraGpuDispatchType : uint8_t
{
    OneD                                           = 0,
    TwoD                                           = 1,
    ThreeD                                         = 2,
    Custom                                         = 3,
    ENiagaraGpuDispatchType                        = 4

};


// Enum  NiagaraShader.ENiagaraSimStageExecuteBehavior
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
    Always                                         = 0,
    OnSimulationReset                              = 1,
    NotOnSimulationReset                           = 2,
    ENiagaraSimStageExecuteBehavior                = 3

};


// Enum  NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8_t
{
    Log                                            = 0,
    Display                                        = 1,
    Warning                                        = 2,
    Error                                          = 3,
    FNiagaraCompileEventSeverity                   = 4

};


// Enum  NiagaraShader.FNiagaraCompileEventSource
enum class FNiagaraCompileEventSource : uint8_t
{
    Unset                                          = 0,
    ScriptDependency                               = 1,
    FNiagaraCompileEventSource                     = 2

};


// Enum  DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
    NoAssets                                       = 0,
    SearchAssets                                   = 1,
    RegisterAssets                                 = 2,
    SearchAndRegisterAssets                        = 3,
    EMetaDataRegistrySourceAssetUsage              = 4

};


// Enum  DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
    Found                                          = 0,
    NotFound                                       = 1,
    EDataRegistrySubsystemGetItemResult            = 2

};


// Enum  DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
    DoesNotExist                                   = 0,
    Unknown                                        = 1,
    Remote                                         = 2,
    OnDisk                                         = 3,
    LocalAsset                                     = 4,
    PreCached                                      = 5,
    EDataRegistryAvailability                      = 6

};


// Enum  CommonConversationRuntime.EConversationTaskResultType
enum class EConversationTaskResultType : uint8_t
{
    Invalid                                        = 0,
    AbortConversation                              = 1,
    AdvanceConversation                            = 2,
    AdvanceConversationWithChoice                  = 3,
    PauseConversationAndSendClientChoices          = 4,
    ReturnToLastClientChoice                       = 5,
    ReturnToCurrentClientChoice                    = 6,
    ReturnToConversationStart                      = 7,
    EConversationTaskResultType                    = 8

};


// Enum  CommonConversationRuntime.EConversationRequirementResult
enum class EConversationRequirementResult : uint8_t
{
    Passed                                         = 0,
    FailedButVisible                               = 1,
    FailedAndHidden                                = 2,
    EConversationRequirementResult                 = 3

};


// Enum  CommonConversationRuntime.EConversationChoiceType
enum class EConversationChoiceType : uint8_t
{
    ServerOnly                                     = 0,
    UserChoiceAvailable                            = 1,
    UserChoiceUnavailable                          = 2,
    EConversationChoiceType                        = 3

};


// Enum  GameFeatures.EGameFeatureTargetState
enum class EGameFeatureTargetState : uint8_t
{
    Installed                                      = 0,
    Registered                                     = 1,
    Loaded                                         = 2,
    Active                                         = 3,
    Count                                          = 4,
    EGameFeatureTargetState                        = 5

};


// Enum  EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8_t
{
    Boolean                                        = 0,
    Axis1D                                         = 1,
    Axis2D                                         = 2,
    Axis3D                                         = 3,
    EInputActionValueType                          = 4

};


// Enum  EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8_t
{
    Error                                          = 0,
    Error                                          = 1,
    Error                                          = 2,
    NotMappable                                    = 3,
    MappingAvailable                               = 4,
    EMappingQueryResult                            = 5

};


// Enum  EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8_t
{
    NoIssue                                        = 0,
    ReservedByAction                               = 1,
    HidesExistingMapping                           = 2,
    HiddenByExistingMapping                        = 4,
    CollisionWithMappingInSameContext              = 8,
    ForcesTypePromotion                            = 16,
    ForcesTypeDemotion                             = 32,
    EMappingQueryIssue                             = 33

};


// Enum  EnhancedInput.EInputMappingRebuildType
enum class EInputMappingRebuildType : uint8_t
{
    None                                           = 0,
    Rebuild                                        = 1,
    RebuildWithFlush                               = 2,
    EInputMappingRebuildType                       = 3

};


// Enum  EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8_t
{
    Axial                                          = 0,
    Radial                                         = 1,
    EDeadZoneType                                  = 2

};


// Enum  EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8_t
{
    Standard                                       = 0,
    UE4                                            = 1,
    EFOVScalingType                                = 2

};


// Enum  EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8_t
{
    YXZ                                            = 0,
    ZYX                                            = 1,
    XZY                                            = 2,
    YZX                                            = 3,
    ZXY                                            = 4,
    EInputAxisSwizzle                              = 5

};


// Enum  EnhancedInput.ETriggerState
enum class ETriggerState : uint8_t
{
    None                                           = 0,
    Ongoing                                        = 1,
    Triggered                                      = 2,
    TriggeredOngoing                               = 3,
    ETriggerState                                  = 4

};


// Enum  EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8_t
{
    None                                           = 0,
    Triggered                                      = 1,
    Started                                        = 2,
    Ongoing                                        = 3,
    Canceled                                       = 4,
    Completed                                      = 5,
    ETriggerEvent                                  = 6

};


// Enum  EnhancedInput.ETriggerType
enum class ETriggerType : uint8_t
{
    Explicit                                       = 0,
    Implicit                                       = 1,
    Blocker                                        = 2,
    ETriggerType                                   = 3

};


// Enum  EnhancedInput.ETriggerEventsSupported
enum class ETriggerEventsSupported : uint8_t
{
    None                                           = 0,
    Instant                                        = 1,
    Uninterruptible                                = 2,
    Ongoing                                        = 4,
    All                                            = 7,
    ETriggerEventsSupported                        = 8

};


// Enum  Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
    Angle                                          = 0,
    Width                                          = 1,
    EBrushFalloffMode                              = 2

};


// Enum  Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
    AlphaBlend                                     = 0,
    Min                                            = 1,
    Max                                            = 2,
    Additive                                       = 3

};


// Enum  Water.EBuoyancyEvent
enum class EBuoyancyEvent : uint8_t
{
    EnteredWaterBody                               = 0,
    ExitedWaterBody                                = 1,
    EBuoyancyEvent                                 = 2

};


// Enum  Water.EWaveSpectrumType
enum class EWaveSpectrumType : uint8_t
{
    Phillips                                       = 0,
    PiersonMoskowitz                               = 1,
    JONSWAP                                        = 2,
    EWaveSpectrumType                              = 3

};


// Enum  Water.EWaterBrushBlendType
enum class EWaterBrushBlendType : uint8_t
{
    AlphaBlend                                     = 0,
    Min                                            = 1,
    Max                                            = 2,
    Additive                                       = 3

};


// Enum  Water.EWaterBodyType
enum class EWaterBodyType : uint8_t
{
    River                                          = 0,
    Lake                                           = 1,
    Ocean                                          = 2,
    Transition                                     = 3,
    Num                                            = 4,
    EWaterBodyType                                 = 5

};


// Enum  Water.EWaterBrushFalloffMode
enum class EWaterBrushFalloffMode : uint8_t
{
    Angle                                          = 0,
    Width                                          = 1,
    EWaterBrushFalloffMode                         = 2

};


// Enum  SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
    Unchecked                                      = 0,
    Checked                                        = 1,
    Undetermined                                   = 2,
    ECheckBoxState                                 = 3

};


// Enum  SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
    Inherit                                        = 0,
    ClipToBounds                                   = 1,
    ClipToBoundsWithoutIntersecting                = 2,
    ClipToBoundsAlways                             = 3,
    OnDemand                                       = 4,
    EWidgetClipping                                = 5

};


// Enum  CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    TextEditBeam                                   = 2,
    ResizeLeftRight                                = 3,
    ResizeUpDown                                   = 4,
    ResizeSouthEast                                = 5,
    ResizeSouthWest                                = 6,
    CardinalCross                                  = 7,
    Crosshairs                                     = 8,
    Hand                                           = 9,
    GrabHand                                       = 10,
    GrabHandClosed                                 = 11,
    SlashedCircle                                  = 12,
    EyeDropper                                     = 13,
    EMouseCursor                                   = 14

};


// Enum  SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8_t
{
    FixedRadius                                    = 0,
    HalfHeightRadius                               = 1,
    ESlateBrushRoundingType                        = 2

};


// Enum  SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
    UseColor                                       = 0,
    UseColor                                       = 1,
    UseColor                                       = 2,
    UseColor                                       = 3,
    UseColor                                       = 4,
    UseColor                                       = 5

};


// Enum  SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
    NoImage                                        = 0,
    FullColor                                      = 1,
    Linear                                         = 2,
    Vector                                         = 3,
    ESlateBrushImageType                           = 4

};


// Enum  SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
    NoMirror                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushMirrorType                          = 4

};


// Enum  SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
    NoTile                                         = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushTileType                            = 4

};


// Enum  SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
    NoDrawType                                     = 0,
    Box                                            = 1,
    Border                                         = 2,
    Image                                          = 3,
    RoundedBox                                     = 4,
    ESlateBrushDrawType                            = 5

};


// Enum  UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
    Visible                                        = 0,
    Collapsed                                      = 1,
    Hidden                                         = 2,
    HitTestInvisible                               = 3,
    SelfHitTestInvisible                           = 4,
    ESlateVisibility                               = 5

};


// Enum  SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
    Escape                                         = 0,
    Explicit                                       = 1,
    Wrap                                           = 2,
    Stop                                           = 3,
    Custom                                         = 4,
    CustomBoundary                                 = 5,
    Invalid                                        = 6,
    EUINavigationRule                              = 7

};


// Enum  SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    Up                                             = 2,
    Down                                           = 3,
    Next                                           = 4,
    Previous                                       = 5,
    Num                                            = 6,
    Invalid                                        = 7,
    EUINavigation                                  = 8

};


// Enum  SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
    Inherit                                        = 0,
    Culture                                        = 1,
    LeftToRight                                    = 2,
    RightToLeft                                    = 3,
    EFlowDirectionPreference                       = 4

};


// Enum  SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
    OnKeyPress                                     = 0,
    OnNavigation                                   = 1,
    OnMouseClick                                   = 2,
    Direct                                         = 3,
    ESelectInfo                                    = 4

};


// Enum  SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
    VAlign                                         = 0,
    VAlign                                         = 1,
    VAlign                                         = 2,
    VAlign                                         = 3,
    VAlign                                         = 4

};


// Enum  Slate.ETextJustify
enum class ETextJustify : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    ETextJustify                                   = 3

};


// Enum  SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
    Default                                        = 0,
    OnEnter                                        = 1,
    OnUserMovedFocus                               = 2,
    OnCleared                                      = 3,
    ETextCommit                                    = 4

};


// Enum  SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : uint8_t
{
    Clip                                           = 0,
    Ellipsis                                       = 1,
    ETextOverflowPolicy                            = 2

};


// Enum  Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
    Auto                                           = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ETextFlowDirection                             = 3

};


// Enum  SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
    Auto                                           = 0,
    KerningOnly                                    = 1,
    FullShaping                                    = 2,
    ETextShapingMethod                             = 3

};


// Enum  Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
    TextChangeOnDismiss                            = 0,
    TextCommitOnAccept                             = 1,
    TextCommitOnDismiss                            = 2,
    EVirtualKeyboardDismissAction                  = 3

};


// Enum  Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
    OnFocusByPointer                               = 0,
    OnAllFocusEvents                               = 1,
    EVirtualKeyboardTrigger                        = 2

};


// Enum  UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
    Default                                        = 0,
    Number                                         = 1,
    Web                                            = 2,
    Email                                          = 3,
    Password                                       = 4,
    AlphaNumeric                                   = 5,
    EVirtualKeyboardType                           = 6

};


// Enum  SlateCore.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
    None                                           = 0,
    ToLower                                        = 1,
    ToUpper                                        = 2,
    ETextTransformPolicy                           = 3

};


// Enum  SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
    MenuPlacement                                  = 0,
    MenuPlacement                                  = 1,
    MenuPlacement                                  = 2,
    MenuPlacement                                  = 3,
    MenuPlacement                                  = 4,
    MenuPlacement                                  = 5,
    MenuPlacement                                  = 6,
    MenuPlacement                                  = 7,
    MenuPlacement                                  = 8,
    MenuPlacement                                  = 9,
    MenuPlacement                                  = 10,
    MenuPlacement                                  = 11,
    MenuPlacement                                  = 12,
    MenuPlacement                                  = 13,
    MenuPlacement                                  = 14

};


// Enum  Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
    DefaultWrapping                                = 0,
    AllowPerCharacterWrapping                      = 1,
    ETextWrappingPolicy                            = 2

};


// Enum  UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
    NotAccessible                                  = 0,
    Auto                                           = 1,
    Summary                                        = 2,
    Custom                                         = 3,
    ToolTip                                        = 4,
    ESlateAccessibleBehavior                       = 5

};


// Enum  SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
    NormalVision                                   = 0,
    Deuteranope                                    = 1,
    Protanope                                      = 2,
    Tritanope                                      = 3,
    EColorVisionDeficiency                         = 4

};


// Enum  Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
    DoNotLock                                      = 0,
    LockOnCapture                                  = 1,
    LockAlways                                     = 2,
    LockInFullscreen                               = 3,
    EMouseLockMode                                 = 4

};


// Enum  Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
    Overlay                                        = 0,
    VerticalBox                                    = 1,
    EWindowTitleBarMode                            = 2

};


// Enum  SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
    HAlign                                         = 0,
    HAlign                                         = 1,
    HAlign                                         = 2,
    HAlign                                         = 3,
    HAlign                                         = 4

};


// Enum  CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8_t
{
    Number                                         = 0,
    Percentage                                     = 1,
    Seconds                                        = 2,
    Distance                                       = 3,
    ECommonNumericType                             = 4

};


// Enum  Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
    HalfToEven                                     = 0,
    HalfFromZero                                   = 1,
    HalfToZero                                     = 2,
    FromZero                                       = 3,
    ToZero                                         = 4,
    ToNegativeInfinity                             = 5,
    ToPositiveInfinity                             = 6,
    ERoundingMode                                  = 7

};


// Enum  UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
    Started                                        = 0,
    Finished                                       = 1,
    EWidgetAnimationEvent                          = 2

};


// Enum  Engine.EInputEvent
enum class EInputEvent : uint8_t
{
    IE                                             = 0,
    IE                                             = 1,
    IE                                             = 2,
    IE                                             = 3,
    IE                                             = 4,
    IE                                             = 5

};


// Enum  UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
    Forward                                        = 0,
    Reverse                                        = 1,
    PingPong                                       = 2,
    EUMGSequencePlayMode                           = 3

};


// Enum  UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
    Never                                          = 0,
    Auto                                           = 1,
    EWidgetTickFrequency                           = 2

};


// Enum  CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
    IconOnly                                       = 0,
    TextOnly                                       = 1,
    IconAndText                                    = 2,
    MAX                                            = 3

};


// Enum  CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    Hidden                                         = 2,
    HiddenAndDisabled                              = 3,
    EInputActionState                              = 4

};


// Enum  CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
    FadeOnly                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Zoom                                           = 3,
    ECommonSwitcherTransition                      = 4

};


// Enum  CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
    Linear                                         = 0,
    QuadIn                                         = 1,
    QuadOut                                        = 2,
    QuadInOut                                      = 3,
    CubicIn                                        = 4,
    CubicOut                                       = 5,
    CubicInOut                                     = 6,
    ETransitionCurve                               = 7

};


// Enum  CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
    MouseAndKeyboard                               = 0,
    Gamepad                                        = 1,
    Touch                                          = 2,
    Count                                          = 3,
    ECommonInputType                               = 4

};


// Enum  CommonInput.ECommonInputMode
enum class ECommonInputMode : uint8_t
{
    Menu                                           = 0,
    Game                                           = 1,
    All                                            = 2,
    MAX                                            = 3

};


// Enum  CommonInput.ECommonInputEventFlowBehavior
enum class ECommonInputEventFlowBehavior : uint8_t
{
    BlockIfActive                                  = 0,
    BlockIfHandled                                 = 1,
    NeverBlock                                     = 2,
    ECommonInputEventFlowBehavior                  = 3

};


// Enum  CommonUser.ECommonUserAvailability
enum class ECommonUserAvailability : uint8_t
{
    Unknown                                        = 0,
    NowAvailable                                   = 1,
    PossiblyAvailable                              = 2,
    CurrentlyUnavailable                           = 3,
    AlwaysUnavailable                              = 4,
    Invalid                                        = 5,
    ECommonUserAvailability                        = 6

};


// Enum  CommonUser.ECommonUserPrivilege
enum class ECommonUserPrivilege : uint8_t
{
    CanPlay                                        = 0,
    CanPlayOnline                                  = 1,
    CanCommunicateViaTextOnline                    = 2,
    CanCommunicateViaVoiceOnline                   = 3,
    CanUseUserGeneratedContent                     = 4,
    CanUseCrossPlay                                = 5,
    Invalid                                        = 6,
    ECommonUserPrivilege                           = 7

};


// Enum  CommonUser.ECommonUserOnlineContext
enum class ECommonUserOnlineContext : uint8_t
{
    Game                                           = 0,
    Default                                        = 1,
    Service                                        = 2,
    ServiceOrDefault                               = 3,
    Platform                                       = 4,
    PlatformOrDefault                              = 5,
    Invalid                                        = 6,
    ECommonUserOnlineContext                       = 7

};


// Enum  CommonUser.ECommonUserInitializationState
enum class ECommonUserInitializationState : uint8_t
{
    Unknown                                        = 0,
    DoingInitialLogin                              = 1,
    DoingNetworkLogin                              = 2,
    FailedtoLogin                                  = 3,
    LoggedInOnline                                 = 4,
    LoggedInLocalOnly                              = 5,
    Invalid                                        = 6,
    ECommonUserInitializationState                 = 7

};


// Enum  CommonUser.ECommonUserPrivilegeResult
enum class ECommonUserPrivilegeResult : uint8_t
{
    Unknown                                        = 0,
    Available                                      = 1,
    UserNotLoggedIn                                = 2,
    LicenseInvalid                                 = 3,
    VersionOutdated                                = 4,
    NetworkConnectionUnavailable                   = 5,
    AgeRestricted                                  = 6,
    AccountTypeRestricted                          = 7,
    AccountUseRestricted                           = 8,
    PlatformFailure                                = 9,
    ECommonUserPrivilegeResult                     = 10

};


// Enum  CommonUser.ECommonSessionOnlineMode
enum class ECommonSessionOnlineMode : uint8_t
{
    Offline                                        = 0,
    LAN                                            = 1,
    Online                                         = 2,
    ECommonSessionOnlineMode                       = 3

};


// Enum  OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Cancelled                                      = 3,
    Invalid                                        = 4,
    NotAllowed                                     = 5,
    Restored                                       = 6,
    AlreadyOwned                                   = 7,
    EInAppPurchaseState                            = 8

};


// Enum  OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
    None                                           = 0,
    Quit                                           = 1,
    Won                                            = 2,
    Lost                                           = 3,
    Tied                                           = 4,
    TimeExpired                                    = 5,
    First                                          = 6,
    Second                                         = 7,
    Third                                          = 8,
    Fourth                                         = 9,
    EMPMatchOutcome                                = 10

};


// Enum  OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
    NotOnSale                                      = 0,
    Percentage                                     = 1,
    DiscountAmount                                 = 2,
    PayAmount                                      = 3,
    EOnlineProxyStoreOfferDiscountType             = 4

};


// Enum  OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
    Invalid                                        = 0,
    Failed                                         = 1,
    Deferred                                       = 2,
    Canceled                                       = 3,
    Purchased                                      = 4,
    Restored                                       = 5,
    EInAppPurchaseStatus                           = 6

};


// Enum  OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
    Invalid                                        = 0,
    Closed                                         = 1,
    Pending                                        = 2,
    Open                                           = 3,
    EBeaconConnectionState                         = 4

};


// Enum  OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ReservationRemoveMembers                       = 6,
    AddOrUpdateReservation                         = 7,
    EClientRequestType                             = 8

};


// Enum  OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    PartyLimitReached                              = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied                              = 10,
    ReservationDenied                              = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied                              = 15,
    EPartyReservationResult                        = 16

};


// Enum  OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ESpectatorClientRequestType                    = 6

};


// Enum  OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    SpectatorLimitReached                          = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied                              = 10,
    ReservationDenied                              = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied                              = 15,
    ESpectatorReservationResult                    = 16

};


// Enum  CommonGame.ECommonMessagingResult
enum class ECommonMessagingResult : uint8_t
{
    Confirmed                                      = 0,
    Declined                                       = 1,
    Cancelled                                      = 2,
    Killed                                         = 3,
    Unknown                                        = 4,
    ECommonMessagingResult                         = 5

};


// Enum  CommonGame.ECommonKeybindForcedHoldStatus
enum class ECommonKeybindForcedHoldStatus : uint8_t
{
    NoForcedHold                                   = 0,
    ForcedHold                                     = 1,
    NeverShowHold                                  = 2,
    ECommonKeybindForcedHoldStatus                 = 3

};


// Enum  CommonGame.ELocalMultiplayerInteractionMode
enum class ELocalMultiplayerInteractionMode : uint8_t
{
    PrimaryOnly                                    = 0,
    SingleToggle                                   = 1,
    Simultaneous                                   = 2,
    ELocalMultiplayerInteractionMode               = 3

};


// Enum  Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
    NoResponse                                     = 0,
    Success                                        = 1,
    Failure                                        = 2,
    EQosResponseType                               = 3

};


// Enum  Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
    Invalid                                        = 0,
    Success                                        = 1,
    Incomplete                                     = 2,
    EQosDatacenterResult                           = 3

};


// Enum  Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
    Invalid                                        = 0,
    Success                                        = 1,
    Failure                                        = 2,
    Canceled                                       = 3,
    EQosCompletionResult                           = 4

};


// Enum  Party.ESocialChannelType
enum class ESocialChannelType : uint8_t
{
    General                                        = 0,
    Founder                                        = 1,
    Party                                          = 2,
    Team                                           = 3,
    System                                         = 4,
    Private                                        = 5,
    ESocialChannelType                             = 6

};


// Enum  Party.EPartyType
enum class EPartyType : uint8_t
{
    Public                                         = 0,
    FriendsOnly                                    = 1,
    Private                                        = 2,
    EPartyType                                     = 3

};


// Enum  Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8_t
{
    AnyMember                                      = 0,
    LeaderOnly                                     = 1,
    NoInvites                                      = 2,
    EPartyInviteRestriction                        = 3

};


// Enum  Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8_t
{
    NoReason                                       = 0,
    JoinAttemptAborted                             = 1,
    Busy                                           = 2,
    OssUnavailable                                 = 3,
    PartyFull                                      = 4,
    GameFull                                       = 5,
    NotPartyLeader                                 = 6,
    PartyPrivate                                   = 7,
    JoinerCrossplayRestricted                      = 8,
    MemberCrossplayRestricted                      = 9,
    GameModeRestricted                             = 10,
    Banned                                         = 11,
    NotLoggedIn                                    = 12,
    CheckingForRejoin                              = 13,
    TargetUserMissingPresence                      = 14,
    TargetUserUnjoinable                           = 15,
    TargetUserAway                                 = 16,
    AlreadyLeaderInPlatformSession                 = 17,
    TargetUserPlayingDifferentGame                 = 18,
    TargetUserMissingPlatformSession               = 19,
    PlatformSessionMissingJoinInfo                 = 20,
    FailedToStartFindConsoleSession                = 21,
    MissingPartyClassForTypeId                     = 22,
    TargetUserBlocked                              = 23,
    CustomReason0                                  = 24,
    CustomReason1                                  = 25,
    CustomReason2                                  = 26,
    CustomReason3                                  = 27,
    CustomReason4                                  = 28,
    CustomReason5                                  = 29,
    CustomReason6                                  = 30,
    CustomReason7                                  = 31,
    CustomReason8                                  = 32,
    CustomReason9                                  = 33,
    CustomReason10                                 = 34,
    CustomReason11                                 = 35,
    CustomReason12                                 = 36,
    CustomReason13                                 = 37,
    CustomReason14                                 = 38,
    CustomReason15                                 = 39,
    CustomReason16                                 = 40,
    CustomReason17                                 = 41,
    CustomReason18                                 = 42,
    CustomReason19                                 = 43,
    CustomReason20                                 = 44,
    CustomReason21                                 = 45,
    CustomReason22                                 = 46,
    CustomReason23                                 = 47,
    CustomReason24                                 = 48,
    CustomReason25                                 = 49,
    CustomReason26                                 = 50,
    CustomReason27                                 = 51,
    CustomReason28                                 = 52,
    CustomReason29                                 = 53,
    CustomReason30                                 = 54,
    CustomReason31                                 = 55,
    CustomReason32                                 = 56,
    CustomReason33                                 = 57,
    CustomReason34                                 = 58,
    CustomReason35                                 = 59,
    CustomReason36                                 = 60,
    CustomReason37                                 = 61,
    CustomReason38                                 = 62,
    CustomReason39                                 = 63,
    MAX                                            = 64

};


// Enum  Party.EApprovalAction
enum class EApprovalAction : uint8_t
{
    Approve                                        = 0,
    Enqueue                                        = 1,
    EnqueueAndStartBeacon                          = 2,
    Deny                                           = 3,
    EApprovalAction                                = 4

};


// Enum  Party.ESocialPartyInviteMethod
enum class ESocialPartyInviteMethod : uint8_t
{
    Other                                          = 0,
    Notification                                   = 1,
    Custom1                                        = 2,
    ESocialPartyInviteMethod                       = 3

};


// Enum  Party.ESocialPartyInviteFailureReason
enum class ESocialPartyInviteFailureReason : uint8_t
{
    Success                                        = 0,
    NotOnline                                      = 1,
    NotAcceptingMembers                            = 2,
    NotFriends                                     = 3,
    AlreadyInParty                                 = 4,
    OssValidationFailed                            = 5,
    PlatformInviteFailed                           = 6,
    PartyInviteFailed                              = 7,
    InviteRateLimitExceeded                        = 8,
    ESocialPartyInviteFailureReason                = 9

};


// Enum  Party.ESocialSubsystem
enum class ESocialSubsystem : uint8_t
{
    Primary                                        = 0,
    Platform                                       = 1,
    MAX                                            = 2

};


// Enum  Party.ESocialRelationship
enum class ESocialRelationship : uint8_t
{
    Any                                            = 0,
    FriendInviteReceived                           = 1,
    FriendInviteSent                               = 2,
    PartyInvite                                    = 3,
    Friend                                         = 4,
    BlockedPlayer                                  = 5,
    SuggestedFriend                                = 6,
    RecentPlayer                                   = 7,
    JoinRequest                                    = 8,
    ESocialRelationship                            = 9

};


// Enum  Party.ECrossplayPreference
enum class ECrossplayPreference : uint8_t
{
    NoSelection                                    = 0,
    OptedIn                                        = 1,
    OptedOut                                       = 2,
    OptedOutRestricted                             = 3,
    ECrossplayPreference                           = 4

};


// Enum  Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8_t
{
    Always                                         = 0,
    AlwaysIfDifferent                              = 1,
    AlwaysWhenInCrossplayParty                     = 2,
    AlwaysIfDifferentWhenInCrossplayParty          = 3,
    Never                                          = 4,
    EPlatformIconDisplayRule                       = 5

};


// Enum  Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
    None                                           = 0,
    SentJoinRequest                                = 1,
    JoinRequestAcknowledged                        = 2,
    ELobbyBeaconJoinState                          = 3

};


// Enum  Hotfix.EHotfixResult
enum class EHotfixResult : uint8_t
{
    Failed                                         = 0,
    Success                                        = 1,
    SuccessNoChange                                = 2,
    SuccessNeedsReload                             = 3,
    SuccessNeedsRelaunch                           = 4,
    EHotfixResult                                  = 5

};


// Enum  Hotfix.EUpdateState
enum class EUpdateState : uint8_t
{
    UpdateIdle                                     = 0,
    UpdatePending                                  = 1,
    CheckingForPatch                               = 2,
    DetectingPlatformEnvironment                   = 3,
    CheckingForHotfix                              = 4,
    WaitingOnInitialLoad                           = 5,
    InitialLoadComplete                            = 6,
    UpdateComplete                                 = 7,
    EUpdateState                                   = 8

};


// Enum  Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8_t
{
    UpdateUnknown                                  = 0,
    UpdateSuccess                                  = 1,
    UpdateSuccess                                  = 2,
    UpdateSuccess                                  = 3,
    UpdateSuccess                                  = 4,
    UpdateSuccess                                  = 5,
    UpdateFailure                                  = 6,
    UpdateFailure                                  = 7,
    UpdateFailure                                  = 8,
    EUpdateCompletionStatus                        = 9

};


// Enum  Rejoin.ERejoinStatus
enum class ERejoinStatus : uint8_t
{
    NoMatchToRejoin                                = 0,
    RejoinAvailable                                = 1,
    UpdatingStatus                                 = 2,
    NeedsRecheck                                   = 3,
    NoMatchToRejoin                                = 4,
    ERejoinStatus                                  = 5

};


// Enum  GameSubtitles.ESubtitleDisplayTextSize
enum class ESubtitleDisplayTextSize : uint8_t
{
    ExtraSmall                                     = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    ExtraLarge                                     = 4,
    ESubtitleDisplayTextSize                       = 5

};


// Enum  GameSubtitles.ESubtitleDisplayTextColor
enum class ESubtitleDisplayTextColor : uint8_t
{
    White                                          = 0,
    Yellow                                         = 1,
    ESubtitleDisplayTextColor                      = 2

};


// Enum  GameSubtitles.ESubtitleDisplayTextBorder
enum class ESubtitleDisplayTextBorder : uint8_t
{
    None                                           = 0,
    Outline                                        = 1,
    DropShadow                                     = 2,
    ESubtitleDisplayTextBorder                     = 3

};


// Enum  GameSubtitles.ESubtitleDisplayBackgroundOpacity
enum class ESubtitleDisplayBackgroundOpacity : uint8_t
{
    Clear                                          = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Solid                                          = 4,
    ESubtitleDisplayBackgroundOpacity              = 5

};


// Enum  UIExtension.EUIExtensionAction
enum class EUIExtensionAction : uint8_t
{
    Added                                          = 0,
    Removed                                        = 1,
    EUIExtensionAction                             = 2

};


// Enum  UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
    Automatic                                      = 0,
    Fill                                           = 1,
    ESlateSizeRule                                 = 2

};


// Enum  UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Wrap                                           = 2,
    VerticalWrap                                   = 3,
    Radial                                         = 4,
    Overlay                                        = 5,
    EDynamicBoxType                                = 6

};


// Enum  UIExtension.EUIExtensionPointMatch
enum class EUIExtensionPointMatch : uint8_t
{
    ExactMatch                                     = 0,
    PartialMatch                                   = 1,
    EUIExtensionPointMatch                         = 2

};


// Enum  MetasoundFrontend.EMetasoundFrontendVertexAccessType
enum class EMetasoundFrontendVertexAccessType : uint8_t
{
    Reference                                      = 0,
    Value                                          = 1,
    Unset                                          = 2,
    EMetasoundFrontendVertexAccessType             = 3

};


// Enum  MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8_t
{
    External                                       = 0,
    Graph                                          = 1,
    Input                                          = 2,
    Output                                         = 3,
    Literal                                        = 4,
    Variable                                       = 5,
    VariableDeferredAccessor                       = 6,
    VariableAccessor                               = 7,
    VariableMutator                                = 8,
    Template                                       = 9,
    Invalid                                        = 10,
    EMetasoundFrontendClassType                    = 11

};


// Enum  MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    EMetasoundFrontendNodeStyleDisplayVisibility   = 2

};


// Enum  MetasoundFrontend.EMetasoundFrontendLiteralType
enum class EMetasoundFrontendLiteralType : uint8_t
{
    None                                           = 0,
    Boolean                                        = 1,
    Integer                                        = 2,
    Float                                          = 3,
    String                                         = 4,
    UObject                                        = 5,
    NoneArray                                      = 6,
    BooleanArray                                   = 7,
    IntegerArray                                   = 8,
    FloatArray                                     = 9,
    StringArray                                    = 10,
    UObjectArray                                   = 11,
    Invalid                                        = 12,
    EMetasoundFrontendLiteralType                  = 13

};


// Enum  MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8_t
{
    Error                                          = 0,
    Warning                                        = 1,
    Info                                           = 2,
    EMetaSoundMessageLevel                         = 3

};


// Enum  MetasoundEngine.EMetasoundSourceAudioFormat
enum class EMetasoundSourceAudioFormat : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Quad                                           = 2,
    FiveDotOne                                     = 3,
    SevenDotOne                                    = 4,
    COUNT                                          = 5,
    EMetasoundSourceAudioFormat                    = 6

};


// Enum  SlateCore.EOrientation
enum class EOrientation : uint8_t
{
    Orient                                         = 0,
    Orient                                         = 1,
    Orient                                         = 2

};


// Enum  AudioWidgets.EAudioRadialSliderLayout
enum class EAudioRadialSliderLayout : uint8_t
{
    Layout                                         = 0,
    Layout                                         = 1,
    Layout                                         = 2,
    Layout                                         = 3

};


// Enum  AudioSynesthesia.EConstantQNormalizationEnum
enum class EConstantQNormalizationEnum : uint8_t
{
    EqualEuclideanNorm                             = 0,
    EqualEnergy                                    = 1,
    EqualAmplitude                                 = 2,
    EConstantQNormalizationEnum                    = 3

};


// Enum  AudioSynesthesia.EConstantQFFTSizeEnum
enum class EConstantQFFTSizeEnum : uint8_t
{
    Min                                            = 0,
    XXSmall                                        = 1,
    XSmall                                         = 2,
    Small                                          = 3,
    Medium                                         = 4,
    Large                                          = 5,
    XLarge                                         = 6,
    XXLarge                                        = 7,
    Max                                            = 8

};


// Enum  AudioSynesthesia.ELoudnessCurveTypeEnum
enum class ELoudnessCurveTypeEnum : uint8_t
{
    A                                              = 0,
    B                                              = 1,
    C                                              = 2,
    D                                              = 3,
    None                                           = 4,
    ELoudnessCurveTypeEnum                         = 5

};


// Enum  AudioSynesthesia.ELoudnessNRTCurveTypeEnum
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
    A                                              = 0,
    B                                              = 1,
    C                                              = 2,
    D                                              = 3,
    None                                           = 4,
    ELoudnessNRTCurveTypeEnum                      = 5

};


// Enum  AudioSynesthesia.EMeterPeakType
enum class EMeterPeakType : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    EMeterPeakType                                 = 4

};


// Enum  WaveTable.EWaveTableResolution
enum class EWaveTableResolution : uint8_t
{
    None                                           = 0,
    Res                                            = 3,
    Res                                            = 4,
    Res                                            = 5,
    Res                                            = 6,
    Res                                            = 7,
    Res                                            = 8,
    Res                                            = 9,
    Res                                            = 10,
    Res                                            = 11,
    Res                                            = 12,
    Res                                            = 12,
    Maximum                                        = 13,
    EWaveTableResolution                           = 14

};


// Enum  WaveTable.EWaveTableCurve
enum class EWaveTableCurve : uint8_t
{
    Linear                                         = 0,
    Linear                                         = 1,
    Exp                                            = 2,
    Exp                                            = 3,
    Log                                            = 4,
    Sin                                            = 5,
    Sin                                            = 6,
    SCurve                                         = 7,
    Shared                                         = 8,
    Custom                                         = 9,
    File                                           = 10,
    Count                                          = 11,
    EWaveTableCurve                                = 12

};


// Enum  GameplayMessageRuntime.EGameplayMessageMatch
enum class EGameplayMessageMatch : uint8_t
{
    ExactMatch                                     = 0,
    PartialMatch                                   = 1,
    EGameplayMessageMatch                          = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptMeshSelectionType
enum class EGeometryScriptMeshSelectionType : uint8_t
{
    Vertices                                       = 0,
    Triangles                                      = 1,
    Polygroups                                     = 2,
    EGeometryScriptMeshSelectionType               = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
enum class EGeometryScriptMeshSelectionConversionType : uint8_t
{
    NoConversion                                   = 0,
    ToVertices                                     = 1,
    ToTriangles                                    = 2,
    ToPolygroups                                   = 3,
    EGeometryScriptMeshSelectionConversionType     = 4

};


// Enum  GeometryScriptingCore.EGeometryScriptCombineSelectionMode
enum class EGeometryScriptCombineSelectionMode : uint8_t
{
    Add                                            = 0,
    Subtract                                       = 1,
    Intersection                                   = 2,
    EGeometryScriptCombineSelectionMode            = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
enum class EGeometryScriptEmptySelectionBehavior : uint8_t
{
    FullMeshSelection                              = 0,
    EmptySelection                                 = 1,
    EGeometryScriptEmptySelectionBehavior          = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptOutcomePins
enum class EGeometryScriptOutcomePins : uint8_t
{
    Failure                                        = 0,
    Success                                        = 1,
    EGeometryScriptOutcomePins                     = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptSearchOutcomePins
enum class EGeometryScriptSearchOutcomePins : uint8_t
{
    Found                                          = 0,
    NotFound                                       = 1,
    EGeometryScriptSearchOutcomePins               = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
enum class EGeometryScriptContainmentOutcomePins : uint8_t
{
    Inside                                         = 0,
    Outside                                        = 1,
    EGeometryScriptContainmentOutcomePins          = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptLODType
enum class EGeometryScriptLODType : uint8_t
{
    MaxAvailable                                   = 0,
    HiResSourceModel                               = 1,
    SourceModel                                    = 2,
    RenderData                                     = 3,
    EGeometryScriptLODType                         = 4

};


// Enum  GeometryScriptingCore.EGeometryScriptAxis
enum class EGeometryScriptAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    EGeometryScriptAxis                            = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptIndexType
enum class EGeometryScriptIndexType : uint8_t
{
    Any                                            = 0,
    Triangle                                       = 1,
    Vertex                                         = 2,
    MaterialID                                     = 3,
    PolygroupID                                    = 4,
    EGeometryScriptIndexType                       = 5

};


// Enum  GeometryScriptingCore.EGeometryScriptDebugMessageType
enum class EGeometryScriptDebugMessageType : uint8_t
{
    ErrorMessage                                   = 0,
    WarningMessage                                 = 1,
    EGeometryScriptDebugMessageType                = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptErrorType
enum class EGeometryScriptErrorType : uint8_t
{
    NoError                                        = 0,
    UnknownError                                   = 1,
    InvalidInputs                                  = 2,
    OperationFailed                                = 3,
    EGeometryScriptErrorType                       = 4

};


// Enum  GeometryScriptingCore.EGeometryScriptTopologyConnectionType
enum class EGeometryScriptTopologyConnectionType : uint8_t
{
    Geometric                                      = 0,
    Polygroup                                      = 1,
    MaterialID                                     = 2,
    EGeometryScriptTopologyConnectionType          = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
enum class EGeometryScriptCollisionGenerationMethod : uint8_t
{
    AlignedBoxes                                   = 0,
    OrientedBoxes                                  = 1,
    MinimalSpheres                                 = 2,
    Capsules                                       = 3,
    ConvexHulls                                    = 4,
    SweptHulls                                     = 5,
    MinVolumeShapes                                = 6,
    EGeometryScriptCollisionGenerationMethod       = 7

};


// Enum  GeometryScriptingCore.EGeometryScriptSweptHullAxis
enum class EGeometryScriptSweptHullAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    SmallestBoxDimension                           = 3,
    SmallestVolume                                 = 4,
    EGeometryScriptSweptHullAxis                   = 5

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeResolution
enum class EGeometryScriptBakeResolution : uint8_t
{
    Resolution16                                   = 0,
    Resolution32                                   = 1,
    Resolution64                                   = 2,
    Resolution128                                  = 3,
    Resolution256                                  = 4,
    Resolution512                                  = 5,
    Resolution1024                                 = 6,
    Resolution2048                                 = 7,
    Resolution4096                                 = 8,
    Resolution8192                                 = 9,
    EGeometryScriptBakeResolution                  = 10

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeBitDepth
enum class EGeometryScriptBakeBitDepth : uint8_t
{
    ChannelBits8                                   = 0,
    ChannelBits16                                  = 1,
    EGeometryScriptBakeBitDepth                    = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
enum class EGeometryScriptBakeSamplesPerPixel : uint8_t
{
    Sample1                                        = 0,
    Sample4                                        = 1,
    Sample16                                       = 2,
    Sample64                                       = 3,
    Samples256                                     = 4,
    EGeometryScriptBakeSamplesPerPixel             = 5

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeTypes
enum class EGeometryScriptBakeTypes : uint8_t
{
    TangentSpaceNormal                             = 0,
    ObjectSpaceNormal                              = 1,
    FaceNormal                                     = 2,
    BentNormal                                     = 3,
    Position                                       = 4,
    Curvature                                      = 5,
    AmbientOcclusion                               = 6,
    Texture                                        = 7,
    MultiTexture                                   = 8,
    VertexColor                                    = 9,
    MaterialID                                     = 10,
    EGeometryScriptBakeTypes                       = 11

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeOutputMode
enum class EGeometryScriptBakeOutputMode : uint8_t
{
    RGBA                                           = 0,
    PerChannel                                     = 1,
    EGeometryScriptBakeOutputMode                  = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeNormalSpace
enum class EGeometryScriptBakeNormalSpace : uint8_t
{
    Tangent                                        = 0,
    Object                                         = 1,
    EGeometryScriptBakeNormalSpace                 = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
enum class EGeometryScriptBakeCurvatureTypeMode : uint8_t
{
    Mean                                           = 0,
    Max                                            = 1,
    Min                                            = 2,
    Gaussian                                       = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
enum class EGeometryScriptBakeCurvatureColorMode : uint8_t
{
    Grayscale                                      = 0,
    RedBlue                                        = 1,
    RedGreenBlue                                   = 2,
    EGeometryScriptBakeCurvatureColorMode          = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
enum class EGeometryScriptBakeCurvatureClampMode : uint8_t
{
    None                                           = 0,
    OnlyPositive                                   = 1,
    OnlyNegative                                   = 2,
    EGeometryScriptBakeCurvatureClampMode          = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptCombineAttributesMode
enum class EGeometryScriptCombineAttributesMode : uint8_t
{
    EnableAllMatching                              = 0,
    UseTarget                                      = 1,
    UseSource                                      = 2,
    EGeometryScriptCombineAttributesMode           = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptBooleanOperation
enum class EGeometryScriptBooleanOperation : uint8_t
{
    Union                                          = 0,
    Intersection                                   = 1,
    Subtract                                       = 2,
    EGeometryScriptBooleanOperation                = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptFlareType
enum class EGeometryScriptFlareType : uint8_t
{
    SinMode                                        = 0,
    SinSquaredMode                                 = 1,
    TriangleMode                                   = 2,
    EGeometryScriptFlareType                       = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptMathWarpType
enum class EGeometryScriptMathWarpType : uint8_t
{
    SinWave1D                                      = 0,
    SinWave2D                                      = 1,
    SinWave3D                                      = 2,
    EGeometryScriptMathWarpType                    = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
enum class EGeometryScriptMeshEditPolygroupMode : uint8_t
{
    PreserveExisting                               = 0,
    AutoGenerateNew                                = 1,
    SetConstant                                    = 2,
    EGeometryScriptMeshEditPolygroupMode           = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptPolyOperationArea
enum class EGeometryScriptPolyOperationArea : uint8_t
{
    EntireSelection                                = 0,
    PerPolygroup                                   = 1,
    PerTriangle                                    = 2,
    EGeometryScriptPolyOperationArea               = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
enum class EGeometryScriptLinearExtrudeDirection : uint8_t
{
    FixedDirection                                 = 0,
    AverageFaceNormal                              = 1,
    EGeometryScriptLinearExtrudeDirection          = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptOffsetFacesType
enum class EGeometryScriptOffsetFacesType : uint8_t
{
    VertexNormal                                   = 0,
    FaceNormal                                     = 1,
    ParallelFaceOffset                             = 2,
    EGeometryScriptOffsetFacesType                 = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
enum class EGeometryScriptMeshBevelSelectionMode : uint8_t
{
    TriangleArea                                   = 0,
    AllPolygroupEdges                              = 1,
    SharedPolygroupEdges                           = 2,
    EGeometryScriptMeshBevelSelectionMode          = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptTangentTypes
enum class EGeometryScriptTangentTypes : uint8_t
{
    FastMikkT                                      = 0,
    PerTriangle                                    = 1,
    EGeometryScriptTangentTypes                    = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
enum class EGeometryScriptPrimitivePolygroupMode : uint8_t
{
    SingleGroup                                    = 0,
    PerFace                                        = 1,
    PerQuad                                        = 2,
    EGeometryScriptPrimitivePolygroupMode          = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
enum class EGeometryScriptPrimitiveOriginMode : uint8_t
{
    Center                                         = 0,
    Base                                           = 1,
    EGeometryScriptPrimitiveOriginMode             = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
enum class EGeometryScriptPrimitiveUVMode : uint8_t
{
    Uniform                                        = 0,
    ScaleToFill                                    = 1,
    EGeometryScriptPrimitiveUVMode                 = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
enum class EGeometryScriptUniformRemeshTargetType : uint8_t
{
    TriangleCount                                  = 0,
    TargetEdgeLength                               = 1,
    EGeometryScriptUniformRemeshTargetType         = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
enum class EGeometryScriptRemeshEdgeConstraintType : uint8_t
{
    Fixed                                          = 0,
    Refine                                         = 1,
    Free                                           = 2,
    Ignore                                         = 3,
    EGeometryScriptRemeshEdgeConstraintType        = 4

};


// Enum  GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
enum class EGeometryScriptRemeshSmoothingType : uint8_t
{
    Uniform                                        = 0,
    UVPreserving                                   = 1,
    Mixed                                          = 2,
    EGeometryScriptRemeshSmoothingType             = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptFillHolesMethod
enum class EGeometryScriptFillHolesMethod : uint8_t
{
    Automatic                                      = 0,
    MinimalFill                                    = 1,
    PolygonTriangulation                           = 2,
    TriangleFan                                    = 3,
    PlanarProjection                               = 4,
    EGeometryScriptFillHolesMethod                 = 5

};


// Enum  GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8_t
{
    FastWindingNumber                              = 0,
    RaycastOcclusionTest                           = 1,
    EGeometryScriptRemoveHiddenTrianglesMethod     = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptRepairMeshMode
enum class EGeometryScriptRepairMeshMode : uint8_t
{
    DeleteOnly                                     = 0,
    RepairOrDelete                                 = 1,
    RepairOrSkip                                   = 2,
    EGeometryScriptRepairMeshMode                  = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
enum class EGeometryScriptRemoveMeshSimplificationType : uint8_t
{
    StandardQEM                                    = 0,
    VolumePreserving                               = 1,
    AttributeAware                                 = 2,
    EGeometryScriptRemoveMeshSimplificationType    = 3

};


// Enum  GeometryScriptingCore.ESelectiveTessellatePatternType
enum class ESelectiveTessellatePatternType : uint8_t
{
    ConcentricRings                                = 0,
    ESelectiveTessellatePatternType                = 1

};


// Enum  GeometryScriptingCore.EGeometryScriptUVFlattenMethod
enum class EGeometryScriptUVFlattenMethod : uint8_t
{
    ExpMap                                         = 0,
    Conformal                                      = 1,
    SpectralConformal                              = 2,
    EGeometryScriptUVFlattenMethod                 = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptUVIslandSource
enum class EGeometryScriptUVIslandSource : uint8_t
{
    PolyGroups                                     = 0,
    UVIslands                                      = 1,
    EGeometryScriptUVIslandSource                  = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptGridSizingMethod
enum class EGeometryScriptGridSizingMethod : uint8_t
{
    GridCellSize                                   = 0,
    GridResolution                                 = 1,
    EGeometryScriptGridSizingMethod                = 2

};


// Enum  GeometryScriptingCore.EGeometryScriptMorphologicalOpType
enum class EGeometryScriptMorphologicalOpType : uint8_t
{
    Dilate                                         = 0,
    Contract                                       = 1,
    Close                                          = 2,
    Open                                           = 3,
    EGeometryScriptMorphologicalOpType             = 4

};


// Enum  GeometryScriptingCore.EGeometryScriptSampleSpacing
enum class EGeometryScriptSampleSpacing : uint8_t
{
    UniformDistance                                = 0,
    UniformTime                                    = 1,
    ErrorTolerance                                 = 2,
    EGeometryScriptSampleSpacing                   = 3

};


// Enum  GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
enum class EGeometryScriptPixelSamplingMethod : uint8_t
{
    Bilinear                                       = 0,
    Nearest                                        = 1,
    EGeometryScriptPixelSamplingMethod             = 2

};


// Enum  MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8_t
{
    GroundPlane                                    = 0,
    OnScene                                        = 1,
    EMakeMeshPlacementType                         = 2

};


// Enum  MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8_t
{
    Base                                           = 0,
    Centered                                       = 1,
    Top                                            = 2,
    EMakeMeshPivotLocation                         = 3

};


// Enum  MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8_t
{
    PerShape                                       = 0,
    PerFace                                        = 1,
    PerQuad                                        = 2,
    EMakeMeshPolygroupMode                         = 3

};


// Enum  MeshModelingTools.EProceduralRectType
enum class EProceduralRectType : uint8_t
{
    Rectangle                                      = 0,
    RoundedRectangle                               = 1,
    EProceduralRectType                            = 2

};


// Enum  MeshModelingTools.EProceduralDiscType
enum class EProceduralDiscType : uint8_t
{
    Disc                                           = 0,
    PuncturedDisc                                  = 1,
    EProceduralDiscType                            = 2

};


// Enum  MeshModelingTools.EProceduralSphereType
enum class EProceduralSphereType : uint8_t
{
    LatLong                                        = 0,
    Box                                            = 1,
    EProceduralSphereType                          = 2

};


// Enum  MeshModelingTools.EProceduralStairsType
enum class EProceduralStairsType : uint8_t
{
    Linear                                         = 0,
    Floating                                       = 1,
    Curved                                         = 2,
    Spiral                                         = 3,
    EProceduralStairsType                          = 4

};


// Enum  MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8_t
{
    Freehand                                       = 0,
    Circle                                         = 1,
    Square                                         = 2,
    Rectangle                                      = 3,
    RoundedRectangle                               = 4,
    Ring                                           = 5,
    EDrawPolygonDrawMode                           = 6

};


// Enum  MeshModelingTools.EDrawPolygonExtrudeMode
enum class EDrawPolygonExtrudeMode : uint8_t
{
    Flat                                           = 0,
    Fixed                                          = 1,
    Interactive                                    = 2,
    EDrawPolygonExtrudeMode                        = 3

};


// Enum  MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8_t
{
    FromObject                                     = 0,
    FromGeometry                                   = 1,
    ELocalFrameMode                                = 2

};


// Enum  MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8_t
{
    NoAction                                       = 0,
    AcceptCurrent                                  = 1,
    CancelCurrent                                  = 2,
    Extrude                                        = 3,
    PushPull                                       = 4,
    Offset                                         = 5,
    Inset                                          = 6,
    Outset                                         = 7,
    BevelFaces                                     = 8,
    InsertEdge                                     = 9,
    InsertEdgeLoop                                 = 10,
    Complete                                       = 11,
    PlaneCut                                       = 12,
    Merge                                          = 13,
    Delete                                         = 14,
    CutFaces                                       = 15,
    RecalculateNormals                             = 16,
    FlipNormals                                    = 17,
    Retriangulate                                  = 18,
    Decompose                                      = 19,
    Disconnect                                     = 20,
    Duplicate                                      = 21,
    CollapseEdge                                   = 22,
    WeldEdges                                      = 23,
    StraightenEdge                                 = 24,
    FillHole                                       = 25,
    BridgeEdges                                    = 26,
    BevelEdges                                     = 27,
    PlanarProjectionUV                             = 28,
    SimplifyByGroups                               = 29,
    RegenerateExtraCorners                         = 30,
    PokeSingleFace                                 = 31,
    SplitSingleEdge                                = 32,
    FlipSingleEdge                                 = 33,
    CollapseSingleEdge                             = 34,
    EEditMeshPolygonsToolActions                   = 35

};


// Enum  MeshModelingTools.EEditMeshPolygonsToolSelectionMode
enum class EEditMeshPolygonsToolSelectionMode : uint8_t
{
    Faces                                          = 0,
    Edges                                          = 1,
    Vertices                                       = 2,
    Loops                                          = 3,
    Rings                                          = 4,
    FacesEdgesVertices                             = 5,
    EEditMeshPolygonsToolSelectionMode             = 6

};


// Enum  MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8_t
{
    Original                                       = 0,
    Checkerboard                                   = 1,
    Override                                       = 2,
    ESetMeshMaterialMode                           = 3

};


// Enum  MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8_t
{
    ExistingMaterial                               = 0,
    Diffuse                                        = 1,
    Grey                                           = 2,
    Soft                                           = 3,
    Transparent                                    = 4,
    TangentNormal                                  = 5,
    VertexColor                                    = 6,
    CustomImage                                    = 7,
    Custom                                         = 8,
    EMeshEditingMaterialModes                      = 9

};


// Enum  MeshModelingTools.ERevolvePropertiesCapFillMode
enum class ERevolvePropertiesCapFillMode : uint8_t
{
    None                                           = 0,
    CenterFan                                      = 1,
    Delaunay                                       = 2,
    EarClipping                                    = 3,
    ERevolvePropertiesCapFillMode                  = 4

};


// Enum  MeshModelingTools.ERevolvePropertiesPolygroupMode
enum class ERevolvePropertiesPolygroupMode : uint8_t
{
    PerShape                                       = 0,
    PerFace                                        = 1,
    PerRevolveStep                                 = 2,
    PerPathSegment                                 = 3,
    ERevolvePropertiesPolygroupMode                = 4

};


// Enum  MeshModelingTools.ERevolvePropertiesQuadSplit
enum class ERevolvePropertiesQuadSplit : uint8_t
{
    Uniform                                        = 0,
    Compact                                        = 1,
    ERevolvePropertiesQuadSplit                    = 2

};


// Enum  MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8_t
{
    FaceNormals                                    = 0,
    ViewDirection                                  = 1,
    EPolyEditCutPlaneOrientation                   = 2

};


// Enum  MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8_t
{
    SelectionNormal                                = 0,
    WorldX                                         = 1,
    WorldY                                         = 2,
    WorldZ                                         = 3,
    LocalX                                         = 4,
    LocalY                                         = 5,
    LocalZ                                         = 6,
    EPolyEditExtrudeDirection                      = 7

};


// Enum  MeshModelingTools.EPolyEditExtrudeDistanceMode
enum class EPolyEditExtrudeDistanceMode : uint8_t
{
    ClickInViewport                                = 0,
    Fixed                                          = 1,
    EPolyEditExtrudeDistanceMode                   = 2

};


// Enum  MeshModelingTools.EPolyEditExtrudeModeOptions
enum class EPolyEditExtrudeModeOptions : uint8_t
{
    SingleDirection                                = 3,
    SelectedTriangleNormals                        = 0,
    SelectedTriangleNormalsEven                    = 1,
    EPolyEditExtrudeModeOptions                    = 4

};


// Enum  MeshModelingTools.EPolyEditOffsetModeOptions
enum class EPolyEditOffsetModeOptions : uint8_t
{
    VertexNormals                                  = 2,
    SelectedTriangleNormals                        = 0,
    SelectedTriangleNormalsEven                    = 1,
    EPolyEditOffsetModeOptions                     = 3

};


// Enum  MeshModelingTools.EPolyEditPushPullModeOptions
enum class EPolyEditPushPullModeOptions : uint8_t
{
    SelectedTriangleNormals                        = 0,
    SelectedTriangleNormalsEven                    = 1,
    SingleDirection                                = 3,
    VertexNormals                                  = 2,
    EPolyEditPushPullModeOptions                   = 4

};


// Enum  MeshModelingTools.EGroupEdgeInsertionMode
enum class EGroupEdgeInsertionMode : uint8_t
{
    Retriangulate                                  = 0,
    PlaneCut                                       = 1,
    EGroupEdgeInsertionMode                        = 2

};


// Enum  MeshModelingTools.EEdgeLoopPositioningMode
enum class EEdgeLoopPositioningMode : uint8_t
{
    Even                                           = 0,
    ProportionOffset                               = 1,
    DistanceOffset                                 = 2,
    EEdgeLoopPositioningMode                       = 3

};


// Enum  MeshModelingTools.EEdgeLoopInsertionMode
enum class EEdgeLoopInsertionMode : uint8_t
{
    Retriangulate                                  = 0,
    PlaneCut                                       = 1,
    EEdgeLoopInsertionMode                         = 2

};


// Enum  MeshModelingTools.EUVProjectionToolActions
enum class EUVProjectionToolActions : uint8_t
{
    NoAction                                       = 0,
    AutoFit                                        = 1,
    AutoFitAlign                                   = 2,
    Reset                                          = 3,
    EUVProjectionToolActions                       = 4

};


// Enum  MeshModelingTools.EUVProjectionToolInitializationMode
enum class EUVProjectionToolInitializationMode : uint8_t
{
    Default                                        = 0,
    UsePrevious                                    = 1,
    AutoFit                                        = 2,
    AutoFitAlign                                   = 3,
    EUVProjectionToolInitializationMode            = 4

};


// Enum  ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8_t
{
    NewObject                                      = 0,
    FirstInputObject                               = 1,
    LastInputObject                                = 2,
    EBaseCreateFromSelectedTargetType              = 3

};


// Enum  ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    EUVLayoutPreviewSide                           = 2

};


// Enum  ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8_t
{
    Shared                                         = 0,
    PerVertex                                      = 1,
    ESpaceCurveControlPointTransformMode           = 2

};


// Enum  ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8_t
{
    Shared                                         = 0,
    First                                          = 1,
    Last                                           = 2,
    ESpaceCurveControlPointOriginMode              = 3

};


// Enum  ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8_t
{
    Linear                                         = 0,
    Smooth                                         = 1,
    ESpaceCurveControlPointFalloffType             = 2

};


// Enum  ModelingComponents.ECreateModelingObjectResult
enum class ECreateModelingObjectResult : uint8_t
{
    Ok                                             = 0,
    Cancelled                                      = 1,
    Failed                                         = 2,
    Failed                                         = 3,
    Failed                                         = 4,
    Failed                                         = 5,
    Failed                                         = 6,
    Failed                                         = 7,
    Failed                                         = 8,
    ECreateModelingObjectResult                    = 9

};


// Enum  ModelingComponents.ECreateMeshObjectSourceMeshType
enum class ECreateMeshObjectSourceMeshType : uint8_t
{
    MeshDescription                                = 0,
    DynamicMesh                                    = 1,
    ECreateMeshObjectSourceMeshType                = 2

};


// Enum  ModelingComponents.ECreateObjectTypeHint
enum class ECreateObjectTypeHint : uint8_t
{
    Undefined                                      = 0,
    StaticMesh                                     = 1,
    Volume                                         = 2,
    DynamicMeshActor                               = 3,
    ECreateObjectTypeHint                          = 4

};


// Enum  ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8_t
{
    DeleteSources                                  = 0,
    HideSources                                    = 1,
    KeepSources                                    = 2,
    KeepFirstSource                                = 3,
    KeepLastSource                                 = 4,
    EHandleSourcesMethod                           = 5

};


// Enum  ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8_t
{
    DefaultGizmo                                   = 1,
    QuickAxisTranslation                           = 2,
    EMultiTransformerMode                          = 3

};


// Enum  ModelingOperators.ERecomputeUVsPropertiesUnwrapType
enum class ERecomputeUVsPropertiesUnwrapType : uint8_t
{
    ExpMap                                         = 0,
    Conformal                                      = 1,
    SpectralConformal                              = 2,
    IslandMerging                                  = 3,
    ERecomputeUVsPropertiesUnwrapType              = 4

};


// Enum  ModelingOperators.ERecomputeUVsPropertiesIslandMode
enum class ERecomputeUVsPropertiesIslandMode : uint8_t
{
    PolyGroups                                     = 0,
    ExistingUVs                                    = 1,
    ERecomputeUVsPropertiesIslandMode              = 2

};


// Enum  ModelingOperators.ERecomputeUVsToolOrientationMode
enum class ERecomputeUVsToolOrientationMode : uint8_t
{
    None                                           = 0,
    MinBounds                                      = 1,
    ERecomputeUVsToolOrientationMode               = 2

};


// Enum  ModelingOperators.ERecomputeUVsPropertiesLayoutType
enum class ERecomputeUVsPropertiesLayoutType : uint8_t
{
    None                                           = 0,
    Repack                                         = 1,
    NormalizeToBounds                              = 2,
    NormalizeToWorld                               = 3,
    ERecomputeUVsPropertiesLayoutType              = 4

};


// Enum  ModelingOperators.EUVLayoutType
enum class EUVLayoutType : uint8_t
{
    Transform                                      = 0,
    Stack                                          = 1,
    Repack                                         = 2,
    EUVLayoutType                                  = 3

};


// Enum  ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
    AreaWeighted                                   = 0,
    AngleWeighted                                  = 1,
    AreaAngleWeighting                             = 2,
    ENormalCalculationMethod                       = 3

};


// Enum  ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8_t
{
    UseExistingTopology                            = 0,
    FaceNormalThreshold                            = 1,
    FaceGroupID                                    = 2,
    PerTriangle                                    = 3,
    PerVertex                                      = 4,
    ESplitNormalMethod                             = 5

};


// Enum  ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8_t
{
    TriangleFan                                    = 0,
    PolygonEarClipping                             = 1,
    Planar                                         = 2,
    Minimal                                        = 3,
    Smooth                                         = 4,
    EHoleFillOpFillType                            = 5

};


// Enum  ModelingOperators.ERemeshType
enum class ERemeshType : uint8_t
{
    Standard                                       = 0,
    FullPass                                       = 1,
    NormalFlow                                     = 2,
    ERemeshType                                    = 3

};


// Enum  ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
    Uniform                                        = 0,
    Cotangent                                      = 1,
    MeanValue                                      = 2,
    ERemeshSmoothingType                           = 3

};


// Enum  ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8_t
{
    DifferenceAB                                   = 0,
    DifferenceBA                                   = 1,
    Intersect                                      = 2,
    Union                                          = 3,
    ECSGOperation                                  = 4

};


// Enum  ModelingOperators.ETrimOperation
enum class ETrimOperation : uint8_t
{
    TrimA                                          = 0,
    TrimB                                          = 1,
    ETrimOperation                                 = 2

};


// Enum  ModelingOperators.ETrimSide
enum class ETrimSide : uint8_t
{
    RemoveInside                                   = 0,
    RemoveOutside                                  = 1,
    ETrimSide                                      = 2

};


// Enum  ModelingOperators.EMorphologyOperation
enum class EMorphologyOperation : uint8_t
{
    Dilate                                         = 0,
    Contract                                       = 1,
    Close                                          = 2,
    Open                                           = 3,
    EMorphologyOperation                           = 4

};


// Enum  ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
    Box                                            = 0,
    Cylinder                                       = 1,
    Plane                                          = 2,
    ExpMap                                         = 3,
    EUVProjectionMethod                            = 4

};


// Enum  AudioModulation.ESoundModulationLFOShape
enum class ESoundModulationLFOShape : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    COUNT                                          = 7,
    ESoundModulationLFOShape                       = 8

};


// Enum  AnimationWarpingRuntime.EFootPlacementLockType
enum class EFootPlacementLockType : uint8_t
{
    Unlocked                                       = 0,
    PivotAroundBall                                = 1,
    PivotAroundAnkle                               = 2,
    LockRotation                                   = 3,
    EFootPlacementLockType                         = 4

};


// Enum  AnimationWarpingRuntime.EPelvisHeightMode
enum class EPelvisHeightMode : uint8_t
{
    AllLegs                                        = 0,
    AllPlantedFeet                                 = 1,
    FrontPlantedFeetUphill                         = 2,
    EPelvisHeightMode                              = 3

};


// Enum  AnimationWarpingRuntime.EActorMovementCompensationMode
enum class EActorMovementCompensationMode : uint8_t
{
    ComponentSpace                                 = 0,
    WorldSpace                                     = 1,
    SuddenMotionOnly                               = 2,
    EActorMovementCompensationMode                 = 3

};


// Enum  AnimationWarpingRuntime.EOffsetRootBoneMode
enum class EOffsetRootBoneMode : uint8_t
{
    Accumulate                                     = 0,
    Interpolate                                    = 1,
    Hold                                           = 2,
    Release                                        = 3,
    EOffsetRootBoneMode                            = 4

};


// Enum  AnimationWarpingRuntime.ECheckGroundRotateBoneAxis
enum class ECheckGroundRotateBoneAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    Undefined                                      = 3,
    ECheckGroundRotateBoneAxis                     = 4

};


// Enum  AnimationWarpingRuntime.EQuadrupedSlopingAxis
enum class EQuadrupedSlopingAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    EQuadrupedSlopingAxis                          = 3

};


// Enum  MovieRenderPipelineCore.EMoviePipelineEncodeQuality
enum class EMoviePipelineEncodeQuality : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Epic                                           = 3,
    EMoviePipelineEncodeQuality                    = 4

};


// Enum  MovieRenderPipelineCore.FCPXMLExportDataSource
enum class FCPXMLExportDataSource : uint8_t
{
    OutputMetadata                                 = 0,
    SequenceData                                   = 1,
    FCPXMLExportDataSource                         = 2

};


// Enum  MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
    None                                           = 0,
    Disabled                                       = 1,
    FullyLoad                                      = 2,
    EMoviePipelineTextureStreamingMethod           = 3

};


// Enum  MovieRenderPipelineCore.EMovieRenderPipelineState
enum class EMovieRenderPipelineState : uint8_t
{
    Uninitialized                                  = 0,
    ProducingFrames                                = 1,
    Finalize                                       = 2,
    Export                                         = 3,
    Finished                                       = 4,
    EMovieRenderPipelineState                      = 5

};


// Enum  MovieRenderPipelineCore.EMovieRenderShotState
enum class EMovieRenderShotState : uint8_t
{
    Uninitialized                                  = 0,
    WarmingUp                                      = 1,
    MotionBlur                                     = 2,
    Rendering                                      = 3,
    Finished                                       = 4,
    EMovieRenderShotState                          = 5

};


// Enum  MovieRenderPipelineCore.EMoviePipelineShutterTiming
enum class EMoviePipelineShutterTiming : uint8_t
{
    FrameOpen                                      = 0,
    FrameCenter                                    = 1,
    FrameClose                                     = 2,
    EMoviePipelineShutterTiming                    = 3

};


// Enum  MovieRenderPipelineRenderPasses.EEXRCompressionFormat
enum class EEXRCompressionFormat : uint8_t
{
    None                                           = 0,
    PIZ                                            = 1,
    ZIP                                            = 2,
    DWAA                                           = 3,
    DWAB                                           = 4,
    EEXRCompressionFormat                          = 5

};


// Enum  SequencerScripting.ESequenceTimeUnit
enum class ESequenceTimeUnit : uint8_t
{
    DisplayRate                                    = 0,
    TickResolution                                 = 1,
    ESequenceTimeUnit                              = 2

};


// Enum  OpenColorIO.EOpenColorIOViewTransformDirection
enum class EOpenColorIOViewTransformDirection : uint8_t
{
    Forward                                        = 0,
    Inverse                                        = 1,
    EOpenColorIOViewTransformDirection             = 2

};


// Enum  GothicPack.SidewalkSize
enum class SidewalkSize : uint8_t
{
    WIDE                                           = 0,
    NARROW                                         = 1,
    SidewalkSize                                   = 2

};


// Enum  RigLogicModule.EArchetype
enum class EArchetype : uint8_t
{
    Asian                                          = 0,
    Black                                          = 1,
    Caucasian                                      = 2,
    Hispanic                                       = 3,
    Alien                                          = 4,
    Other                                          = 5,
    EArchetype                                     = 6

};


// Enum  RigLogicModule.EGender
enum class EGender : uint8_t
{
    Male                                           = 0,
    Female                                         = 1,
    Other                                          = 2,
    EGender                                        = 3

};


// Enum  RigLogicModule.ETranslationUnit
enum class ETranslationUnit : uint8_t
{
    CM                                             = 0,
    M                                              = 1,
    ETranslationUnit                               = 2

};


// Enum  RigLogicModule.ERotationUnit
enum class ERotationUnit : uint8_t
{
    Degrees                                        = 0,
    Radians                                        = 1,
    ERotationUnit                                  = 2

};


// Enum  RigLogicModule.EDirection
enum class EDirection : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    Up                                             = 2,
    Down                                           = 3,
    Front                                          = 4,
    Back                                           = 5,
    EDirection                                     = 6

};


// Enum  RigLogicModule.EDNADataLayer
enum class EDNADataLayer : uint8_t
{
    Descriptor                                     = 0,
    Definition                                     = 1,
    Behavior                                       = 2,
    Geometry                                       = 3,
    GeometryWithoutBlendShapes                     = 4,
    AllWithoutBlendShapes                          = 5,
    All                                            = 6,
    EDNADataLayer                                  = 7

};


// Enum  RigLogicModule.ERigLogicCalculationType
enum class ERigLogicCalculationType : uint8_t
{
    Scalar                                         = 0,
    SSE                                            = 1,
    AVX                                            = 2,
    ERigLogicCalculationType                       = 3

};


// Enum  RigLogicModule.ELodUpdateOption
enum class ELodUpdateOption : uint8_t
{
    LOD0Only                                       = 0,
    LOD1AndHigher                                  = 1,
    All                                            = 2,
    ELodUpdateOption                               = 3

};


// Enum  ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
    Init                                           = 0,
    Update                                         = 1,
    Invalid                                        = 2,
    EControlRigState                               = 3

};


// Enum  ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
    None                                           = 0,
    Bone                                           = 1,
    Null                                           = 2,
    Space                                          = 2,
    Control                                        = 4,
    Curve                                          = 8,
    RigidBody                                      = 16,
    Reference                                      = 32,
    Last                                           = 64,
    All                                            = 63,
    ToResetAfterConstructionEvent                  = 13,
    ERigElementType                                = 65

};


// Enum  AnimationCore.EEulerRotationOrder
enum class EEulerRotationOrder : uint8_t
{
    XYZ                                            = 0,
    XZY                                            = 1,
    YXZ                                            = 2,
    YZX                                            = 3,
    ZXY                                            = 4,
    ZYX                                            = 5,
    EEulerRotationOrder                            = 6

};


// Enum  ControlRig.ERigControlVisibility
enum class ERigControlVisibility : uint8_t
{
    UserDefined                                    = 0,
    BasedOnSelection                               = 1,
    ERigControlVisibility                          = 2

};


// Enum  ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ERigControlAxis                                = 3

};


// Enum  ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
    Bool                                           = 0,
    Float                                          = 1,
    Integer                                        = 2,
    Vector2D                                       = 3,
    Position                                       = 4,
    Scale                                          = 5,
    Rotator                                        = 6,
    Transform                                      = 7,
    TransformNoScale                               = 8,
    EulerTransform                                 = 9,
    ERigControlType                                = 10

};


// Enum  ControlRig.ERigControlAnimationType
enum class ERigControlAnimationType : uint8_t
{
    AnimationControl                               = 0,
    AnimationChannel                               = 1,
    ProxyControl                                   = 2,
    VisualCue                                      = 3,
    ERigControlAnimationType                       = 4

};


// Enum  ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
    Points                                         = 0,
    Lines                                          = 1,
    LineStrip                                      = 2,
    DynamicMesh                                    = 3,
    EControlRigDrawSettings                        = 4

};


// Enum  ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
    Runtime                                        = 0,
    Editing                                        = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigTransformStackEntryType
enum class ERigTransformStackEntryType : uint8_t
{
    TransformPose                                  = 0,
    ControlOffset                                  = 1,
    ControlShape                                   = 2,
    CurveValue                                     = 3,
    ERigTransformStackEntryType                    = 4

};


// Enum  ControlRig.ERigTransformType
enum class ERigTransformType : uint8_t
{
    InitialLocal                                   = 0,
    CurrentLocal                                   = 1,
    InitialGlobal                                  = 2,
    CurrentGlobal                                  = 3,
    NumTransformTypes                              = 4,
    ERigTransformType                              = 5

};


// Enum  ControlRig.EControlRigInteractionType
enum class EControlRigInteractionType : uint8_t
{
    None                                           = 0,
    Translate                                      = 1,
    Rotate                                         = 2,
    Scale                                          = 4,
    All                                            = 7,
    EControlRigInteractionType                     = 8

};


// Enum  ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
    Direction                                      = 0,
    Location                                       = 1,
    EControlRigVectorKind                          = 2

};


// Enum  ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
    WorldSpace                                     = 0,
    ActorSpace                                     = 1,
    ComponentSpace                                 = 2,
    RigSpace                                       = 3,
    LocalSpace                                     = 4,
    Max                                            = 5

};


// Enum  ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    EControlRigComponentMapDirection               = 2

};


// Enum  ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    BaseSpace                                      = 2,
    BaseJoint                                      = 3,
    Max                                            = 4

};


// Enum  ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    Sphere                                         = 2,
    EControlRigClampSpatialMode                    = 3

};


// Enum  ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Max                                            = 2

};


// Enum  ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    Max                                            = 2

};


// Enum  ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
    Axes                                           = 0,
    Max                                            = 1

};


// Enum  ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
    Linear                                         = 0,
    QuadraticEaseIn                                = 1,
    QuadraticEaseOut                               = 2,
    QuadraticEaseInOut                             = 3,
    CubicEaseIn                                    = 4,
    CubicEaseOut                                   = 5,
    CubicEaseInOut                                 = 6,
    QuarticEaseIn                                  = 7,
    QuarticEaseOut                                 = 8,
    QuarticEaseInOut                               = 9,
    QuinticEaseIn                                  = 10,
    QuinticEaseOut                                 = 11,
    QuinticEaseInOut                               = 12,
    SineEaseIn                                     = 13,
    SineEaseOut                                    = 14,
    SineEaseInOut                                  = 15,
    CircularEaseIn                                 = 16,
    CircularEaseOut                                = 17,
    CircularEaseInOut                              = 18,
    ExponentialEaseIn                              = 19,
    ExponentialEaseOut                             = 20,
    ExponentialEaseInOut                           = 21,
    ElasticEaseIn                                  = 22,
    ElasticEaseOut                                 = 23,
    ElasticEaseInOut                               = 24,
    BackEaseIn                                     = 25,
    BackEaseOut                                    = 26,
    BackEaseInOut                                  = 27,
    BounceEaseIn                                   = 28,
    BounceEaseOut                                  = 29,
    BounceEaseInOut                                = 30,
    EControlRigAnimEasingType                      = 31

};


// Enum  ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
    Verlet                                         = 0,
    SemiExplicitEuler                              = 1,
    ECRSimPointIntegrateType                       = 2

};


// Enum  ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
    Distance                                       = 0,
    DistanceFromA                                  = 1,
    DistanceFromB                                  = 2,
    Plane                                          = 3,
    ECRSimConstraintType                           = 4

};


// Enum  ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
    Direction                                      = 0,
    ECRSimPointForceType                           = 1

};


// Enum  ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
    Plane                                          = 0,
    Sphere                                         = 1,
    Cone                                           = 2,
    ECRSimSoftCollisionType                        = 3

};


// Enum  ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
    Replace                                        = 0,
    Additive                                       = 1,
    Direct                                         = 2,
    Max                                            = 3

};


// Enum  ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
    Imported                                       = 0,
    User                                           = 1,
    ERigBoneType                                   = 2

};


// Enum  ControlRig.ERigMetadataType
enum class ERigMetadataType : uint8_t
{
    Bool                                           = 0,
    BoolArray                                      = 1,
    Float                                          = 2,
    FloatArray                                     = 3,
    Int32                                          = 4,
    Int32Array                                     = 5,
    Name                                           = 6,
    NameArray                                      = 7,
    Vector                                         = 8,
    VectorArray                                    = 9,
    Rotator                                        = 10,
    RotatorArray                                   = 11,
    Quat                                           = 12,
    QuatArray                                      = 13,
    Transform                                      = 14,
    TransformArray                                 = 15,
    LinearColor                                    = 16,
    LinearColorArray                               = 17,
    RigElementKey                                  = 18,
    RigElementKeyArray                             = 19,
    Invalid                                        = 20,
    ERigMetadataType                               = 21

};


// Enum  ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8_t
{
    ElementAdded                                   = 0,
    ElementRemoved                                 = 1,
    ElementRenamed                                 = 2,
    ElementSelected                                = 3,
    ElementDeselected                              = 4,
    ParentChanged                                  = 5,
    HierarchyReset                                 = 6,
    ControlSettingChanged                          = 7,
    ControlVisibilityChanged                       = 8,
    ControlDrivenListChanged                       = 9,
    ControlShapeTransformChanged                   = 10,
    ParentWeightsChanged                           = 11,
    InteractionBracketOpened                       = 12,
    InteractionBracketClosed                       = 13,
    Max                                            = 14

};


// Enum  ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
    None                                           = 0,
    RequestAutoKey                                 = 1,
    OpenUndoBracket                                = 2,
    CloseUndoBracket                               = 3,
    Max                                            = 4

};


// Enum  ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
    DoNotCare                                      = 0,
    Always                                         = 1,
    Never                                          = 2,
    EControlRigSetKey                              = 3

};


// Enum  ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Minimum                                        = 2,
    Maximum                                        = 3,
    ERigControlValueType                           = 4

};


// Enum  ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
    Global                                         = 0,
    Bone                                           = 1,
    Control                                        = 2,
    Space                                          = 3,
    ERigSpaceType                                  = 4

};


// Enum  ControlRig.EMovieSceneControlRigSpaceType
enum class EMovieSceneControlRigSpaceType : uint8_t
{
    Parent                                         = 0,
    World                                          = 1,
    ControlRig                                     = 2,
    EMovieSceneControlRigSpaceType                 = 3

};


// Enum  ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
    Point                                          = 0,
    Axes                                           = 1,
    Box                                            = 2,
    Max                                            = 3

};


// Enum  ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2

};


// Enum  ControlRig.EAimMode
enum class EAimMode : uint8_t
{
    AimAtTarget                                    = 0,
    OrientToTarget                                 = 1,
    MAX                                            = 2

};


// Enum  ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigSwitchParentMode
enum class ERigSwitchParentMode : uint8_t
{
    World                                          = 0,
    DefaultParent                                  = 1,
    ParentItem                                     = 2,
    ERigSwitchParentMode                           = 3

};


// Enum  ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
    Front                                          = 0,
    Stretched                                      = 1,
    EControlRigCurveAlignment                      = 2

};


// Enum  ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
    OverrideLocal                                  = 0,
    OverrideGlobal                                 = 1,
    AdditiveLocal                                  = 2,
    AdditiveGlobal                                 = 3,
    Max                                            = 4

};


// Enum  ControlRig.EConstraintInterpType
enum class EConstraintInterpType : uint8_t
{
    Average                                        = 0,
    Shortest                                       = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    ERBFKernelType                                 = 5

};


// Enum  ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
    Euclidean                                      = 0,
    ArcLength                                      = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    ERBFQuatDistanceType                           = 4

};


// Enum  ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
    Euclidean                                      = 0,
    Manhattan                                      = 1,
    ArcLength                                      = 2,
    ERBFVectorDistanceType                         = 3

};


// Enum  LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
    Lerp                                           = 0,
    Nearest                                        = 1,
    Latest                                         = 2,
    ELiveLinkTimecodeProviderEvaluationType        = 3

};


// Enum  LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    XNeg                                           = 3,
    YNeg                                           = 4,
    ZNeg                                           = 5,
    ELiveLinkAxis                                  = 6

};


// Enum  HairStrandsCore.EHairAtlasTextureType
enum class EHairAtlasTextureType : uint8_t
{
    Depth                                          = 0,
    Tangent                                        = 1,
    Attribute                                      = 2,
    Coverage                                       = 3,
    AuxilaryData                                   = 4,
    Material                                       = 5,
    EHairAtlasTextureType                          = 6

};


// Enum  HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8_t
{
    Low                                            = 0,
    High                                           = 1,
    EHairCardsClusterType                          = 2

};


// Enum  HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8_t
{
    CardsCount                                     = 0,
    UseGuides                                      = 1,
    EHairCardsGenerationType                       = 2

};


// Enum  HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8_t
{
    Procedural                                     = 0,
    Imported                                       = 1,
    EHairCardsSourceType                           = 2

};


// Enum  HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Unknown                                        = 3,
    EHairInterpolationQuality                      = 4

};


// Enum  HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8_t
{
    Parametric                                     = 0,
    Root                                           = 1,
    Index                                          = 2,
    Distance                                       = 3,
    Unknown                                        = 4,
    EHairInterpolationWeight                       = 5

};


// Enum  HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8_t
{
    Strands                                        = 0,
    Cards                                          = 1,
    Meshes                                         = 2,
    EGroomGeometryType                             = 3

};


// Enum  HairStrandsCore.EGroomBindingType
enum class EGroomBindingType : uint8_t
{
    NoneBinding                                    = 0,
    Rigid                                          = 1,
    Skinning                                       = 2,
    EGroomBindingType                              = 3

};


// Enum  HairStrandsCore.EGroomOverrideType
enum class EGroomOverrideType : uint8_t
{
    Auto                                           = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    EGroomOverrideType                             = 3

};


// Enum  HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
    None                                           = 0,
    CosseratRods                                   = 2,
    AngularSprings                                 = 4,
    CustomSolver                                   = 8,
    EGroomNiagaraSolvers                           = 9

};


// Enum  HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
    None                                           = 0,
    Size2                                          = 2,
    Size4                                          = 4,
    Size8                                          = 8,
    Size16                                         = 16,
    Size32                                         = 32,
    EGroomStrandsSize                              = 33

};


// Enum  HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
    None                                           = 0,
    RigidTransform                                 = 2,
    OffsetTransform                                = 4,
    SmoothTransform                                = 8,
    EGroomInterpolationType                        = 9

};


// Enum  HairStrandsCore.EGroomBindingMeshType
enum class EGroomBindingMeshType : uint8_t
{
    SkeletalMesh                                   = 0,
    GeometryCache                                  = 1,
    EGroomBindingMeshType                          = 2

};


// Enum  HairStrandsCore.EGroomCacheAttributes
enum class EGroomCacheAttributes : uint8_t
{
    None                                           = 0,
    Position                                       = 1,
    Width                                          = 2,
    Color                                          = 4,
    PositionWidth                                  = 3,
    PositionColor                                  = 5,
    WidthColor                                     = 5,
    PositionWidthColor                             = 7,
    EGroomCacheAttributes                          = 8

};


// Enum  HairStrandsCore.EGroomCacheType
enum class EGroomCacheType : uint8_t
{
    None                                           = 0,
    Strands                                        = 1,
    Guides                                         = 2,
    EGroomCacheType                                = 3

};


// Enum  HairStrandsCore.EGroomBasisType
enum class EGroomBasisType : uint8_t
{
    NoBasis                                        = 0,
    BezierBasis                                    = 1,
    BsplineBasis                                   = 2,
    CatmullromBasis                                = 3,
    HermiteBasis                                   = 4,
    PowerBasis                                     = 5,
    EGroomBasisType                                = 6

};


// Enum  HairStrandsCore.EGroomCurveType
enum class EGroomCurveType : uint8_t
{
    Cubic                                          = 0,
    Linear                                         = 1,
    VariableOrder                                  = 2,
    EGroomCurveType                                = 3

};


// Enum  HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8_t
{
    R                                              = 0,
    G                                              = 1,
    B                                              = 2,
    A                                              = 3,
    EFollicleMaskChannel                           = 4

};


// Enum  HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8_t
{
    TraceInside                                    = 0,
    TraceOuside                                    = 1,
    TraceBidirectional                             = 2,
    EStrandsTexturesTraceType                      = 3

};


// Enum  HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8_t
{
    Static                                         = 0,
    Skeletal                                       = 1,
    EStrandsTexturesMeshType                       = 2

};


// Enum  HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Unknown                                        = 3,
    EGroomInterpolationQuality                     = 4

};


// Enum  HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
    Parametric                                     = 0,
    Root                                           = 1,
    Index                                          = 2,
    Unknown                                        = 3,
    EGroomInterpolationWeight                      = 4

};


// Enum  AppleARKitFaceSupport.EARFaceComponentTransformMixing
enum class EARFaceComponentTransformMixing : uint8_t
{
    ComponentOnly                                  = 0,
    ComponentLocationTrackedRotation               = 1,
    ComponentWithTracked                           = 2,
    TrackingOnly                                   = 3,
    EARFaceComponentTransformMixing                = 4

};


// Enum  AppleARKit.EARFaceTrackingFileWriterType
enum class EARFaceTrackingFileWriterType : uint8_t
{
    None                                           = 0,
    CSV                                            = 1,
    JSON                                           = 2,
    EARFaceTrackingFileWriterType                  = 3

};


// Enum  AppleARKit.ELivelinkTrackingType
enum class ELivelinkTrackingType : uint8_t
{
    FaceTracking                                   = 0,
    PoseTracking                                   = 1,
    ELivelinkTrackingType                          = 2

};


// Enum  AppleARKit.EARKitTextureType
enum class EARKitTextureType : uint8_t
{
    TextureY                                       = 0,
    TextureCbCr                                    = 1,
    EARKitTextureType                              = 2

};


// Enum  AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Down                                           = 3,
    LeftMirrored                                   = 4,
    RightMirrored                                  = 5,
    DownMirrored                                   = 6,
    UpMirrored                                     = 7,
    ETextureRotationDirection                      = 8

};


// Enum  AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
    Unknown                                        = 0,
    Image                                          = 1,
    PixelBuffer                                    = 2,
    Surface                                        = 3,
    MetalTexture                                   = 4,
    EAppleTextureType                              = 5

};


// Enum  ARUtilities.EARLiveLinkSourceType
enum class EARLiveLinkSourceType : uint8_t
{
    None                                           = 0,
    ARKitPoseTracking                              = 1,
    EARLiveLinkSourceType                          = 2

};


// Enum  ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
    NoCap                                          = 0,
    CreateNewSectionForCap                         = 1,
    UseLastSectionForCap                           = 2,
    EProcMeshSliceCapOption                        = 3

};


// Enum  AGRPRO.EAGRDebuggerCategories
enum class EAGRDebuggerCategories : uint8_t
{
    Custom                                         = 0,
    AnimState                                      = 1,
    AimOffset                                      = 2,
    Rotation                                       = 3,
    Runtime                                        = 4,
    Movement                                       = 5,
    State                                          = 6,
    Leans                                          = 7,
    Setup                                          = 8,
    EAGRDebuggerCategories                         = 9

};


// Enum  AGRPRO.EAGR
enum class EAGR : uint8_t
{
    EAGR                                           = 0,
    EAGR                                           = 1,
    EAGR                                           = 2,
    EAGR                                           = 3

};


// Enum  AGRPRO.EAGR
enum class EAGR : uint8_t
{
    EAGR                                           = 0,
    EAGR                                           = 1,
    EAGR                                           = 2,
    EAGR                                           = 3

};


// Enum  AGRPRO.EAGR
enum class EAGR : uint8_t
{
    EAGR                                           = 0,
    EAGR                                           = 1,
    EAGR                                           = 2,
    EAGR                                           = 3,
    EAGR                                           = 4,
    EAGR                                           = 5

};


// Enum  AGRPRO.EAGR
enum class EAGR : uint8_t
{
    EAGR                                           = 0,
    EAGR                                           = 1,
    EAGR                                           = 2,
    EAGR                                           = 3,
    EAGR                                           = 4,
    EAGR                                           = 5

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAttributeValueOffsetValue
enum class EExcelLoaderTgfDBattleAttributeValueOffsetValue : uint8_t
{
    EELTDBAVOV                                     = 0,
    EELTDBAVOV                                     = 1,
    EELTDBAVOV                                     = 2,
    EELTDBAVOV                                     = 3,
    EELTDBAVOV                                     = 4

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAbillitySetOffsetValue
enum class EExcelLoaderTgfDBattleAbillitySetOffsetValue : uint8_t
{
    EELTDBASOV                                     = 0,
    EELTDBASOV                                     = 1,
    EELTDBASOV                                     = 2

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleGemSlotOffsetValue
enum class EExcelLoaderTgfDBattleGemSlotOffsetValue : uint8_t
{
    EELTDBGSOV                                     = 0,
    EELTDBGSOV                                     = 1,
    EELTDBGSOV                                     = 2,
    EELTDBGSOV                                     = 3

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleGearSetOffsetValue
enum class EExcelLoaderTgfDBattleGearSetOffsetValue : uint8_t
{
    EELTDBGSOV                                     = 0,
    EELTDBGSOV                                     = 1,
    EELTDBGSOV                                     = 2,
    EELTDBGSOV                                     = 3

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixAbilityRandomDataAffixTypeId
enum class EExcelLoaderTgfDBattleAffixAbilityRandomDataAffixTypeId : uint8_t
{
    EELTDBAARDATI                                  = 0,
    EELTDBAARDATI                                  = 11,
    EELTDBAARDATI                                  = 12,
    EELTDBAARDATI                                  = 13

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixAbilityDataAffixTypeId
enum class EExcelLoaderTgfDBattleAffixAbilityDataAffixTypeId : uint8_t
{
    EELTDBAADATI                                   = 0,
    EELTDBAADATI                                   = 11,
    EELTDBAADATI                                   = 12,
    EELTDBAADATI                                   = 13

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixAttributeRandomValueDataEffectType
enum class EExcelLoaderTgfDBattleAffixAttributeRandomValueDataEffectType : uint8_t
{
    EELTDBAARVDET                                  = 0,
    EELTDBAARVDET                                  = 1,
    EELTDBAARVDET                                  = 2

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixDisplayDataAbilitySetValue
enum class EExcelLoaderTgfDBattleAffixDisplayDataAbilitySetValue : uint8_t
{
    EELTDBADDASV                                   = 0,
    EELTDBADDASV                                   = 11,
    EELTDBADDASV                                   = 12,
    EELTDBADDASV                                   = 13

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixDisplayDataAttributeValue
enum class EExcelLoaderTgfDBattleAffixDisplayDataAttributeValue : uint8_t
{
    EELTDBADDAV                                    = 0,
    EELTDBADDAV                                    = 11,
    EELTDBADDAV                                    = 12,
    EELTDBADDAV                                    = 13

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixDisplayDataAttrGearSetAffix
enum class EExcelLoaderTgfDBattleAffixDisplayDataAttrGearSetAffix : uint8_t
{
    EELTDBADDAGSA                                  = 0,
    EELTDBADDAGSA                                  = 101,
    EELTDBADDAGSA                                  = 102,
    EELTDBADDAGSA                                  = 103

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixDisplayDataGearSetValue
enum class EExcelLoaderTgfDBattleAffixDisplayDataGearSetValue : uint8_t
{
    EELTDBADDGSV                                   = 0,
    EELTDBADDGSV                                   = 11,
    EELTDBADDGSV                                   = 12,
    EELTDBADDGSV                                   = 13

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixDisplayDataData
enum class EExcelLoaderTgfDBattleAffixDisplayDataData : uint8_t
{
    EELTDBADDD                                     = 0,
    EELTDBADDD                                     = 101,
    EELTDBADDD                                     = 102,
    EELTDBADDD                                     = 103,
    EELTDBADDD                                     = 104,
    EELTDBADDD                                     = 105,
    EELTDBADDD                                     = 106

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixWeightIndexType
enum class EExcelLoaderTgfDBattleAffixWeightIndexType : uint8_t
{
    EELTDBAWIT                                     = 0,
    EELTDBAWIT                                     = 1,
    EELTDBAWIT                                     = 2,
    EELTDBAWIT                                     = 3,
    EELTDBAWIT                                     = 4,
    EELTDBAWIT                                     = 5

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixRandomRulePoolConditionType
enum class EExcelLoaderTgfDBattleAffixRandomRulePoolConditionType : uint8_t
{
    EELTDBARRPCT                                   = 0,
    EELTDBARRPCT                                   = 1,
    EELTDBARRPCT                                   = 2,
    EELTDBARRPCT                                   = 3,
    EELTDBARRPCT                                   = 4

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleAffixRandomRulePoolConditionCollectType
enum class EExcelLoaderTgfDBattleAffixRandomRulePoolConditionCollectType : uint8_t
{
    EELTDBARRPCCT                                  = 0,
    EELTDBARRPCCT                                  = 1,
    EELTDBARRPCCT                                  = 2

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDBattleMapArgsTypeDataValue
enum class EExcelLoaderTgfDBattleMapArgsTypeDataValue : uint8_t
{
    EELTDBMATDV                                    = 0,
    EELTDBMATDV                                    = 1,
    EELTDBMATDV                                    = 2,
    EELTDBMATDV                                    = 3,
    EELTDBMATDV                                    = 4

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDItemCreateInfoCreateData
enum class EExcelLoaderTgfDItemCreateInfoCreateData : uint8_t
{
    EELTDICICD                                     = 0,
    EELTDICICD                                     = 11,
    EELTDICICD                                     = 12,
    EELTDICICD                                     = 13,
    EELTDICICD                                     = 14,
    EELTDICICD                                     = 15

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDItemUseActionActionType
enum class EExcelLoaderTgfDItemUseActionActionType : uint8_t
{
    EELTDIUAAT                                     = 0,
    EELTDIUAAT                                     = 1,
    EELTDIUAAT                                     = 2,
    EELTDIUAAT                                     = 3,
    EELTDIUAAT                                     = 4,
    EELTDIUAAT                                     = 5,
    EELTDIUAAT                                     = 6,
    EELTDIUAAT                                     = 7

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDQuestUnlockConditionItemUnlockType
enum class EExcelLoaderTgfDQuestUnlockConditionItemUnlockType : uint8_t
{
    EELTDQUCIUT                                    = 0,
    EELTDQUCIUT                                    = 1,
    EELTDQUCIUT                                    = 2,
    EELTDQUCIUT                                    = 3,
    EELTDQUCIUT                                    = 4,
    EELTDQUCIUT                                    = 5,
    EELTDQUCIUT                                    = 6,
    EELTDQUCIUT                                    = 7,
    EELTDQUCIUT                                    = 8,
    EELTDQUCIUT                                    = 9

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfConfigDQuestAvailablePeriodTypeValue
enum class EExcelLoaderTgfConfigDQuestAvailablePeriodTypeValue : uint8_t
{
    EELTCDQAPTV                                    = 0,
    EELTCDQAPTV                                    = 1,
    EELTCDQAPTV                                    = 2,
    EELTCDQAPTV                                    = 3,
    EELTCDQAPTV                                    = 4,
    EELTCDQAPTV                                    = 5,
    EELTCDQAPTV                                    = 6

};


// Enum  TGFBattleProtocol.EExcelLoaderTgfDFunctionUnlockConditionConditionType
enum class EExcelLoaderTgfDFunctionUnlockConditionConditionType : uint8_t
{
    EELTDFUCCT                                     = 0,
    EELTDFUCCT                                     = 1,
    EELTDFUCCT                                     = 2,
    EELTDFUCCT                                     = 3,
    EELTDFUCCT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoAtframeworkRpcTraceSpanSpanKind
enum class ETGFProtoAtframeworkRpcTraceSpanSpanKind : uint8_t
{
    ETGFPARTSSK                                    = 0,
    ETGFPARTSSK                                    = 1,
    ETGFPARTSSK                                    = 2,
    ETGFPARTSSK                                    = 3,
    ETGFPARTSSK                                    = 4,
    ETGFPARTSSK                                    = 5,
    ETGFPARTSSK                                    = 6

};


// Enum  TGFBattleProtocol.ETGFProtoAtframeworkAnyValueValue
enum class ETGFProtoAtframeworkAnyValueValue : uint8_t
{
    ETGFPAAVV                                      = 0,
    ETGFPAAVV                                      = 1,
    ETGFPAAVV                                      = 2,
    ETGFPAAVV                                      = 3,
    ETGFPAAVV                                      = 4,
    ETGFPAAVV                                      = 5,
    ETGFPAAVV                                      = 6,
    ETGFPAAVV                                      = 7,
    ETGFPAAVV                                      = 8

};


// Enum  TGFBattleProtocol.ETGFProtoAtframeworkAttributeValueValue
enum class ETGFProtoAtframeworkAttributeValueValue : uint8_t
{
    ETGFPAAVV                                      = 0,
    ETGFPAAVV                                      = 1,
    ETGFPAAVV                                      = 2,
    ETGFPAAVV                                      = 3,
    ETGFPAAVV                                      = 4,
    ETGFPAAVV                                      = 5,
    ETGFPAAVV                                      = 7,
    ETGFPAAVV                                      = 8,
    ETGFPAAVV                                      = 9,
    ETGFPAAVV                                      = 10

};


// Enum  TGFBattleProtocol.ETGFProtoAtframeworkSSMsgHeadRpcType
enum class ETGFProtoAtframeworkSSMsgHeadRpcType : uint8_t
{
    ETGFPASSMHRT                                   = 0,
    ETGFPASSMHRT                                   = 31,
    ETGFPASSMHRT                                   = 32,
    ETGFPASSMHRT                                   = 33,
    ETGFPASSMHRT                                   = 34

};


// Enum  TGFBattleProtocol.ETGFProtoAtframeworkCSMsgHeadRpcType
enum class ETGFProtoAtframeworkCSMsgHeadRpcType : uint8_t
{
    ETGFPACSMHRT                                   = 0,
    ETGFPACSMHRT                                   = 31,
    ETGFPACSMHRT                                   = 32,
    ETGFPACSMHRT                                   = 33,
    ETGFPACSMHRT                                   = 34

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDsConfigOpentelemetrySamplerCfgSamplerType
enum class ETGFProtoTgfDsConfigOpentelemetrySamplerCfgSamplerType : uint8_t
{
    ETGFPTDCOSCST                                  = 0,
    ETGFPTDCOSCST                                  = 1,
    ETGFPTDCOSCST                                  = 2,
    ETGFPTDCOSCST                                  = 3,
    ETGFPTDCOSCST                                  = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMsgOpType
enum class ETGFProtoTgfEnMsgOpType : uint8_t
{
    ETGFPTEMOT                                     = 0,
    ETGFPTEMOT                                     = 1,
    ETGFPTEMOT                                     = 2,
    ETGFPTEMOT                                     = 3,
    ETGFPTEMOT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAccountITopLoginChannelType
enum class ETGFProtoTgfEnAccountITopLoginChannelType : uint8_t
{
    ETGFPTEAITLCT                                  = 0,
    ETGFPTEAITLCT                                  = 1,
    ETGFPTEAITLCT                                  = 2,
    ETGFPTEAITLCT                                  = 3,
    ETGFPTEAITLCT                                  = 4,
    ETGFPTEAITLCT                                  = 5,
    ETGFPTEAITLCT                                  = 6,
    ETGFPTEAITLCT                                  = 9,
    ETGFPTEAITLCT                                  = 10,
    ETGFPTEAITLCT                                  = 14,
    ETGFPTEAITLCT                                  = 15,
    ETGFPTEAITLCT                                  = 17,
    ETGFPTEAITLCT                                  = 23,
    ETGFPTEAITLCT                                  = 24

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAccountITopFreindChannelType
enum class ETGFProtoTgfEnAccountITopFreindChannelType : uint8_t
{
    ETGFPTEAITFCT                                  = 0,
    ETGFPTEAITFCT                                  = 1,
    ETGFPTEAITFCT                                  = 2,
    ETGFPTEAITFCT                                  = 4,
    ETGFPTEAITFCT                                  = 9,
    ETGFPTEAITFCT                                  = 10

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAccountITopGroupChannelType
enum class ETGFProtoTgfEnAccountITopGroupChannelType : uint8_t
{
    ETGFPTEAITGCT                                  = 0,
    ETGFPTEAITGCT                                  = 1,
    ETGFPTEAITGCT                                  = 2,
    ETGFPTEAITGCT                                  = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAccountIntlLoginChannelType
enum class ETGFProtoTgfEnAccountIntlLoginChannelType : uint8_t
{
    ETGFPTEAILCT                                   = 0,
    ETGFPTEAILCT                                   = 3,
    ETGFPTEAILCT                                   = 4,
    ETGFPTEAILCT                                   = 5,
    ETGFPTEAILCT                                   = 6,
    ETGFPTEAILCT                                   = 9,
    ETGFPTEAILCT                                   = 10,
    ETGFPTEAILCT                                   = 14,
    ETGFPTEAILCT                                   = 15,
    ETGFPTEAILCT                                   = 19,
    ETGFPTEAILCT                                   = 20,
    ETGFPTEAILCT                                   = 21,
    ETGFPTEAILCT                                   = 24,
    ETGFPTEAILCT                                   = 26,
    ETGFPTEAILCT                                   = 27,
    ETGFPTEAILCT                                   = 30,
    ETGFPTEAILCT                                   = 32,
    ETGFPTEAILCT                                   = 33,
    ETGFPTEAILCT                                   = 34

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAccountIntlFreindChannelType
enum class ETGFProtoTgfEnAccountIntlFreindChannelType : uint8_t
{
    ETGFPTEAIFCT                                   = 0,
    ETGFPTEAIFCT                                   = 4,
    ETGFPTEAIFCT                                   = 10,
    ETGFPTEAIFCT                                   = 14,
    ETGFPTEAIFCT                                   = 19,
    ETGFPTEAIFCT                                   = 24,
    ETGFPTEAIFCT                                   = 26,
    ETGFPTEAIFCT                                   = 27

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnPlatformChannelID
enum class ETGFProtoTgfEnPlatformChannelID : uint8_t
{
    ETGFPTEPCID                                    = 0,
    ETGFPTEPCID                                    = 1,
    ETGFPTEPCID                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnPlatformID
enum class ETGFProtoTgfEnPlatformID : uint8_t
{
    ETGFPTEPID                                     = 0,
    ETGFPTEPID                                     = 1,
    ETGFPTEPID                                     = 2,
    ETGFPTEPID                                     = 3,
    ETGFPTEPID                                     = 4,
    ETGFPTEPID                                     = 5,
    ETGFPTEPID                                     = 6,
    ETGFPTEPID                                     = 7,
    ETGFPTEPID                                     = 8,
    ETGFPTEPID                                     = 9,
    ETGFPTEPID                                     = 10,
    ETGFPTEPID                                     = 11,
    ETGFPTEPID                                     = 12,
    ETGFPTEPID                                     = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnWellKnownSimulatorID
enum class ETGFProtoTgfEnWellKnownSimulatorID : uint8_t
{
    ETGFPTEWKSID                                   = 0,
    ETGFPTEWKSID                                   = 1,
    ETGFPTEWKSID                                   = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnClientTelemetryLogSeverity
enum class ETGFProtoTgfEnClientTelemetryLogSeverity : uint8_t
{
    ETGFPTECTLS                                    = 0,
    ETGFPTECTLS                                    = 1,
    ETGFPTECTLS                                    = 5,
    ETGFPTECTLS                                    = 9,
    ETGFPTECTLS                                    = 13,
    ETGFPTECTLS                                    = 17,
    ETGFPTECTLS                                    = 21,
    ETGFPTECTLS                                    = 22

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnUserTableDataVersion
enum class ETGFProtoTgfEnUserTableDataVersion : uint8_t
{
    ETGFPTEUTDV                                    = 0,
    ETGFPTEUTDV                                    = 1,
    ETGFPTEUTDV                                    = 2,
    ETGFPTEUTDV                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGenderType
enum class ETGFProtoTgfEnGenderType : uint8_t
{
    ETGFPTEGT                                      = 0,
    ETGFPTEGT                                      = 1,
    ETGFPTEGT                                      = 2,
    ETGFPTEGT                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnPlayerGetInfoNeedCase
enum class ETGFProtoTgfEnPlayerGetInfoNeedCase : uint8_t
{
    ETGFPTEPGINC                                   = 0,
    ETGFPTEPGINC                                   = 17,
    ETGFPTEPGINC                                   = 18,
    ETGFPTEPGINC                                   = 19

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMessageCacheStatus
enum class ETGFProtoTgfEnMessageCacheStatus : uint8_t
{
    ETGFPTEMCS                                     = 0,
    ETGFPTEMCS                                     = 1,
    ETGFPTEMCS                                     = 2,
    ETGFPTEMCS                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRouterObjectType
enum class ETGFProtoTgfEnRouterObjectType : uint8_t
{
    ETGFPTEROT                                     = 0,
    ETGFPTEROT                                     = 1,
    ETGFPTEROT                                     = 2,
    ETGFPTEROT                                     = 3,
    ETGFPTEROT                                     = 4,
    ETGFPTEROT                                     = 5,
    ETGFPTEROT                                     = 6,
    ETGFPTEROT                                     = 7,
    ETGFPTEROT                                     = 8

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEAccountUnregisterType
enum class ETGFProtoTgfEAccountUnregisterType : uint8_t
{
    ETGFPTEAUT                                     = 0,
    ETGFPTEAUT                                     = 1,
    ETGFPTEAUT                                     = 2,
    ETGFPTEAUT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTeenChatStatus
enum class ETGFProtoTgfEnTeenChatStatus : uint8_t
{
    ETGFPTETCS                                     = 0,
    ETGFPTETCS                                     = 1,
    ETGFPTETCS                                     = 2,
    ETGFPTETCS                                     = 3,
    ETGFPTETCS                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAduitChatType
enum class ETGFProtoTgfEnAduitChatType : uint8_t
{
    ETGFPTEACT                                     = 0,
    ETGFPTEACT                                     = 1,
    ETGFPTEACT                                     = 2,
    ETGFPTEACT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfENIdipModifyItemType
enum class ETGFProtoTgfENIdipModifyItemType : uint8_t
{
    ETGFPTENIMIT                                   = 0,
    ETGFPTENIMIT                                   = 1,
    ETGFPTENIMIT                                   = 2,
    ETGFPTENIMIT                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnFactType
enum class ETGFProtoTgfEnFactType : uint8_t
{
    ETGFPTEFT                                      = 0,
    ETGFPTEFT                                      = 11,
    ETGFPTEFT                                      = 12,
    ETGFPTEFT                                      = 13,
    ETGFPTEFT                                      = 14

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnInstructionType
enum class ETGFProtoTgfEnInstructionType : uint8_t
{
    ETGFPTEIT                                      = 0,
    ETGFPTEIT                                      = 1,
    ETGFPTEIT                                      = 2,
    ETGFPTEIT                                      = 3,
    ETGFPTEIT                                      = 4,
    ETGFPTEIT                                      = 5,
    ETGFPTEIT                                      = 6,
    ETGFPTEIT                                      = 7,
    ETGFPTEIT                                      = 8

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAuthType
enum class ETGFProtoTgfEnAuthType : uint8_t
{
    ETGFPTEAT                                      = 0,
    ETGFPTEAT                                      = 1,
    ETGFPTEAT                                      = 2,
    ETGFPTEAT                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMarketComingType
enum class ETGFProtoTgfEnMarketComingType : uint8_t
{
    ETGFPTEMCT                                     = 0,
    ETGFPTEMCT                                     = 101,
    ETGFPTEMCT                                     = 102,
    ETGFPTEMCT                                     = 255,
    ETGFPTEMCT                                     = 256

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnHallSwitchType
enum class ETGFProtoTgfEnHallSwitchType : uint8_t
{
    ETGFPTEHST                                     = 0,
    ETGFPTEHST                                     = 1,
    ETGFPTEHST                                     = 2,
    ETGFPTEHST                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMarketType
enum class ETGFProtoTgfEnMarketType : uint8_t
{
    ETGFPTEMT                                      = 0,
    ETGFPTEMT                                      = 1,
    ETGFPTEMT                                      = 2,
    ETGFPTEMT                                      = 3,
    ETGFPTEMT                                      = 4,
    ETGFPTEMT                                      = 5,
    ETGFPTEMT                                      = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfSCPlayerGetInfoByPageRspPageData
enum class ETGFProtoTgfSCPlayerGetInfoByPageRspPageData : uint8_t
{
    ETGFPTSCPGIBPRPD                               = 0,
    ETGFPTSCPGIBPRPD                               = 1,
    ETGFPTSCPGIBPRPD                               = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfSCPlayerKickoffReasonSyncKickoffType
enum class ETGFProtoTgfSCPlayerKickoffReasonSyncKickoffType : uint8_t
{
    ETGFPTSCPKRSKT                                 = 0,
    ETGFPTSCPKRSKT                                 = 11,
    ETGFPTSCPKRSKT                                 = 12

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDClientSettingValValue
enum class ETGFProtoTgfDClientSettingValValue : uint8_t
{
    ETGFPTDCSVV                                    = 0,
    ETGFPTDCSVV                                    = 1,
    ETGFPTDCSVV                                    = 2,
    ETGFPTDCSVV                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDSubModuleBanCustomData
enum class ETGFProtoTgfDSubModuleBanCustomData : uint8_t
{
    ETGFPTDSMBCD                                   = 0,
    ETGFPTDSMBCD                                   = 101,
    ETGFPTDSMBCD                                   = 102

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnActivityExpiredType
enum class ETGFProtoTgfEnActivityExpiredType : uint8_t
{
    ETGFPTEAET                                     = 0,
    ETGFPTEAET                                     = 1,
    ETGFPTEAET                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnActivityTrialChallengeStatus
enum class ETGFProtoTgfEnActivityTrialChallengeStatus : uint8_t
{
    ETGFPTEATCS                                    = 0,
    ETGFPTEATCS                                    = 1,
    ETGFPTEATCS                                    = 2,
    ETGFPTEATCS                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnActivityTrialSettleTriggerType
enum class ETGFProtoTgfEnActivityTrialSettleTriggerType : uint8_t
{
    ETGFPTEATSTT                                   = 0,
    ETGFPTEATSTT                                   = 1,
    ETGFPTEATSTT                                   = 2,
    ETGFPTEATSTT                                   = 3,
    ETGFPTEATSTT                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDUserActivityDataCustomData
enum class ETGFProtoTgfDUserActivityDataCustomData : uint8_t
{
    ETGFPTDUADCD                                   = 0,
    ETGFPTDUADCD                                   = 101,
    ETGFPTDUADCD                                   = 102,
    ETGFPTDUADCD                                   = 103,
    ETGFPTDUADCD                                   = 104,
    ETGFPTDUADCD                                   = 105,
    ETGFPTDUADCD                                   = 106

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnActivityType
enum class ETGFProtoTgfEnActivityType : uint8_t
{
    ETGFPTEAT                                      = 0,
    ETGFPTEAT                                      = 1,
    ETGFPTEAT                                      = 2,
    ETGFPTEAT                                      = 3,
    ETGFPTEAT                                      = 4,
    ETGFPTEAT                                      = 5,
    ETGFPTEAT                                      = 6,
    ETGFPTEAT                                      = 7,
    ETGFPTEAT                                      = 8,
    ETGFPTEAT                                      = 9,
    ETGFPTEAT                                      = 10,
    ETGFPTEAT                                      = 11

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnActivityPassportType
enum class ETGFProtoTgfEnActivityPassportType : uint8_t
{
    ETGFPTEAPT                                     = 0,
    ETGFPTEAPT                                     = 1,
    ETGFPTEAPT                                     = 2,
    ETGFPTEAPT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleCancelForbidStatus
enum class ETGFProtoTgfEnBattleCancelForbidStatus : uint8_t
{
    ETGFPTEBCFS                                    = 0,
    ETGFPTEBCFS                                    = 1,
    ETGFPTEBCFS                                    = 2,
    ETGFPTEBCFS                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleRoomStatus
enum class ETGFProtoTgfEnBattleRoomStatus : uint8_t
{
    ETGFPTEBRS                                     = 0,
    ETGFPTEBRS                                     = 1,
    ETGFPTEBRS                                     = 2,
    ETGFPTEBRS                                     = 3,
    ETGFPTEBRS                                     = 4,
    ETGFPTEBRS                                     = 5,
    ETGFPTEBRS                                     = 6,
    ETGFPTEBRS                                     = 7,
    ETGFPTEBRS                                     = 8,
    ETGFPTEBRS                                     = 9,
    ETGFPTEBRS                                     = 10,
    ETGFPTEBRS                                     = 11,
    ETGFPTEBRS                                     = 12

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleReadyActionAction
enum class ETGFProtoTgfDBattleReadyActionAction : uint8_t
{
    ETGFPTDBRAA                                    = 0,
    ETGFPTDBRAA                                    = 101,
    ETGFPTDBRAA                                    = 102,
    ETGFPTDBRAA                                    = 103,
    ETGFPTDBRAA                                    = 104,
    ETGFPTDBRAA                                    = 105,
    ETGFPTDBRAA                                    = 106,
    ETGFPTDBRAA                                    = 107

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleRoomEventLogEvent
enum class ETGFProtoTgfDBattleRoomEventLogEvent : uint8_t
{
    ETGFPTDBRELE                                   = 0,
    ETGFPTDBRELE                                   = 107,
    ETGFPTDBRELE                                   = 108,
    ETGFPTDBRELE                                   = 11,
    ETGFPTDBRELE                                   = 12,
    ETGFPTDBRELE                                   = 13,
    ETGFPTDBRELE                                   = 14,
    ETGFPTDBRELE                                   = 15,
    ETGFPTDBRELE                                   = 16,
    ETGFPTDBRELE                                   = 17,
    ETGFPTDBRELE                                   = 18,
    ETGFPTDBRELE                                   = 201,
    ETGFPTDBRELE                                   = 19,
    ETGFPTDBRELE                                   = 101,
    ETGFPTDBRELE                                   = 102,
    ETGFPTDBRELE                                   = 103,
    ETGFPTDBRELE                                   = 104,
    ETGFPTDBRELE                                   = 105,
    ETGFPTDBRELE                                   = 106,
    ETGFPTDBRELE                                   = 202

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDGsSettleActivityDataActivityData
enum class ETGFProtoTgfDGsSettleActivityDataActivityData : uint8_t
{
    ETGFPTDGSADAD                                  = 0,
    ETGFPTDGSADAD                                  = 1,
    ETGFPTDGSADAD                                  = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleAffixEffectiveLocation
enum class ETGFProtoTgfEnBattleAffixEffectiveLocation : uint8_t
{
    ETGFPTEBAEL                                    = 0,
    ETGFPTEBAEL                                    = 1,
    ETGFPTEBAEL                                    = 2,
    ETGFPTEBAEL                                    = 3,
    ETGFPTEBAEL                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnChallengerModelType
enum class ETGFProtoTgfEnChallengerModelType : uint8_t
{
    ETGFPTECMT                                     = 0,
    ETGFPTECMT                                     = 1,
    ETGFPTECMT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleAffixType
enum class ETGFProtoTgfEnBattleAffixType : uint8_t
{
    ETGFPTEBAT                                     = 0,
    ETGFPTEBAT                                     = 5,
    ETGFPTEBAT                                     = 10,
    ETGFPTEBAT                                     = 20,
    ETGFPTEBAT                                     = 30,
    ETGFPTEBAT                                     = 31

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleSettleRankStatisticsType
enum class ETGFProtoTgfEnBattleSettleRankStatisticsType : uint8_t
{
    ETGFPTEBSRST                                   = 0,
    ETGFPTEBSRST                                   = 1,
    ETGFPTEBSRST                                   = 2,
    ETGFPTEBSRST                                   = 3,
    ETGFPTEBSRST                                   = 4,
    ETGFPTEBSRST                                   = 5,
    ETGFPTEBSRST                                   = 6,
    ETGFPTEBSRST                                   = 7,
    ETGFPTEBSRST                                   = 8

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAffixCorruptionType
enum class ETGFProtoTgfEnAffixCorruptionType : uint8_t
{
    ETGFPTEACT                                     = 0,
    ETGFPTEACT                                     = 1,
    ETGFPTEACT                                     = 2,
    ETGFPTEACT                                     = 3,
    ETGFPTEACT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnAffixCorruptionGroup
enum class ETGFProtoTgfEnAffixCorruptionGroup : uint8_t
{
    ETGFPTEACG                                     = 0,
    ETGFPTEACG                                     = 1,
    ETGFPTEACG                                     = 2,
    ETGFPTEACG                                     = 3,
    ETGFPTEACG                                     = 4,
    ETGFPTEACG                                     = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleIntStatisticType
enum class ETGFProtoTgfEnBattleIntStatisticType : uint8_t
{
    ETGFPTEBIST                                    = 0,
    ETGFPTEBIST                                    = 1,
    ETGFPTEBIST                                    = 2,
    ETGFPTEBIST                                    = 3,
    ETGFPTEBIST                                    = 4,
    ETGFPTEBIST                                    = 5,
    ETGFPTEBIST                                    = 6,
    ETGFPTEBIST                                    = 11,
    ETGFPTEBIST                                    = 51,
    ETGFPTEBIST                                    = 52,
    ETGFPTEBIST                                    = 53,
    ETGFPTEBIST                                    = 54

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleFloatStatisticType
enum class ETGFProtoTgfEnBattleFloatStatisticType : uint8_t
{
    ETGFPTEBFST                                    = 0,
    ETGFPTEBFST                                    = 1,
    ETGFPTEBFST                                    = 2,
    ETGFPTEBFST                                    = 3,
    ETGFPTEBFST                                    = 4,
    ETGFPTEBFST                                    = 5,
    ETGFPTEBFST                                    = 6,
    ETGFPTEBFST                                    = 7,
    ETGFPTEBFST                                    = 8

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleRelationStatisticType
enum class ETGFProtoTgfEnBattleRelationStatisticType : uint8_t
{
    ETGFPTEBRST                                    = 0,
    ETGFPTEBRST                                    = 1,
    ETGFPTEBRST                                    = 2,
    ETGFPTEBRST                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleActorType
enum class ETGFProtoTgfEnBattleActorType : uint8_t
{
    ETGFPTEBAT                                     = 0,
    ETGFPTEBAT                                     = 1,
    ETGFPTEBAT                                     = 2,
    ETGFPTEBAT                                     = 3,
    ETGFPTEBAT                                     = 11,
    ETGFPTEBAT                                     = 12,
    ETGFPTEBAT                                     = 13,
    ETGFPTEBAT                                     = 14,
    ETGFPTEBAT                                     = 41,
    ETGFPTEBAT                                     = 42

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleMapArgsType
enum class ETGFProtoTgfEnBattleMapArgsType : uint8_t
{
    ETGFPTEBMAT                                    = 0,
    ETGFPTEBMAT                                    = 1,
    ETGFPTEBMAT                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnDSPlayerGameStatusType
enum class ETGFProtoTgfEnDSPlayerGameStatusType : uint8_t
{
    ETGFPTEDSPGST                                  = 0,
    ETGFPTEDSPGST                                  = 1,
    ETGFPTEDSPGST                                  = 2,
    ETGFPTEDSPGST                                  = 3,
    ETGFPTEDSPGST                                  = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnDSPlayerActorStatusType
enum class ETGFProtoTgfEnDSPlayerActorStatusType : uint8_t
{
    ETGFPTEDSPAST                                  = 0,
    ETGFPTEDSPAST                                  = 1,
    ETGFPTEDSPAST                                  = 2,
    ETGFPTEDSPAST                                  = 3,
    ETGFPTEDSPAST                                  = 4,
    ETGFPTEDSPAST                                  = 11,
    ETGFPTEDSPAST                                  = 12,
    ETGFPTEDSPAST                                  = 13,
    ETGFPTEDSPAST                                  = 14,
    ETGFPTEDSPAST                                  = 15,
    ETGFPTEDSPAST                                  = 16,
    ETGFPTEDSPAST                                  = 17,
    ETGFPTEDSPAST                                  = 18,
    ETGFPTEDSPAST                                  = 19,
    ETGFPTEDSPAST                                  = 20

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnDsBattleScenesType
enum class ETGFProtoTgfEnDsBattleScenesType : uint8_t
{
    ETGFPTEDBST                                    = 0,
    ETGFPTEDBST                                    = 1,
    ETGFPTEDBST                                    = 2,
    ETGFPTEDBST                                    = 3,
    ETGFPTEDBST                                    = 4,
    ETGFPTEDBST                                    = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleGameplayEffectActiveType
enum class ETGFProtoTgfEnBattleGameplayEffectActiveType : uint8_t
{
    ETGFPTEBGEAT                                   = 0,
    ETGFPTEBGEAT                                   = 1,
    ETGFPTEBGEAT                                   = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleGameplayEffectSkillType
enum class ETGFProtoTgfEnBattleGameplayEffectSkillType : uint8_t
{
    ETGFPTEBGEST                                   = 0,
    ETGFPTEBGEST                                   = 1,
    ETGFPTEBGEST                                   = 2,
    ETGFPTEBGEST                                   = 3,
    ETGFPTEBGEST                                   = 10,
    ETGFPTEBGEST                                   = 11,
    ETGFPTEBGEST                                   = 40,
    ETGFPTEBGEST                                   = 101,
    ETGFPTEBGEST                                   = 102

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleGameplayPlayerSceneTag
enum class ETGFProtoTgfEnBattleGameplayPlayerSceneTag : uint8_t
{
    ETGFPTEBGPST                                   = 0,
    ETGFPTEBGPST                                   = 1,
    ETGFPTEBGPST                                   = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAttributeValueOffsetValue
enum class ETGFProtoTgfDBattleAttributeValueOffsetValue : uint8_t
{
    ETGFPTDBAVOV                                   = 0,
    ETGFPTDBAVOV                                   = 1,
    ETGFPTDBAVOV                                   = 2,
    ETGFPTDBAVOV                                   = 3,
    ETGFPTDBAVOV                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAbillitySetOffsetValue
enum class ETGFProtoTgfDBattleAbillitySetOffsetValue : uint8_t
{
    ETGFPTDBASOV                                   = 0,
    ETGFPTDBASOV                                   = 1,
    ETGFPTDBASOV                                   = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleGemSlotOffsetValue
enum class ETGFProtoTgfDBattleGemSlotOffsetValue : uint8_t
{
    ETGFPTDBGSOV                                   = 0,
    ETGFPTDBGSOV                                   = 1,
    ETGFPTDBGSOV                                   = 2,
    ETGFPTDBGSOV                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleGearSetOffsetValue
enum class ETGFProtoTgfDBattleGearSetOffsetValue : uint8_t
{
    ETGFPTDBGSOV                                   = 0,
    ETGFPTDBGSOV                                   = 1,
    ETGFPTDBGSOV                                   = 2,
    ETGFPTDBGSOV                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixAbilityRandomDataAffixTypeId
enum class ETGFProtoTgfDBattleAffixAbilityRandomDataAffixTypeId : uint8_t
{
    ETGFPTDBAARDATI                                = 0,
    ETGFPTDBAARDATI                                = 11,
    ETGFPTDBAARDATI                                = 12,
    ETGFPTDBAARDATI                                = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixAbilityDataAffixTypeId
enum class ETGFProtoTgfDBattleAffixAbilityDataAffixTypeId : uint8_t
{
    ETGFPTDBAADATI                                 = 0,
    ETGFPTDBAADATI                                 = 11,
    ETGFPTDBAADATI                                 = 12,
    ETGFPTDBAADATI                                 = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixAttributeRandomValueDataEffectType
enum class ETGFProtoTgfDBattleAffixAttributeRandomValueDataEffectType : uint8_t
{
    ETGFPTDBAARVDET                                = 0,
    ETGFPTDBAARVDET                                = 1,
    ETGFPTDBAARVDET                                = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixDisplayDataAbilitySetValue
enum class ETGFProtoTgfDBattleAffixDisplayDataAbilitySetValue : uint8_t
{
    ETGFPTDBADDASV                                 = 0,
    ETGFPTDBADDASV                                 = 11,
    ETGFPTDBADDASV                                 = 12,
    ETGFPTDBADDASV                                 = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixDisplayDataAttributeValue
enum class ETGFProtoTgfDBattleAffixDisplayDataAttributeValue : uint8_t
{
    ETGFPTDBADDAV                                  = 0,
    ETGFPTDBADDAV                                  = 11,
    ETGFPTDBADDAV                                  = 12,
    ETGFPTDBADDAV                                  = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixDisplayDataAttrGearSetAffix
enum class ETGFProtoTgfDBattleAffixDisplayDataAttrGearSetAffix : uint8_t
{
    ETGFPTDBADDAGSA                                = 0,
    ETGFPTDBADDAGSA                                = 101,
    ETGFPTDBADDAGSA                                = 102,
    ETGFPTDBADDAGSA                                = 103

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixDisplayDataGearSetValue
enum class ETGFProtoTgfDBattleAffixDisplayDataGearSetValue : uint8_t
{
    ETGFPTDBADDGSV                                 = 0,
    ETGFPTDBADDGSV                                 = 11,
    ETGFPTDBADDGSV                                 = 12,
    ETGFPTDBADDGSV                                 = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixDisplayDataData
enum class ETGFProtoTgfDBattleAffixDisplayDataData : uint8_t
{
    ETGFPTDBADDD                                   = 0,
    ETGFPTDBADDD                                   = 101,
    ETGFPTDBADDD                                   = 102,
    ETGFPTDBADDD                                   = 103,
    ETGFPTDBADDD                                   = 104,
    ETGFPTDBADDD                                   = 105,
    ETGFPTDBADDD                                   = 106

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixWeightIndexType
enum class ETGFProtoTgfDBattleAffixWeightIndexType : uint8_t
{
    ETGFPTDBAWIT                                   = 0,
    ETGFPTDBAWIT                                   = 1,
    ETGFPTDBAWIT                                   = 2,
    ETGFPTDBAWIT                                   = 3,
    ETGFPTDBAWIT                                   = 4,
    ETGFPTDBAWIT                                   = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixRandomRulePoolConditionType
enum class ETGFProtoTgfDBattleAffixRandomRulePoolConditionType : uint8_t
{
    ETGFPTDBARRPCT                                 = 0,
    ETGFPTDBARRPCT                                 = 1,
    ETGFPTDBARRPCT                                 = 2,
    ETGFPTDBARRPCT                                 = 3,
    ETGFPTDBARRPCT                                 = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleAffixRandomRulePoolConditionCollectType
enum class ETGFProtoTgfDBattleAffixRandomRulePoolConditionCollectType : uint8_t
{
    ETGFPTDBARRPCCT                                = 0,
    ETGFPTDBARRPCCT                                = 1,
    ETGFPTDBARRPCCT                                = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDBattleMapArgsTypeDataValue
enum class ETGFProtoTgfDBattleMapArgsTypeDataValue : uint8_t
{
    ETGFPTDBMATDV                                  = 0,
    ETGFPTDBMATDV                                  = 1,
    ETGFPTDBMATDV                                  = 2,
    ETGFPTDBMATDV                                  = 3,
    ETGFPTDBMATDV                                  = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleExitReason
enum class ETGFProtoTgfEnBattleExitReason : uint8_t
{
    ETGFPTEBER                                     = 0,
    ETGFPTEBER                                     = 1,
    ETGFPTEBER                                     = 2,
    ETGFPTEBER                                     = 11,
    ETGFPTEBER                                     = 12,
    ETGFPTEBER                                     = 13,
    ETGFPTEBER                                     = 101,
    ETGFPTEBER                                     = 102,
    ETGFPTEBER                                     = 103

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBattleUserResultType
enum class ETGFProtoTgfEnBattleUserResultType : uint8_t
{
    ETGFPTEBURT                                    = 0,
    ETGFPTEBURT                                    = 1,
    ETGFPTEBURT                                    = 2,
    ETGFPTEBURT                                    = 3,
    ETGFPTEBURT                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGetCacheType
enum class ETGFProtoTgfEnGetCacheType : uint8_t
{
    ETGFPTEGCT                                     = 0,
    ETGFPTEGCT                                     = 1,
    ETGFPTEGCT                                     = 2,
    ETGFPTEGCT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDCacheMetaMetaData
enum class ETGFProtoTgfDCacheMetaMetaData : uint8_t
{
    ETGFPTDCMMD                                    = 0,
    ETGFPTDCMMD                                    = 11,
    ETGFPTDCMMD                                    = 12,
    ETGFPTDCMMD                                    = 13,
    ETGFPTDCMMD                                    = 14,
    ETGFPTDCMMD                                    = 15,
    ETGFPTDCMMD                                    = 16

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDCacheObjectDataObjectData
enum class ETGFProtoTgfDCacheObjectDataObjectData : uint8_t
{
    ETGFPTDCODOD                                   = 0,
    ETGFPTDCODOD                                   = 11,
    ETGFPTDCODOD                                   = 12,
    ETGFPTDCODOD                                   = 13,
    ETGFPTDCODOD                                   = 24,
    ETGFPTDCODOD                                   = 25,
    ETGFPTDCODOD                                   = 26

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnChatChannelType
enum class ETGFProtoTgfEnChatChannelType : uint8_t
{
    ETGFPTECCT                                     = 0,
    ETGFPTECCT                                     = 1,
    ETGFPTECCT                                     = 2,
    ETGFPTECCT                                     = 3,
    ETGFPTECCT                                     = 4,
    ETGFPTECCT                                     = 5,
    ETGFPTECCT                                     = 6,
    ETGFPTECCT                                     = 7,
    ETGFPTECCT                                     = 8

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnChatMsgSendType
enum class ETGFProtoTgfEnChatMsgSendType : uint8_t
{
    ETGFPTECMST                                    = 0,
    ETGFPTECMST                                    = 1,
    ETGFPTECMST                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDChatChannelIdKeyCastType
enum class ETGFProtoTgfDChatChannelIdKeyCastType : uint8_t
{
    ETGFPTDCCIKCT                                  = 0,
    ETGFPTDCCIKCT                                  = 4,
    ETGFPTDCCIKCT                                  = 5,
    ETGFPTDCCIKCT                                  = 6,
    ETGFPTDCCIKCT                                  = 7,
    ETGFPTDCCIKCT                                  = 8

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDChatMessageDetailCommand
enum class ETGFProtoTgfDChatMessageDetailCommand : uint8_t
{
    ETGFPTDCMDC                                    = 0,
    ETGFPTDCMDC                                    = 1,
    ETGFPTDCMDC                                    = 2,
    ETGFPTDCMDC                                    = 3,
    ETGFPTDCMDC                                    = 101,
    ETGFPTDCMDC                                    = 102,
    ETGFPTDCMDC                                    = 103,
    ETGFPTDCMDC                                    = 104,
    ETGFPTDCMDC                                    = 105,
    ETGFPTDCMDC                                    = 106

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDChatMessageSenderType
enum class ETGFProtoTgfDChatMessageSenderType : uint8_t
{
    ETGFPTDCMST                                    = 0,
    ETGFPTDCMST                                    = 3,
    ETGFPTDCMST                                    = 31,
    ETGFPTDCMST                                    = 32

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnBusinessPingType
enum class ETGFProtoTgfEnBusinessPingType : uint8_t
{
    ETGFPTEBPT                                     = 0,
    ETGFPTEBPT                                     = 1,
    ETGFPTEBPT                                     = 2,
    ETGFPTEBPT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnNetworkLatencyType
enum class ETGFProtoTgfEnNetworkLatencyType : uint8_t
{
    ETGFPTENLT                                     = 0,
    ETGFPTENLT                                     = 1,
    ETGFPTENLT                                     = 2,
    ETGFPTENLT                                     = 3,
    ETGFPTENLT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnModuleType
enum class ETGFProtoTgfEnModuleType : uint8_t
{
    ETGFPTEMT                                      = 0,
    ETGFPTEMT                                      = 1,
    ETGFPTEMT                                      = 2,
    ETGFPTEMT                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDSettleInterFaceType
enum class ETGFProtoTgfDSettleInterFaceType : uint8_t
{
    ETGFPTDSIFT                                    = 0,
    ETGFPTDSIFT                                    = 1,
    ETGFPTDSIFT                                    = 2,
    ETGFPTDSIFT                                    = 3,
    ETGFPTDSIFT                                    = 4,
    ETGFPTDSIFT                                    = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnFacadeType
enum class ETGFProtoTgfEnFacadeType : uint8_t
{
    ETGFPTEFT                                      = 0,
    ETGFPTEFT                                      = 1,
    ETGFPTEFT                                      = 2,
    ETGFPTEFT                                      = 3,
    ETGFPTEFT                                      = 4,
    ETGFPTEFT                                      = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnFacadeAccessType
enum class ETGFProtoTgfEnFacadeAccessType : uint8_t
{
    ETGFPTEFAT                                     = 0,
    ETGFPTEFAT                                     = 1,
    ETGFPTEFAT                                     = 2,
    ETGFPTEFAT                                     = 3,
    ETGFPTEFAT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnFacadeSuitType
enum class ETGFProtoTgfEnFacadeSuitType : uint8_t
{
    ETGFPTEFST                                     = 0,
    ETGFPTEFST                                     = 1,
    ETGFPTEFST                                     = 2,
    ETGFPTEFST                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnFacadeSkinFirstSortType
enum class ETGFProtoTgfEnFacadeSkinFirstSortType : uint8_t
{
    ETGFPTEFSFST                                   = 0,
    ETGFPTEFSFST                                   = 1,
    ETGFPTEFSFST                                   = 2,
    ETGFPTEFSFST                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnFacadeSkinSecondSortType
enum class ETGFProtoTgfEnFacadeSkinSecondSortType : uint8_t
{
    ETGFPTEFSSST                                   = 0,
    ETGFPTEFSSST                                   = 10,
    ETGFPTEFSSST                                   = 20,
    ETGFPTEFSSST                                   = 30,
    ETGFPTEFSSST                                   = 40,
    ETGFPTEFSSST                                   = 50,
    ETGFPTEFSSST                                   = 51

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnSkinSlotType
enum class ETGFProtoTgfEnSkinSlotType : uint8_t
{
    ETGFPTESST                                     = 0,
    ETGFPTESST                                     = 1,
    ETGFPTESST                                     = 2,
    ETGFPTESST                                     = 3,
    ETGFPTESST                                     = 4,
    ETGFPTESST                                     = 5,
    ETGFPTESST                                     = 11,
    ETGFPTESST                                     = 12,
    ETGFPTESST                                     = 13,
    ETGFPTESST                                     = 14,
    ETGFPTESST                                     = 15,
    ETGFPTESST                                     = 21,
    ETGFPTESST                                     = 22,
    ETGFPTESST                                     = 23,
    ETGFPTESST                                     = 24,
    ETGFPTESST                                     = 25,
    ETGFPTESST                                     = 31,
    ETGFPTESST                                     = 32,
    ETGFPTESST                                     = 41,
    ETGFPTESST                                     = 51,
    ETGFPTESST                                     = 62,
    ETGFPTESST                                     = 63,
    ETGFPTESST                                     = 64,
    ETGFPTESST                                     = 65,
    ETGFPTESST                                     = 66,
    ETGFPTESST                                     = 81,
    ETGFPTESST                                     = 101,
    ETGFPTESST                                     = 102,
    ETGFPTESST                                     = 71,
    ETGFPTESST                                     = 72,
    ETGFPTESST                                     = 151,
    ETGFPTESST                                     = 201,
    ETGFPTESST                                     = 202

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnSkinCategoryType
enum class ETGFProtoTgfEnSkinCategoryType : uint8_t
{
    ETGFPTESCT                                     = 0,
    ETGFPTESCT                                     = 1,
    ETGFPTESCT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDFriendEventEvent
enum class ETGFProtoTgfDFriendEventEvent : uint8_t
{
    ETGFPTDFEE                                     = 0,
    ETGFPTDFEE                                     = 11,
    ETGFPTDFEE                                     = 12,
    ETGFPTDFEE                                     = 13,
    ETGFPTDFEE                                     = 14,
    ETGFPTDFEE                                     = 17,
    ETGFPTDFEE                                     = 18,
    ETGFPTDFEE                                     = 19,
    ETGFPTDFEE                                     = 20,
    ETGFPTDFEE                                     = 21,
    ETGFPTDFEE                                     = 22,
    ETGFPTDFEE                                     = 101,
    ETGFPTDFEE                                     = 102

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGearEquipSubType
enum class ETGFProtoTgfEnGearEquipSubType : uint8_t
{
    ETGFPTEGEST                                    = 0,
    ETGFPTEGEST                                    = 1,
    ETGFPTEGEST                                    = 2,
    ETGFPTEGEST                                    = 3,
    ETGFPTEGEST                                    = 4,
    ETGFPTEGEST                                    = 5,
    ETGFPTEGEST                                    = 11,
    ETGFPTEGEST                                    = 12,
    ETGFPTEGEST                                    = 13,
    ETGFPTEGEST                                    = 14,
    ETGFPTEGEST                                    = 15,
    ETGFPTEGEST                                    = 21,
    ETGFPTEGEST                                    = 22,
    ETGFPTEGEST                                    = 23,
    ETGFPTEGEST                                    = 24,
    ETGFPTEGEST                                    = 25,
    ETGFPTEGEST                                    = 31,
    ETGFPTEGEST                                    = 32,
    ETGFPTEGEST                                    = 41,
    ETGFPTEGEST                                    = 42,
    ETGFPTEGEST                                    = 51,
    ETGFPTEGEST                                    = 61,
    ETGFPTEGEST                                    = 62,
    ETGFPTEGEST                                    = 63,
    ETGFPTEGEST                                    = 64,
    ETGFPTEGEST                                    = 65,
    ETGFPTEGEST                                    = 66,
    ETGFPTEGEST                                    = 81,
    ETGFPTEGEST                                    = 101,
    ETGFPTEGEST                                    = 102,
    ETGFPTEGEST                                    = 151,
    ETGFPTEGEST                                    = 201,
    ETGFPTEGEST                                    = 202,
    ETGFPTEGEST                                    = 203,
    ETGFPTEGEST                                    = 204,
    ETGFPTEGEST                                    = 205,
    ETGFPTEGEST                                    = 206

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGearEquipmentType
enum class ETGFProtoTgfEnGearEquipmentType : uint8_t
{
    ETGFPTEGET                                     = 0,
    ETGFPTEGET                                     = 1,
    ETGFPTEGET                                     = 2,
    ETGFPTEGET                                     = 3,
    ETGFPTEGET                                     = 4,
    ETGFPTEGET                                     = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGearElement
enum class ETGFProtoTgfEnGearElement : uint8_t
{
    ETGFPTEGE                                      = 0,
    ETGFPTEGE                                      = 1,
    ETGFPTEGE                                      = 2,
    ETGFPTEGE                                      = 3,
    ETGFPTEGE                                      = 4,
    ETGFPTEGE                                      = 5,
    ETGFPTEGE                                      = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnWeaponEquipType
enum class ETGFProtoTgfEnWeaponEquipType : uint8_t
{
    ETGFPTEWET                                     = 0,
    ETGFPTEWET                                     = 1,
    ETGFPTEWET                                     = 2,
    ETGFPTEWET                                     = 3,
    ETGFPTEWET                                     = 11,
    ETGFPTEWET                                     = 12,
    ETGFPTEWET                                     = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGearInlaidShapeType
enum class ETGFProtoTgfEnGearInlaidShapeType : uint8_t
{
    ETGFPTEGIST                                    = 0,
    ETGFPTEGIST                                    = 1,
    ETGFPTEGIST                                    = 2,
    ETGFPTEGIST                                    = 3,
    ETGFPTEGIST                                    = 4,
    ETGFPTEGIST                                    = 5,
    ETGFPTEGIST                                    = 51,
    ETGFPTEGIST                                    = 52,
    ETGFPTEGIST                                    = 53,
    ETGFPTEGIST                                    = 54,
    ETGFPTEGIST                                    = 55,
    ETGFPTEGIST                                    = 56

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGuildRoleType
enum class ETGFProtoTgfEnGuildRoleType : uint8_t
{
    ETGFPTEGRT                                     = 0,
    ETGFPTEGRT                                     = 1,
    ETGFPTEGRT                                     = 2,
    ETGFPTEGRT                                     = 3,
    ETGFPTEGRT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnGuildSubscribeResultType
enum class ETGFProtoTgfEnGuildSubscribeResultType : uint8_t
{
    ETGFPTEGSRT                                    = 0,
    ETGFPTEGSRT                                    = 1,
    ETGFPTEGSRT                                    = 2,
    ETGFPTEGSRT                                    = 4,
    ETGFPTEGSRT                                    = 6,
    ETGFPTEGSRT                                    = 7

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDGuildEventLogEvent
enum class ETGFProtoTgfDGuildEventLogEvent : uint8_t
{
    ETGFPTDGELE                                    = 0,
    ETGFPTDGELE                                    = 11,
    ETGFPTDGELE                                    = 12,
    ETGFPTDGELE                                    = 13,
    ETGFPTDGELE                                    = 14,
    ETGFPTDGELE                                    = 15,
    ETGFPTDGELE                                    = 21,
    ETGFPTDGELE                                    = 22,
    ETGFPTDGELE                                    = 31,
    ETGFPTDGELE                                    = 32,
    ETGFPTDGELE                                    = 33,
    ETGFPTDGELE                                    = 34,
    ETGFPTDGELE                                    = 35,
    ETGFPTDGELE                                    = 36,
    ETGFPTDGELE                                    = 37,
    ETGFPTDGELE                                    = 38,
    ETGFPTDGELE                                    = 39,
    ETGFPTDGELE                                    = 40,
    ETGFPTDGELE                                    = 41,
    ETGFPTDGELE                                    = 42,
    ETGFPTDGELE                                    = 43,
    ETGFPTDGELE                                    = 44

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemRarity
enum class ETGFProtoTgfEnItemRarity : uint8_t
{
    ETGFPTEIR                                      = 0,
    ETGFPTEIR                                      = 1,
    ETGFPTEIR                                      = 2,
    ETGFPTEIR                                      = 3,
    ETGFPTEIR                                      = 4,
    ETGFPTEIR                                      = 5,
    ETGFPTEIR                                      = 6,
    ETGFPTEIR                                      = 7,
    ETGFPTEIR                                      = 8,
    ETGFPTEIR                                      = 9

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemUeType
enum class ETGFProtoTgfEnItemUeType : uint8_t
{
    ETGFPTEIUT                                     = 0,
    ETGFPTEIUT                                     = 1,
    ETGFPTEIUT                                     = 2,
    ETGFPTEIUT                                     = 3,
    ETGFPTEIUT                                     = 21,
    ETGFPTEIUT                                     = 22,
    ETGFPTEIUT                                     = 23,
    ETGFPTEIUT                                     = 41,
    ETGFPTEIUT                                     = 42,
    ETGFPTEIUT                                     = 43,
    ETGFPTEIUT                                     = 51,
    ETGFPTEIUT                                     = 52

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemMajorType
enum class ETGFProtoTgfEnItemMajorType : uint8_t
{
    ETGFPTEIMT                                     = 0,
    ETGFPTEIMT                                     = 1,
    ETGFPTEIMT                                     = 2,
    ETGFPTEIMT                                     = 3,
    ETGFPTEIMT                                     = 4,
    ETGFPTEIMT                                     = 5,
    ETGFPTEIMT                                     = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemMinorType
enum class ETGFProtoTgfEnItemMinorType : uint8_t
{
    ETGFPTEIMT                                     = 0,
    ETGFPTEIMT                                     = 1,
    ETGFPTEIMT                                     = 10,
    ETGFPTEIMT                                     = 20,
    ETGFPTEIMT                                     = 21,
    ETGFPTEIMT                                     = 41,
    ETGFPTEIMT                                     = 42,
    ETGFPTEIMT                                     = 43,
    ETGFPTEIMT                                     = 61,
    ETGFPTEIMT                                     = 62,
    ETGFPTEIMT                                     = 63,
    ETGFPTEIMT                                     = 64,
    ETGFPTEIMT                                     = 65,
    ETGFPTEIMT                                     = 71,
    ETGFPTEIMT                                     = 72,
    ETGFPTEIMT                                     = 73,
    ETGFPTEIMT                                     = 74,
    ETGFPTEIMT                                     = 75,
    ETGFPTEIMT                                     = 76

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemPatchType
enum class ETGFProtoTgfEnItemPatchType : uint8_t
{
    ETGFPTEIPT                                     = 0,
    ETGFPTEIPT                                     = 1,
    ETGFPTEIPT                                     = 2,
    ETGFPTEIPT                                     = 3,
    ETGFPTEIPT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemStorageMetaChangeType
enum class ETGFProtoTgfEnItemStorageMetaChangeType : uint8_t
{
    ETGFPTEISMCT                                   = 0,
    ETGFPTEISMCT                                   = 1,
    ETGFPTEISMCT                                   = 2,
    ETGFPTEISMCT                                   = 3,
    ETGFPTEISMCT                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemRewardGiveOutType
enum class ETGFProtoTgfEnItemRewardGiveOutType : uint8_t
{
    ETGFPTEIRGOT                                   = 0,
    ETGFPTEIRGOT                                   = 1,
    ETGFPTEIRGOT                                   = 2,
    ETGFPTEIRGOT                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemDynamicType
enum class ETGFProtoTgfEnItemDynamicType : uint8_t
{
    ETGFPTEIDT                                     = 0,
    ETGFPTEIDT                                     = 1,
    ETGFPTEIDT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDItemCreateInfoCreateData
enum class ETGFProtoTgfDItemCreateInfoCreateData : uint8_t
{
    ETGFPTDICICD                                   = 0,
    ETGFPTDICICD                                   = 11,
    ETGFPTDICICD                                   = 12,
    ETGFPTDICICD                                   = 13,
    ETGFPTDICICD                                   = 14,
    ETGFPTDICICD                                   = 15

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDItemUseActionActionType
enum class ETGFProtoTgfDItemUseActionActionType : uint8_t
{
    ETGFPTDIUAAT                                   = 0,
    ETGFPTDIUAAT                                   = 1,
    ETGFPTDIUAAT                                   = 2,
    ETGFPTDIUAAT                                   = 3,
    ETGFPTDIUAAT                                   = 4,
    ETGFPTDIUAAT                                   = 5,
    ETGFPTDIUAAT                                   = 6,
    ETGFPTDIUAAT                                   = 7

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemWearingPart
enum class ETGFProtoTgfEnItemWearingPart : uint8_t
{
    ETGFPTEIWP                                     = 0,
    ETGFPTEIWP                                     = 1,
    ETGFPTEIWP                                     = 2,
    ETGFPTEIWP                                     = 3,
    ETGFPTEIWP                                     = 4,
    ETGFPTEIWP                                     = 11,
    ETGFPTEIWP                                     = 12,
    ETGFPTEIWP                                     = 13,
    ETGFPTEIWP                                     = 14,
    ETGFPTEIWP                                     = 15,
    ETGFPTEIWP                                     = 16,
    ETGFPTEIWP                                     = 17,
    ETGFPTEIWP                                     = 18,
    ETGFPTEIWP                                     = 41,
    ETGFPTEIWP                                     = 42,
    ETGFPTEIWP                                     = 43,
    ETGFPTEIWP                                     = 51,
    ETGFPTEIWP                                     = 101,
    ETGFPTEIWP                                     = 102,
    ETGFPTEIWP                                     = 103,
    ETGFPTEIWP                                     = 104,
    ETGFPTEIWP                                     = 105,
    ETGFPTEIWP                                     = 106,
    ETGFPTEIWP                                     = 107,
    ETGFPTEIWP                                     = 108,
    ETGFPTEIWP                                     = 109,
    ETGFPTEIWP                                     = 110

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemStorageType
enum class ETGFProtoTgfEnItemStorageType : uint8_t
{
    ETGFPTEIST                                     = 0,
    ETGFPTEIST                                     = 1,
    ETGFPTEIST                                     = 2,
    ETGFPTEIST                                     = 3,
    ETGFPTEIST                                     = 4,
    ETGFPTEIST                                     = 101,
    ETGFPTEIST                                     = 102,
    ETGFPTEIST                                     = 201,
    ETGFPTEIST                                     = 202

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnItemBringoutInGameLimitType
enum class ETGFProtoTgfEnItemBringoutInGameLimitType : uint8_t
{
    ETGFPTEIBIGLT                                  = 0,
    ETGFPTEIBIGLT                                  = 1,
    ETGFPTEIBIGLT                                  = 3,
    ETGFPTEIBIGLT                                  = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDUserLabelLabelType
enum class ETGFProtoTgfDUserLabelLabelType : uint8_t
{
    ETGFPTDULLT                                    = 0,
    ETGFPTDULLT                                    = 1,
    ETGFPTDULLT                                    = 2,
    ETGFPTDULLT                                    = 3,
    ETGFPTDULLT                                    = 4,
    ETGFPTDULLT                                    = 5,
    ETGFPTDULLT                                    = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnLevelStatus
enum class ETGFProtoTgfEnLevelStatus : uint8_t
{
    ETGFPTELS                                      = 0,
    ETGFPTELS                                      = 1,
    ETGFPTELS                                      = 2,
    ETGFPTELS                                      = 3,
    ETGFPTELS                                      = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDLotteryListLottery
enum class ETGFProtoTgfDLotteryListLottery : uint8_t
{
    ETGFPTDLLL                                     = 0,
    ETGFPTDLLL                                     = 1,
    ETGFPTDLLL                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnLotteryAccessToKeysType
enum class ETGFProtoTgfEnLotteryAccessToKeysType : uint8_t
{
    ETGFPTELATKT                                   = 0,
    ETGFPTELATKT                                   = 1,
    ETGFPTELATKT                                   = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnLotteryItemType
enum class ETGFProtoTgfEnLotteryItemType : uint8_t
{
    ETGFPTELIT                                     = 0,
    ETGFPTELIT                                     = 1,
    ETGFPTELIT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMutlLanguageType
enum class ETGFProtoTgfEnMutlLanguageType : uint8_t
{
    ETGFPTEMLT                                     = 0,
    ETGFPTEMLT                                     = 1,
    ETGFPTEMLT                                     = 2,
    ETGFPTEMLT                                     = 3,
    ETGFPTEMLT                                     = 4,
    ETGFPTEMLT                                     = 5,
    ETGFPTEMLT                                     = 6,
    ETGFPTEMLT                                     = 7,
    ETGFPTEMLT                                     = 8,
    ETGFPTEMLT                                     = 9,
    ETGFPTEMLT                                     = 10,
    ETGFPTEMLT                                     = 11

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMailMajorType
enum class ETGFProtoTgfEnMailMajorType : uint8_t
{
    ETGFPTEMMT                                     = 0,
    ETGFPTEMMT                                     = 1,
    ETGFPTEMMT                                     = 2,
    ETGFPTEMMT                                     = 3,
    ETGFPTEMMT                                     = 4,
    ETGFPTEMMT                                     = 5,
    ETGFPTEMMT                                     = 6,
    ETGFPTEMMT                                     = 20,
    ETGFPTEMMT                                     = 21,
    ETGFPTEMMT                                     = 22,
    ETGFPTEMMT                                     = 31,
    ETGFPTEMMT                                     = 41,
    ETGFPTEMMT                                     = 101,
    ETGFPTEMMT                                     = 102,
    ETGFPTEMMT                                     = 103,
    ETGFPTEMMT                                     = 104

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMailStatusType
enum class ETGFProtoTgfEnMailStatusType : uint8_t
{
    ETGFPTEMST                                     = 0,
    ETGFPTEMST                                     = 1,
    ETGFPTEMST                                     = 2,
    ETGFPTEMST                                     = 4,
    ETGFPTEMST                                     = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMailFlagType
enum class ETGFProtoTgfEnMailFlagType : uint8_t
{
    ETGFPTEMFT                                     = 0,
    ETGFPTEMFT                                     = 1,
    ETGFPTEMFT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMarketBillType
enum class ETGFProtoTgfEnMarketBillType : uint8_t
{
    ETGFPTEMBT                                     = 0,
    ETGFPTEMBT                                     = 1,
    ETGFPTEMBT                                     = 101,
    ETGFPTEMBT                                     = 102,
    ETGFPTEMBT                                     = 103,
    ETGFPTEMBT                                     = 104,
    ETGFPTEMBT                                     = 105,
    ETGFPTEMBT                                     = 106,
    ETGFPTEMBT                                     = 107

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMarketProductGetType
enum class ETGFProtoTgfEnMarketProductGetType : uint8_t
{
    ETGFPTEMPGT                                    = 0,
    ETGFPTEMPGT                                    = 1,
    ETGFPTEMPGT                                    = 2,
    ETGFPTEMPGT                                    = 3,
    ETGFPTEMPGT                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnSellOrRepurchaseType
enum class ETGFProtoTgfEnSellOrRepurchaseType : uint8_t
{
    ETGFPTESORT                                    = 0,
    ETGFPTESORT                                    = 1,
    ETGFPTESORT                                    = 2,
    ETGFPTESORT                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRefreshPoolType
enum class ETGFProtoTgfEnRefreshPoolType : uint8_t
{
    ETGFPTERPT                                     = 0,
    ETGFPTERPT                                     = 1,
    ETGFPTERPT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMatchSelectSvrType
enum class ETGFProtoTgfEnMatchSelectSvrType : uint8_t
{
    ETGFPTEMSST                                    = 0,
    ETGFPTEMSST                                    = 1,
    ETGFPTEMSST                                    = 2,
    ETGFPTEMSST                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnMatchStatus
enum class ETGFProtoTgfEnMatchStatus : uint8_t
{
    ETGFPTEMS                                      = 0,
    ETGFPTEMS                                      = 1,
    ETGFPTEMS                                      = 2,
    ETGFPTEMS                                      = 3,
    ETGFPTEMS                                      = 5,
    ETGFPTEMS                                      = 6,
    ETGFPTEMS                                      = 7,
    ETGFPTEMS                                      = 8,
    ETGFPTEMS                                      = 20,
    ETGFPTEMS                                      = 21

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDMatchEventLogEvent
enum class ETGFProtoTgfDMatchEventLogEvent : uint8_t
{
    ETGFPTDMELE                                    = 0,
    ETGFPTDMELE                                    = 11,
    ETGFPTDMELE                                    = 12,
    ETGFPTDMELE                                    = 13,
    ETGFPTDMELE                                    = 21,
    ETGFPTDMELE                                    = 22,
    ETGFPTDMELE                                    = 23,
    ETGFPTDMELE                                    = 24,
    ETGFPTDMELE                                    = 25,
    ETGFPTDMELE                                    = 26,
    ETGFPTDMELE                                    = 27,
    ETGFPTDMELE                                    = 28

};


// Enum  TGFBattleProtocol.ETGFProtoTgfENMithrilForceRewardSendMailReason
enum class ETGFProtoTgfENMithrilForceRewardSendMailReason : uint8_t
{
    ETGFPTENMFRSMR                                 = 0,
    ETGFPTENMFRSMR                                 = 1,
    ETGFPTENMFRSMR                                 = 2,
    ETGFPTENMFRSMR                                 = 3,
    ETGFPTENMFRSMR                                 = 4,
    ETGFPTENMFRSMR                                 = 5,
    ETGFPTENMFRSMR                                 = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDUserQuestEventEvent
enum class ETGFProtoTgfDUserQuestEventEvent : uint8_t
{
    ETGFPTDUQEE                                    = 0,
    ETGFPTDUQEE                                    = 11,
    ETGFPTDUQEE                                    = 12,
    ETGFPTDUQEE                                    = 13,
    ETGFPTDUQEE                                    = 14,
    ETGFPTDUQEE                                    = 15,
    ETGFPTDUQEE                                    = 16,
    ETGFPTDUQEE                                    = 17,
    ETGFPTDUQEE                                    = 18

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestStatus
enum class ETGFProtoTgfEnQuestStatus : uint8_t
{
    ETGFPTEQS                                      = 0,
    ETGFPTEQS                                      = 1,
    ETGFPTEQS                                      = 2,
    ETGFPTEQS                                      = 3,
    ETGFPTEQS                                      = 4,
    ETGFPTEQS                                      = 5,
    ETGFPTEQS                                      = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestBizSystem
enum class ETGFProtoTgfEnQuestBizSystem : uint8_t
{
    ETGFPTEQBS                                     = 0,
    ETGFPTEQBS                                     = 1,
    ETGFPTEQBS                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestType
enum class ETGFProtoTgfEnQuestType : uint8_t
{
    ETGFPTEQT                                      = 0,
    ETGFPTEQT                                      = 1,
    ETGFPTEQT                                      = 2,
    ETGFPTEQT                                      = 3,
    ETGFPTEQT                                      = 4,
    ETGFPTEQT                                      = 5,
    ETGFPTEQT                                      = 6,
    ETGFPTEQT                                      = 7,
    ETGFPTEQT                                      = 8,
    ETGFPTEQT                                      = 9

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestDisplayType
enum class ETGFProtoTgfEnQuestDisplayType : uint8_t
{
    ETGFPTEQDT                                     = 0,
    ETGFPTEQDT                                     = 1,
    ETGFPTEQDT                                     = 2,
    ETGFPTEQDT                                     = 4,
    ETGFPTEQDT                                     = 6,
    ETGFPTEQDT                                     = 7

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnCausedDamageType
enum class ETGFProtoTgfEnCausedDamageType : uint8_t
{
    ETGFPTECDT                                     = 0,
    ETGFPTECDT                                     = 1,
    ETGFPTECDT                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestProgressType
enum class ETGFProtoTgfEnQuestProgressType : uint8_t
{
    ETGFPTEQPT                                     = 0,
    ETGFPTEQPT                                     = 1,
    ETGFPTEQPT                                     = 2,
    ETGFPTEQPT                                     = 3,
    ETGFPTEQPT                                     = 4,
    ETGFPTEQPT                                     = 5,
    ETGFPTEQPT                                     = 6,
    ETGFPTEQPT                                     = 7,
    ETGFPTEQPT                                     = 8,
    ETGFPTEQPT                                     = 9,
    ETGFPTEQPT                                     = 10,
    ETGFPTEQPT                                     = 11,
    ETGFPTEQPT                                     = 12,
    ETGFPTEQPT                                     = 13,
    ETGFPTEQPT                                     = 14,
    ETGFPTEQPT                                     = 15,
    ETGFPTEQPT                                     = 16,
    ETGFPTEQPT                                     = 17,
    ETGFPTEQPT                                     = 18,
    ETGFPTEQPT                                     = 19,
    ETGFPTEQPT                                     = 20,
    ETGFPTEQPT                                     = 21,
    ETGFPTEQPT                                     = 22,
    ETGFPTEQPT                                     = 23,
    ETGFPTEQPT                                     = 24,
    ETGFPTEQPT                                     = 25,
    ETGFPTEQPT                                     = 26,
    ETGFPTEQPT                                     = 27,
    ETGFPTEQPT                                     = 28,
    ETGFPTEQPT                                     = 29,
    ETGFPTEQPT                                     = 30,
    ETGFPTEQPT                                     = 31,
    ETGFPTEQPT                                     = 32,
    ETGFPTEQPT                                     = 33,
    ETGFPTEQPT                                     = 34,
    ETGFPTEQPT                                     = 35,
    ETGFPTEQPT                                     = 36,
    ETGFPTEQPT                                     = 37,
    ETGFPTEQPT                                     = 38,
    ETGFPTEQPT                                     = 39,
    ETGFPTEQPT                                     = 40,
    ETGFPTEQPT                                     = 41,
    ETGFPTEQPT                                     = 42,
    ETGFPTEQPT                                     = 43,
    ETGFPTEQPT                                     = 44,
    ETGFPTEQPT                                     = 45,
    ETGFPTEQPT                                     = 46,
    ETGFPTEQPT                                     = 47,
    ETGFPTEQPT                                     = 48

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestRelationStatType
enum class ETGFProtoTgfEnQuestRelationStatType : uint8_t
{
    ETGFPTEQRST                                    = 0,
    ETGFPTEQRST                                    = 1,
    ETGFPTEQRST                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestProgressCountType
enum class ETGFProtoTgfEnQuestProgressCountType : uint8_t
{
    ETGFPTEQPCT                                    = 0,
    ETGFPTEQPCT                                    = 1,
    ETGFPTEQPCT                                    = 2,
    ETGFPTEQPCT                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestTirggerType
enum class ETGFProtoTgfEnQuestTirggerType : uint8_t
{
    ETGFPTEQTT                                     = 0,
    ETGFPTEQTT                                     = 1,
    ETGFPTEQTT                                     = 2,
    ETGFPTEQTT                                     = 3,
    ETGFPTEQTT                                     = 4,
    ETGFPTEQTT                                     = 5,
    ETGFPTEQTT                                     = 6,
    ETGFPTEQTT                                     = 7,
    ETGFPTEQTT                                     = 8,
    ETGFPTEQTT                                     = 9,
    ETGFPTEQTT                                     = 10,
    ETGFPTEQTT                                     = 11,
    ETGFPTEQTT                                     = 12,
    ETGFPTEQTT                                     = 13,
    ETGFPTEQTT                                     = 14,
    ETGFPTEQTT                                     = 15,
    ETGFPTEQTT                                     = 16,
    ETGFPTEQTT                                     = 17,
    ETGFPTEQTT                                     = 18,
    ETGFPTEQTT                                     = 19,
    ETGFPTEQTT                                     = 20,
    ETGFPTEQTT                                     = 21,
    ETGFPTEQTT                                     = 22,
    ETGFPTEQTT                                     = 23,
    ETGFPTEQTT                                     = 24

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestProgressResetPeriod
enum class ETGFProtoTgfEnQuestProgressResetPeriod : uint8_t
{
    ETGFPTEQPRP                                    = 0,
    ETGFPTEQPRP                                    = 1,
    ETGFPTEQPRP                                    = 2,
    ETGFPTEQPRP                                    = 3,
    ETGFPTEQPRP                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnQuestProgressValueCompareType
enum class ETGFProtoTgfEnQuestProgressValueCompareType : uint8_t
{
    ETGFPTEQPVCT                                   = 0,
    ETGFPTEQPVCT                                   = 1,
    ETGFPTEQPVCT                                   = 2,
    ETGFPTEQPVCT                                   = 3,
    ETGFPTEQPVCT                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDQuestUnlockConditionItemUnlockType
enum class ETGFProtoTgfDQuestUnlockConditionItemUnlockType : uint8_t
{
    ETGFPTDQUCIUT                                  = 0,
    ETGFPTDQUCIUT                                  = 1,
    ETGFPTDQUCIUT                                  = 2,
    ETGFPTDQUCIUT                                  = 3,
    ETGFPTDQUCIUT                                  = 4,
    ETGFPTDQUCIUT                                  = 5,
    ETGFPTDQUCIUT                                  = 6,
    ETGFPTDQUCIUT                                  = 7,
    ETGFPTDQUCIUT                                  = 8,
    ETGFPTDQUCIUT                                  = 9

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRandomPoolType
enum class ETGFProtoTgfEnRandomPoolType : uint8_t
{
    ETGFPTERPT                                     = 0,
    ETGFPTERPT                                     = 1,
    ETGFPTERPT                                     = 2,
    ETGFPTERPT                                     = 3,
    ETGFPTERPT                                     = 4,
    ETGFPTERPT                                     = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankCustomSeasontype
enum class ETGFProtoTgfEnRankCustomSeasontype : uint8_t
{
    ETGFPTERCS                                     = 0,
    ETGFPTERCS                                     = 1,
    ETGFPTERCS                                     = 2,
    ETGFPTERCS                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankReportDataType
enum class ETGFProtoTgfEnRankReportDataType : uint8_t
{
    ETGFPTERRDT                                    = 0,
    ETGFPTERRDT                                    = 1,
    ETGFPTERRDT                                    = 2,
    ETGFPTERRDT                                    = 3,
    ETGFPTERRDT                                    = 4,
    ETGFPTERRDT                                    = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankDataType
enum class ETGFProtoTgfEnRankDataType : uint8_t
{
    ETGFPTERDT                                     = 0,
    ETGFPTERDT                                     = 1,
    ETGFPTERDT                                     = 2,
    ETGFPTERDT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfRankCacheMode
enum class ETGFProtoTgfRankCacheMode : uint8_t
{
    ETGFPTRCM                                      = 0,
    ETGFPTRCM                                      = 1,
    ETGFPTRCM                                      = 2,
    ETGFPTRCM                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankInstanceID
enum class ETGFProtoTgfEnRankInstanceID : uint8_t
{
    ETGFPTERIID                                    = 0,
    ETGFPTERIID                                    = 1,
    ETGFPTERIID                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankSortType
enum class ETGFProtoTgfEnRankSortType : uint8_t
{
    ETGFPTERST                                     = 0,
    ETGFPTERST                                     = 1,
    ETGFPTERST                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankSettlementType
enum class ETGFProtoTgfEnRankSettlementType : uint8_t
{
    ETGFPTERST                                     = 0,
    ETGFPTERST                                     = 1,
    ETGFPTERST                                     = 2,
    ETGFPTERST                                     = 3,
    ETGFPTERST                                     = 4,
    ETGFPTERST                                     = 5

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankLockType
enum class ETGFProtoTgfEnRankLockType : uint8_t
{
    ETGFPTERLT                                     = 0,
    ETGFPTERLT                                     = 1,
    ETGFPTERLT                                     = 2,
    ETGFPTERLT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRankPeriodRewardType
enum class ETGFProtoTgfEnRankPeriodRewardType : uint8_t
{
    ETGFPTERPRT                                    = 0,
    ETGFPTERPRT                                    = 1,
    ETGFPTERPRT                                    = 2,
    ETGFPTERPRT                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfENRankScoreSettleType
enum class ETGFProtoTgfENRankScoreSettleType : uint8_t
{
    ETGFPTENRSST                                   = 0,
    ETGFPTENRSST                                   = 1,
    ETGFPTENRSST                                   = 2,
    ETGFPTENRSST                                   = 3,
    ETGFPTENRSST                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfRedirectType
enum class ETGFProtoTgfRedirectType : uint8_t
{
    ETGFPTRT                                       = 0,
    ETGFPTRT                                       = 1,
    ETGFPTRT                                       = 2,
    ETGFPTRT                                       = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfRedirectReqDataData
enum class ETGFProtoTgfRedirectReqDataData : uint8_t
{
    ETGFPTRRDD                                     = 0,
    ETGFPTRRDD                                     = 1,
    ETGFPTRRDD                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfRedirectResDataData
enum class ETGFProtoTgfRedirectResDataData : uint8_t
{
    ETGFPTRRDD                                     = 0,
    ETGFPTRRDD                                     = 10,
    ETGFPTRRDD                                     = 11

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnArenaStatisitcsType
enum class ETGFProtoTgfEnArenaStatisitcsType : uint8_t
{
    ETGFPTEAST                                     = 0,
    ETGFPTEAST                                     = 1,
    ETGFPTEAST                                     = 2,
    ETGFPTEAST                                     = 3,
    ETGFPTEAST                                     = 11,
    ETGFPTEAST                                     = 12,
    ETGFPTEAST                                     = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnEnvironmentType
enum class ETGFProtoTgfEnEnvironmentType : uint8_t
{
    ETGFPTEET                                      = 0,
    ETGFPTEET                                      = 1,
    ETGFPTEET                                      = 2,
    ETGFPTEET                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnForceType
enum class ETGFProtoTgfEnForceType : uint8_t
{
    ETGFPTEFT                                      = 0,
    ETGFPTEFT                                      = 1,
    ETGFPTEFT                                      = 2,
    ETGFPTEFT                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoleGenderType
enum class ETGFProtoTgfEnRoleGenderType : uint8_t
{
    ETGFPTERGT                                     = 0,
    ETGFPTERGT                                     = 1,
    ETGFPTERGT                                     = 2,
    ETGFPTERGT                                     = 3,
    ETGFPTERGT                                     = 127,
    ETGFPTERGT                                     = 128

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoleRaceType
enum class ETGFProtoTgfEnRoleRaceType : uint8_t
{
    ETGFPTERRT                                     = 0,
    ETGFPTERRT                                     = 1,
    ETGFPTERRT                                     = 2,
    ETGFPTERRT                                     = 3,
    ETGFPTERRT                                     = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoleCareerType
enum class ETGFProtoTgfEnRoleCareerType : uint8_t
{
    ETGFPTERCT                                     = 0,
    ETGFPTERCT                                     = 1,
    ETGFPTERCT                                     = 2,
    ETGFPTERCT                                     = 3,
    ETGFPTERCT                                     = 4,
    ETGFPTERCT                                     = 5,
    ETGFPTERCT                                     = 6,
    ETGFPTERCT                                     = 7,
    ETGFPTERCT                                     = 8,
    ETGFPTERCT                                     = 101,
    ETGFPTERCT                                     = 102,
    ETGFPTERCT                                     = 103,
    ETGFPTERCT                                     = 104

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoleSkillPositionType
enum class ETGFProtoTgfEnRoleSkillPositionType : uint8_t
{
    ETGFPTERSPT                                    = 0,
    ETGFPTERSPT                                    = 1,
    ETGFPTERSPT                                    = 2,
    ETGFPTERSPT                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoleSkinWidgetPositionType
enum class ETGFProtoTgfEnRoleSkinWidgetPositionType : uint8_t
{
    ETGFPTERSWPT                                   = 0,
    ETGFPTERSWPT                                   = 1

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoomStatus
enum class ETGFProtoTgfEnRoomStatus : uint8_t
{
    ETGFPTERS                                      = 0,
    ETGFPTERS                                      = 1,
    ETGFPTERS                                      = 2,
    ETGFPTERS                                      = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoomTransferStatus
enum class ETGFProtoTgfEnRoomTransferStatus : uint8_t
{
    ETGFPTERTS                                     = 0,
    ETGFPTERTS                                     = 1,
    ETGFPTERTS                                     = 2,
    ETGFPTERTS                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoomPosType
enum class ETGFProtoTgfEnRoomPosType : uint8_t
{
    ETGFPTERPT                                     = 0,
    ETGFPTERPT                                     = 1,
    ETGFPTERPT                                     = 2,
    ETGFPTERPT                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoomInviteRemoveReason
enum class ETGFProtoTgfEnRoomInviteRemoveReason : uint8_t
{
    ETGFPTERIRR                                    = 0,
    ETGFPTERIRR                                    = 1,
    ETGFPTERIRR                                    = 2,
    ETGFPTERIRR                                    = 3,
    ETGFPTERIRR                                    = 4,
    ETGFPTERIRR                                    = 5,
    ETGFPTERIRR                                    = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoomCancelMemberReadyReason
enum class ETGFProtoTgfEnRoomCancelMemberReadyReason : uint8_t
{
    ETGFPTERCMRR                                   = 0,
    ETGFPTERCMRR                                   = 1,
    ETGFPTERCMRR                                   = 2,
    ETGFPTERCMRR                                   = 3,
    ETGFPTERCMRR                                   = 4,
    ETGFPTERCMRR                                   = 5,
    ETGFPTERCMRR                                   = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnRoomRemoveMemberReason
enum class ETGFProtoTgfEnRoomRemoveMemberReason : uint8_t
{
    ETGFPTERRMR                                    = 0,
    ETGFPTERRMR                                    = 1,
    ETGFPTERRMR                                    = 2,
    ETGFPTERRMR                                    = 3,
    ETGFPTERRMR                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDRoomMessageActionAction
enum class ETGFProtoTgfDRoomMessageActionAction : uint8_t
{
    ETGFPTDRMAA                                    = 0,
    ETGFPTDRMAA                                    = 51,
    ETGFPTDRMAA                                    = 52,
    ETGFPTDRMAA                                    = 53,
    ETGFPTDRMAA                                    = 54,
    ETGFPTDRMAA                                    = 55,
    ETGFPTDRMAA                                    = 56,
    ETGFPTDRMAA                                    = 57,
    ETGFPTDRMAA                                    = 58,
    ETGFPTDRMAA                                    = 59,
    ETGFPTDRMAA                                    = 60,
    ETGFPTDRMAA                                    = 61,
    ETGFPTDRMAA                                    = 62,
    ETGFPTDRMAA                                    = 63,
    ETGFPTDRMAA                                    = 64,
    ETGFPTDRMAA                                    = 65,
    ETGFPTDRMAA                                    = 98,
    ETGFPTDRMAA                                    = 99,
    ETGFPTDRMAA                                    = 100,
    ETGFPTDRMAA                                    = 110,
    ETGFPTDRMAA                                    = 111,
    ETGFPTDRMAA                                    = 112,
    ETGFPTDRMAA                                    = 113,
    ETGFPTDRMAA                                    = 114,
    ETGFPTDRMAA                                    = 115

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDStatisticsPVPMode
enum class ETGFProtoTgfDStatisticsPVPMode : uint8_t
{
    ETGFPTDSPVPM                                   = 0,
    ETGFPTDSPVPM                                   = 1,
    ETGFPTDSPVPM                                   = 2,
    ETGFPTDSPVPM                                   = 3,
    ETGFPTDSPVPM                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDStatisticsSaveType
enum class ETGFProtoTgfDStatisticsSaveType : uint8_t
{
    ETGFPTDSST                                     = 0,
    ETGFPTDSST                                     = 1,
    ETGFPTDSST                                     = 2,
    ETGFPTDSST                                     = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDStatisticsAccountVersionType
enum class ETGFProtoTgfDStatisticsAccountVersionType : uint8_t
{
    ETGFPTDSAVT                                    = 0,
    ETGFPTDSAVT                                    = 1,
    ETGFPTDSAVT                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTeamMethodType
enum class ETGFProtoTgfEnTeamMethodType : uint8_t
{
    ETGFPTETMT                                     = 0,
    ETGFPTETMT                                     = 1,
    ETGFPTETMT                                     = 2,
    ETGFPTETMT                                     = 3,
    ETGFPTETMT                                     = 4,
    ETGFPTETMT                                     = 5,
    ETGFPTETMT                                     = 6,
    ETGFPTETMT                                     = 7,
    ETGFPTETMT                                     = 8,
    ETGFPTETMT                                     = 9

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDTeamExitReason
enum class ETGFProtoTgfDTeamExitReason : uint8_t
{
    ETGFPTDTER                                     = 0,
    ETGFPTDTER                                     = 1,
    ETGFPTDTER                                     = 2,
    ETGFPTDTER                                     = 3,
    ETGFPTDTER                                     = 4,
    ETGFPTDTER                                     = 5,
    ETGFPTDTER                                     = 6,
    ETGFPTDTER                                     = 7,
    ETGFPTDTER                                     = 8,
    ETGFPTDTER                                     = 9,
    ETGFPTDTER                                     = 10,
    ETGFPTDTER                                     = 11,
    ETGFPTDTER                                     = 12,
    ETGFPTDTER                                     = 13,
    ETGFPTDTER                                     = 14,
    ETGFPTDTER                                     = 15,
    ETGFPTDTER                                     = 16,
    ETGFPTDTER                                     = 17,
    ETGFPTDTER                                     = 18,
    ETGFPTDTER                                     = 19,
    ETGFPTDTER                                     = 20

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTeamInvitationCancelReason
enum class ETGFProtoTgfEnTeamInvitationCancelReason : uint8_t
{
    ETGFPTETICR                                    = 0,
    ETGFPTETICR                                    = 1,
    ETGFPTETICR                                    = 2,
    ETGFPTETICR                                    = 3,
    ETGFPTETICR                                    = 4,
    ETGFPTETICR                                    = 5,
    ETGFPTETICR                                    = 6,
    ETGFPTETICR                                    = 7,
    ETGFPTETICR                                    = 8,
    ETGFPTETICR                                    = 9,
    ETGFPTETICR                                    = 10

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTeamInvitationRejectReason
enum class ETGFProtoTgfEnTeamInvitationRejectReason : uint8_t
{
    ETGFPTETIRR                                    = 0,
    ETGFPTETIRR                                    = 1,
    ETGFPTETIRR                                    = 2,
    ETGFPTETIRR                                    = 3,
    ETGFPTETIRR                                    = 4,
    ETGFPTETIRR                                    = 5,
    ETGFPTETIRR                                    = 6,
    ETGFPTETIRR                                    = 7

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTeamMatchCancelReason
enum class ETGFProtoTgfEnTeamMatchCancelReason : uint8_t
{
    ETGFPTETMCR                                    = 0,
    ETGFPTETMCR                                    = 1,
    ETGFPTETMCR                                    = 2,
    ETGFPTETMCR                                    = 3,
    ETGFPTETMCR                                    = 4,
    ETGFPTETMCR                                    = 5,
    ETGFPTETMCR                                    = 6,
    ETGFPTETMCR                                    = 7

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDChatMessageTeamMemberAction
enum class ETGFProtoTgfDChatMessageTeamMemberAction : uint8_t
{
    ETGFPTDCMTMA                                   = 0,
    ETGFPTDCMTMA                                   = 1,
    ETGFPTDCMTMA                                   = 2,
    ETGFPTDCMTMA                                   = 3,
    ETGFPTDCMTMA                                   = 4,
    ETGFPTDCMTMA                                   = 5,
    ETGFPTDCMTMA                                   = 6,
    ETGFPTDCMTMA                                   = 7,
    ETGFPTDCMTMA                                   = 8,
    ETGFPTDCMTMA                                   = 9

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDChatMessageTeamActionAction
enum class ETGFProtoTgfDChatMessageTeamActionAction : uint8_t
{
    ETGFPTDCMTAA                                   = 0,
    ETGFPTDCMTAA                                   = 1,
    ETGFPTDCMTAA                                   = 3,
    ETGFPTDCMTAA                                   = 4,
    ETGFPTDCMTAA                                   = 5,
    ETGFPTDCMTAA                                   = 7,
    ETGFPTDCMTAA                                   = 11,
    ETGFPTDCMTAA                                   = 12,
    ETGFPTDCMTAA                                   = 13,
    ETGFPTDCMTAA                                   = 14,
    ETGFPTDCMTAA                                   = 15,
    ETGFPTDCMTAA                                   = 19,
    ETGFPTDCMTAA                                   = 20,
    ETGFPTDCMTAA                                   = 21,
    ETGFPTDCMTAA                                   = 22,
    ETGFPTDCMTAA                                   = 23,
    ETGFPTDCMTAA                                   = 24,
    ETGFPTDCMTAA                                   = 25,
    ETGFPTDCMTAA                                   = 26,
    ETGFPTDCMTAA                                   = 27,
    ETGFPTDCMTAA                                   = 28,
    ETGFPTDCMTAA                                   = 29,
    ETGFPTDCMTAA                                   = 30,
    ETGFPTDCMTAA                                   = 31,
    ETGFPTDCMTAA                                   = 32

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDTeamMatchEventLogEvent
enum class ETGFProtoTgfDTeamMatchEventLogEvent : uint8_t
{
    ETGFPTDTMELE                                   = 0,
    ETGFPTDTMELE                                   = 11,
    ETGFPTDTMELE                                   = 12,
    ETGFPTDTMELE                                   = 13

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTradeConfirmationType
enum class ETGFProtoTgfEnTradeConfirmationType : uint8_t
{
    ETGFPTETCT                                     = 0,
    ETGFPTETCT                                     = 1,
    ETGFPTETCT                                     = 2,
    ETGFPTETCT                                     = 3,
    ETGFPTETCT                                     = 4,
    ETGFPTETCT                                     = 5,
    ETGFPTETCT                                     = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTradeOrderTicketState
enum class ETGFProtoTgfEnTradeOrderTicketState : uint8_t
{
    ETGFPTETOTS                                    = 0,
    ETGFPTETOTS                                    = 1,
    ETGFPTETOTS                                    = 11,
    ETGFPTETOTS                                    = 12,
    ETGFPTETOTS                                    = 20,
    ETGFPTETOTS                                    = 21,
    ETGFPTETOTS                                    = 22,
    ETGFPTETOTS                                    = 23,
    ETGFPTETOTS                                    = 24,
    ETGFPTETOTS                                    = 25,
    ETGFPTETOTS                                    = 26

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTradeOrderTicketLabelAttributeType
enum class ETGFProtoTgfEnTradeOrderTicketLabelAttributeType : uint8_t
{
    ETGFPTETOTLAT                                  = 0,
    ETGFPTETOTLAT                                  = 1,
    ETGFPTETOTLAT                                  = 2,
    ETGFPTETOTLAT                                  = 3,
    ETGFPTETOTLAT                                  = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTradePriceMode
enum class ETGFProtoTgfEnTradePriceMode : uint8_t
{
    ETGFPTETPM                                     = 0,
    ETGFPTETPM                                     = 1,
    ETGFPTETPM                                     = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTradeSearchSortBy
enum class ETGFProtoTgfEnTradeSearchSortBy : uint8_t
{
    ETGFPTETSSB                                    = 0,
    ETGFPTETSSB                                    = 1,
    ETGFPTETSSB                                    = 2

};


// Enum  TGFBattleProtocol.ETGFProtoTgfEnTradeIndexUpdateReasonType
enum class ETGFProtoTgfEnTradeIndexUpdateReasonType : uint8_t
{
    ETGFPTETIURT                                   = 0,
    ETGFPTETIURT                                   = 1,
    ETGFPTETIURT                                   = 2,
    ETGFPTETIURT                                   = 3,
    ETGFPTETIURT                                   = 4,
    ETGFPTETIURT                                   = 5,
    ETGFPTETIURT                                   = 6

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDTradeOrderTicketMetaType
enum class ETGFProtoTgfDTradeOrderTicketMetaType : uint8_t
{
    ETGFPTDTOTMT                                   = 0,
    ETGFPTDTOTMT                                   = 11,
    ETGFPTDTOTMT                                   = 12,
    ETGFPTDTOTMT                                   = 13,
    ETGFPTDTOTMT                                   = 14

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDTradeOrderTicketEventLogEvent
enum class ETGFProtoTgfDTradeOrderTicketEventLogEvent : uint8_t
{
    ETGFPTDTOTELE                                  = 0,
    ETGFPTDTOTELE                                  = 21,
    ETGFPTDTOTELE                                  = 22,
    ETGFPTDTOTELE                                  = 23,
    ETGFPTDTOTELE                                  = 24

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDTradePendingConfirmationData
enum class ETGFProtoTgfDTradePendingConfirmationData : uint8_t
{
    ETGFPTDTPCD                                    = 0,
    ETGFPTDTPCD                                    = 2,
    ETGFPTDTPCD                                    = 3,
    ETGFPTDTPCD                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDTradeIndexProductOrderInfoOrder
enum class ETGFProtoTgfDTradeIndexProductOrderInfoOrder : uint8_t
{
    ETGFPTDTIPOIO                                  = 0,
    ETGFPTDTIPOIO                                  = 1,
    ETGFPTDTIPOIO                                  = 2,
    ETGFPTDTIPOIO                                  = 3

};


// Enum  TGFBattleProtocol.ETGFProtoTgfDFunctionUnlockConditionConditionType
enum class ETGFProtoTgfDFunctionUnlockConditionConditionType : uint8_t
{
    ETGFPTDFUCCT                                   = 0,
    ETGFPTDFUCCT                                   = 1,
    ETGFPTDFUCCT                                   = 2,
    ETGFPTDFUCCT                                   = 3,
    ETGFPTDFUCCT                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufExtensionRangeOptionsVerificationState
enum class ETGFProtoGoogleProtobufExtensionRangeOptionsVerificationState : uint8_t
{
    ETGFPGPEROVS                                   = 0,
    ETGFPGPEROVS                                   = 1,
    ETGFPGPEROVS                                   = 2

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFieldDescriptorProtoType
enum class ETGFProtoGoogleProtobufFieldDescriptorProtoType : uint8_t
{
    ETGFPGPFDPT                                    = 0,
    ETGFPGPFDPT                                    = 1,
    ETGFPGPFDPT                                    = 2,
    ETGFPGPFDPT                                    = 3,
    ETGFPGPFDPT                                    = 4,
    ETGFPGPFDPT                                    = 5,
    ETGFPGPFDPT                                    = 6,
    ETGFPGPFDPT                                    = 7,
    ETGFPGPFDPT                                    = 8,
    ETGFPGPFDPT                                    = 9,
    ETGFPGPFDPT                                    = 10,
    ETGFPGPFDPT                                    = 11,
    ETGFPGPFDPT                                    = 12,
    ETGFPGPFDPT                                    = 13,
    ETGFPGPFDPT                                    = 14,
    ETGFPGPFDPT                                    = 15,
    ETGFPGPFDPT                                    = 16,
    ETGFPGPFDPT                                    = 17,
    ETGFPGPFDPT                                    = 18,
    ETGFPGPFDPT                                    = 19

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFieldDescriptorProtoLabel
enum class ETGFProtoGoogleProtobufFieldDescriptorProtoLabel : uint8_t
{
    ETGFPGPFDPL                                    = 0,
    ETGFPGPFDPL                                    = 1,
    ETGFPGPFDPL                                    = 3,
    ETGFPGPFDPL                                    = 2,
    ETGFPGPFDPL                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFileOptionsOptimizeMode
enum class ETGFProtoGoogleProtobufFileOptionsOptimizeMode : uint8_t
{
    ETGFPGPFOOM                                    = 0,
    ETGFPGPFOOM                                    = 1,
    ETGFPGPFOOM                                    = 2,
    ETGFPGPFOOM                                    = 3,
    ETGFPGPFOOM                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFieldOptionsCType
enum class ETGFProtoGoogleProtobufFieldOptionsCType : uint8_t
{
    ETGFPGPFOCT                                    = 0,
    ETGFPGPFOCT                                    = 1,
    ETGFPGPFOCT                                    = 2,
    ETGFPGPFOCT                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFieldOptionsJSType
enum class ETGFProtoGoogleProtobufFieldOptionsJSType : uint8_t
{
    ETGFPGPFOJST                                   = 0,
    ETGFPGPFOJST                                   = 1,
    ETGFPGPFOJST                                   = 2,
    ETGFPGPFOJST                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFieldOptionsOptionRetention
enum class ETGFProtoGoogleProtobufFieldOptionsOptionRetention : uint8_t
{
    ETGFPGPFOOR                                    = 0,
    ETGFPGPFOOR                                    = 1,
    ETGFPGPFOOR                                    = 2,
    ETGFPGPFOOR                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFieldOptionsOptionTargetType
enum class ETGFProtoGoogleProtobufFieldOptionsOptionTargetType : uint8_t
{
    ETGFPGPFOOTT                                   = 0,
    ETGFPGPFOOTT                                   = 1,
    ETGFPGPFOOTT                                   = 2,
    ETGFPGPFOOTT                                   = 3,
    ETGFPGPFOOTT                                   = 4,
    ETGFPGPFOOTT                                   = 5,
    ETGFPGPFOOTT                                   = 6,
    ETGFPGPFOOTT                                   = 7,
    ETGFPGPFOOTT                                   = 8,
    ETGFPGPFOOTT                                   = 9,
    ETGFPGPFOOTT                                   = 10

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufMethodOptionsIdempotencyLevel
enum class ETGFProtoGoogleProtobufMethodOptionsIdempotencyLevel : uint8_t
{
    ETGFPGPMOIL                                    = 0,
    ETGFPGPMOIL                                    = 1,
    ETGFPGPMOIL                                    = 2,
    ETGFPGPMOIL                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFeatureSetFieldPresence
enum class ETGFProtoGoogleProtobufFeatureSetFieldPresence : uint8_t
{
    ETGFPGPFSFP                                    = 0,
    ETGFPGPFSFP                                    = 1,
    ETGFPGPFSFP                                    = 2,
    ETGFPGPFSFP                                    = 3,
    ETGFPGPFSFP                                    = 4

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFeatureSetEnumType
enum class ETGFProtoGoogleProtobufFeatureSetEnumType : uint8_t
{
    ETGFPGPFSET                                    = 0,
    ETGFPGPFSET                                    = 1,
    ETGFPGPFSET                                    = 2,
    ETGFPGPFSET                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFeatureSetRepeatedFieldEncoding
enum class ETGFProtoGoogleProtobufFeatureSetRepeatedFieldEncoding : uint8_t
{
    ETGFPGPFSRFE                                   = 0,
    ETGFPGPFSRFE                                   = 1,
    ETGFPGPFSRFE                                   = 2,
    ETGFPGPFSRFE                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFeatureSetUtf8Validation
enum class ETGFProtoGoogleProtobufFeatureSetUtf8Validation : uint8_t
{
    ETGFPGPFSU8V                                   = 0,
    ETGFPGPFSU8V                                   = 2,
    ETGFPGPFSU8V                                   = 3,
    ETGFPGPFSU8V                                   = 4

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFeatureSetMessageEncoding
enum class ETGFProtoGoogleProtobufFeatureSetMessageEncoding : uint8_t
{
    ETGFPGPFSME                                    = 0,
    ETGFPGPFSME                                    = 1,
    ETGFPGPFSME                                    = 2,
    ETGFPGPFSME                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufFeatureSetJsonFormat
enum class ETGFProtoGoogleProtobufFeatureSetJsonFormat : uint8_t
{
    ETGFPGPFSJF                                    = 0,
    ETGFPGPFSJF                                    = 1,
    ETGFPGPFSJF                                    = 2,
    ETGFPGPFSJF                                    = 3

};


// Enum  TGFBattleProtocol.ETGFProtoGoogleProtobufGeneratedCodeInfoAnnotationSemantic
enum class ETGFProtoGoogleProtobufGeneratedCodeInfoAnnotationSemantic : uint8_t
{
    ETGFPGPGCIAS                                   = 0,
    ETGFPGPGCIAS                                   = 1,
    ETGFPGPGCIAS                                   = 2,
    ETGFPGPGCIAS                                   = 3

};


// Enum  TGFBattleProtocol.ETGFProtoXrescodeXrescodeIndexType
enum class ETGFProtoXrescodeXrescodeIndexType : uint8_t
{
    ETGFPXXIT                                      = 0,
    ETGFPXXIT                                      = 1,
    ETGFPXXIT                                      = 2,
    ETGFPXXIT                                      = 3,
    ETGFPXXIT                                      = 4

};


// Enum  TGFBattleProtocol.ETGFProtoOrgXresloaderUeLoaderMode
enum class ETGFProtoOrgXresloaderUeLoaderMode : uint8_t
{
    ETGFPOXULM                                     = 0,
    ETGFPOXULM                                     = 1,
    ETGFPOXULM                                     = 2,
    ETGFPOXULM                                     = 3

};


// Enum  Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
    RTS                                            = 0,
    RTS                                            = 1,
    RTS                                            = 2,
    RTS                                            = 3,
    RTS                                            = 4

};


// Enum  Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
    KeepRelativeOffset                             = 0,
    KeepWorldPosition                              = 1,
    SnapToTarget                                   = 2,
    SnapToTargetIncludingScale                     = 3,
    EAttachLocation                                = 4

};


// Enum  Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    SnapToTarget                                   = 2,
    EAttachmentRule                                = 3

};


// Enum  Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    EDetachmentRule                                = 2

};


// Enum  Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
    Static                                         = 0,
    Stationary                                     = 1,
    Movable                                        = 2,
    EComponentMobility                             = 3

};


// Enum  Engine.EDetailMode
enum class EDetailMode : uint8_t
{
    DM                                             = 0,
    DM                                             = 1,
    DM                                             = 2,
    DM                                             = 3

};


// Enum  Text3D.EText3DBevelType
enum class EText3DBevelType : uint8_t
{
    Linear                                         = 0,
    HalfCircle                                     = 1,
    Convex                                         = 2,
    Concave                                        = 3,
    OneStep                                        = 4,
    TwoSteps                                       = 5,
    Engraved                                       = 6,
    EText3DBevelType                               = 7

};


// Enum  Text3D.EText3DHorizontalTextAlignment
enum class EText3DHorizontalTextAlignment : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    EText3DHorizontalTextAlignment                 = 3

};


// Enum  Text3D.EText3DVerticalTextAlignment
enum class EText3DVerticalTextAlignment : uint8_t
{
    FirstLine                                      = 0,
    Top                                            = 1,
    Center                                         = 2,
    Bottom                                         = 3,
    EText3DVerticalTextAlignment                   = 4

};


// Enum  Text3D.EText3DCharacterEffectOrder
enum class EText3DCharacterEffectOrder : uint8_t
{
    Normal                                         = 0,
    FromCenter                                     = 1,
    ToCenter                                       = 2,
    Opposite                                       = 3,
    EText3DCharacterEffectOrder                    = 4

};


// Enum  DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    UseProjectSettings                             = 2,
    EDLSSSettingOverride                           = 3

};


// Enum  DLSS.EDLSSPreset
enum class EDLSSPreset : uint8_t
{
    Default                                        = 0,
    A                                              = 1,
    B                                              = 2,
    C                                              = 3,
    D                                              = 4,
    E                                              = 5,
    F                                              = 6,
    G                                              = 7,
    EDLSSPreset                                    = 8

};


// Enum  DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8_t
{
    Supported                                      = 0,
    NotSupported                                   = 1,
    NotSupportedIncompatibleHardware               = 2,
    NotSupportedDriverOutOfDate                    = 3,
    NotSupportedOperatingSystemOutOfDate           = 4,
    NotSupportedByPlatformAtBuildTime              = 5,
    NotSupportedIncompatibleAPICaptureToolActive   = 6,
    UDLSSSupport                                   = 7

};


// Enum  DLSSBlueprint.UDLSSMode
enum class UDLSSMode : uint8_t
{
    Off                                            = 0,
    Auto                                           = 1,
    DLAA                                           = 2,
    UltraQuality                                   = 3,
    Quality                                        = 4,
    Balanced                                       = 5,
    Performance                                    = 6,
    UltraPerformance                               = 7,
    UDLSSMode                                      = 8

};


// Enum  KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EPlanarConstraint                              = 4

};


// Enum  KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8_t
{
    X                                              = 0,
    X                                              = 1,
    Y                                              = 2,
    Y                                              = 3,
    Z                                              = 4,
    Z                                              = 5,
    EBoneForwardAxis                               = 6

};


// Enum  KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8_t
{
    None                                           = 0,
    Spherical                                      = 1,
    Capsule                                        = 2,
    Planar                                         = 3,
    ECollisionLimitType                            = 4

};


// Enum  FSR2TemporalUpscaling.EFSR2QualityMode
enum class EFSR2QualityMode : uint8_t
{
    Unused                                         = 0,
    Quality                                        = 1,
    Balanced                                       = 2,
    Performance                                    = 3,
    UltraPerformance                               = 4,
    EFSR2QualityMode                               = 5

};


// Enum  FSR2TemporalUpscaling.EFSR2HistoryFormat
enum class EFSR2HistoryFormat : uint8_t
{
    FloatRGBA                                      = 0,
    FloatR11G11B10                                 = 1,
    EFSR2HistoryFormat                             = 2

};


// Enum  FSR2TemporalUpscaling.EFSR2DeDitherMode
enum class EFSR2DeDitherMode : uint8_t
{
    Off                                            = 0,
    Full                                           = 1,
    HairOnly                                       = 2,
    EFSR2DeDitherMode                              = 3

};


// Enum  FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
enum class EFSR2LandscapeHISMMode : uint8_t
{
    Off                                            = 0,
    AllStatic                                      = 1,
    StaticWPO                                      = 2,
    EFSR2LandscapeHISMMode                         = 3

};


// Enum  XeSSBlueprint.EXeSSQualityMode
enum class EXeSSQualityMode : uint8_t
{
    Off                                            = 0,
    Performance                                    = 1,
    Balanced                                       = 2,
    Quality                                        = 3,
    UltraQuality                                   = 4,
    EXeSSQualityMode                               = 5

};


// Enum  KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : uint8_t
{
    LeftBottom                                     = 0,
    RightTop                                       = 1,
    Floating                                       = 2,
    EChartAxisPosition                             = 3

};


// Enum  KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : uint8_t
{
    FixedScale                                     = 0,
    FixedRange                                     = 1,
    ECartesianScalingType                          = 2

};


// Enum  KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : uint8_t
{
    FixedValue                                     = 0,
    FitToData                                      = 1,
    FitToDataRounded                               = 2,
    ECartesianRangeBoundType                       = 3

};


// Enum  KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    EKantanDataPointSize                           = 3

};


// Enum  KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : uint8_t
{
    Vertical                                       = 0,
    Horizontal                                     = 1,
    EKantanBarChartOrientation                     = 2

};


// Enum  KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : uint8_t
{
    NoLabels                                       = 0,
    Standard                                       = 1,
    Overlaid                                       = 2,
    EKantanBarLabelPosition                        = 3

};


// Enum  KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : uint8_t
{
    NoValueLines                                   = 0,
    ZeroLineOnly                                   = 1,
    ZeroAndMaxLines                                = 2,
    EKantanBarValueExtents                         = 3

};


// Enum  AkAudio.EAkResult
enum class EAkResult : uint8_t
{
    NotImplemented                                 = 0,
    Success                                        = 1,
    Fail                                           = 2,
    PartialSuccess                                 = 3,
    NotCompatible                                  = 4,
    AlreadyConnected                               = 5,
    InvalidFile                                    = 7,
    AudioFileHeaderTooLarge                        = 8,
    MaxReached                                     = 9,
    InvalidID                                      = 14,
    IDNotFound                                     = 15,
    InvalidInstanceID                              = 16,
    NoMoreData                                     = 17,
    InvalidStateGroup                              = 20,
    ChildAlreadyHasAParent                         = 21,
    InvalidLanguage                                = 22,
    CannotAddItseflAsAChild                        = 23,
    InvalidParameter                               = 31,
    ElementAlreadyInList                           = 35,
    PathNotFound                                   = 36,
    PathNoVertices                                 = 37,
    PathNotRunning                                 = 38,
    PathNotPaused                                  = 39,
    PathNodeAlreadyInList                          = 40,
    PathNodeNotInList                              = 41,
    DataNeeded                                     = 43,
    NoDataNeeded                                   = 44,
    DataReady                                      = 45,
    NoDataReady                                    = 46,
    InsufficientMemory                             = 52,
    Cancelled                                      = 53,
    UnknownBankID                                  = 54,
    BankReadError                                  = 56,
    InvalidSwitchType                              = 57,
    FormatNotReady                                 = 63,
    WrongBankVersion                               = 64,
    FileNotFound                                   = 66,
    DeviceNotReady                                 = 67,
    BankAlreadyLoaded                              = 69,
    RenderedFX                                     = 71,
    ProcessNeeded                                  = 72,
    ProcessDone                                    = 73,
    MemManagerNotInitialized                       = 74,
    StreamMgrNotInitialized                        = 75,
    SSEInstructionsNotSupported                    = 76,
    Busy                                           = 77,
    UnsupportedChannelConfig                       = 78,
    PluginMediaNotAvailable                        = 79,
    MustBeVirtualized                              = 80,
    CommandTooLarge                                = 81,
    RejectedByFilter                               = 82,
    InvalidCustomPlatformName                      = 83,
    DLLCannotLoad                                  = 84,
    DLLPathNotFound                                = 85,
    NoJavaVM                                       = 86,
    OpenSLError                                    = 87,
    PluginNotRegistered                            = 88,
    DataAlignmentError                             = 89,
    EAkResult                                      = 90

};


// Enum  AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
    EndOfEvent                                     = 0,
    Marker                                         = 2,
    Duration                                       = 3,
    Starvation                                     = 5,
    MusicPlayStarted                               = 7,
    MusicSyncBeat                                  = 8,
    MusicSyncBar                                   = 9,
    MusicSyncEntry                                 = 10,
    MusicSyncExit                                  = 11,
    MusicSyncGrid                                  = 12,
    MusicSyncUserCue                               = 13,
    MusicSyncPoint                                 = 14,
    MIDIEvent                                      = 16,
    EAkCallbackType                                = 17

};


// Enum  AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
    AAudio                                         = 0,
    OpenSL                                         = 1,
    EAkAndroidAudioAPI                             = 2

};


// Enum  AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
    Ambient                                        = 0,
    SoloAmbient                                    = 1,
    PlayAndRecord                                  = 2,
    EAkAudioSessionCategory                        = 3

};


// Enum  AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
    MixWithOthers                                  = 0,
    DuckOthers                                     = 1,
    AllowBluetooth                                 = 2,
    DefaultToSpeaker                               = 3,
    EAkAudioSessionCategoryOptions                 = 4

};


// Enum  AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
    Default                                        = 0,
    VoiceChat                                      = 1,
    GameChat                                       = 2,
    VideoRecording                                 = 3,
    Measurement                                    = 4,
    MoviePlayback                                  = 5,
    VideoChat                                      = 6,
    EAkAudioSessionMode                            = 7

};


// Enum  AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
    Wall                                           = 0,
    Ceiling                                        = 1,
    Floor                                          = 2,
    EReflectionFilterBits                          = 3

};


// Enum  AkAudio.EAkAudioContext
enum class EAkAudioContext : uint8_t
{
    Foreign                                        = 0,
    GameplayAudio                                  = 1,
    EditorAudio                                    = 2,
    AlwaysActive                                   = 3,
    EAkAudioContext                                = 4

};


// Enum  AkAudio.PanningRule
enum class PanningRule : uint8_t
{
    PanningRule                                    = 0,
    PanningRule                                    = 1,
    PanningRule                                    = 2

};


// Enum  AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8_t
{
    Closed                                         = 0,
    Open                                           = 1,
    AkAcousticPortalState                          = 2

};


// Enum  AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8_t
{
    Ak                                             = 0,
    Ak                                             = 1,
    Ak                                             = 2,
    Ak                                             = 3,
    AK                                             = 4,
    Ak                                             = 5,
    Ak                                             = 6,
    Ak                                             = 7,
    Ak                                             = 8,
    Ak                                             = 9,
    Ak                                             = 10,
    Ak                                             = 11,
    Ak                                             = 12,
    Ak                                             = 13,
    Ak                                             = 14,
    Ak                                             = 15,
    Ak                                             = 16,
    Ak                                             = 17,
    Ak                                             = 18,
    Ak                                             = 19,
    Ak                                             = 20,
    Ak                                             = 21,
    Ak                                             = 22,
    Ak                                             = 23,
    Ak                                             = 24,
    Ak                                             = 25,
    Ak                                             = 26,
    AkChannelConfiguration                         = 27

};


// Enum  AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : uint8_t
{
    Ak                                             = 1,
    Ak                                             = 2,
    Ak                                             = 4,
    Ak                                             = 8,
    Ak                                             = 16,
    Ak                                             = 32,
    Ak                                             = 256,
    Ak                                             = 512,
    Ak                                             = 1024,
    Ak                                             = 2048,
    Ak                                             = 4096,
    Ak                                             = 8192,
    Ak                                             = 16384,
    Ak                                             = 32768,
    Ak                                             = 65536,
    Ak                                             = 131072,
    Ak                                             = 131073

};


// Enum  AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8_t
{
    SingleSource                                   = 0,
    MultiSources                                   = 1,
    MultiDirections                                = 2,
    AkMultiPositionType                            = 3

};


// Enum  AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8_t
{
    Stop                                           = 0,
    Pause                                          = 1,
    Resume                                         = 2,
    Break                                          = 3,
    ReleaseEnvelope                                = 4,
    AkActionOnEventType                            = 5

};


// Enum  AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
    Log3                                           = 0,
    Sine                                           = 1,
    Log1                                           = 2,
    InvSCurve                                      = 3,
    Linear                                         = 4,
    SCurve                                         = 5,
    Exp1                                           = 6,
    SineRecip                                      = 7,
    Exp3                                           = 8,
    LastFadeCurve                                  = 8,
    Constant                                       = 9,
    EAkCurveInterpolation                          = 10

};


// Enum  AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
    Default                                        = 0,
    Global                                         = 1,
    GameObject                                     = 2,
    PlayingID                                      = 3,
    Unavailable                                    = 4,
    ERTPCValueType                                 = 5

};


// Enum  AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
    AkMidiEventTypeInvalid                         = 0,
    AkMidiEventTypeNoteOff                         = 128,
    AkMidiEventTypeNoteOn                          = 144,
    AkMidiEventTypeNoteAftertouch                  = 160,
    AkMidiEventTypeController                      = 176,
    AkMidiEventTypeProgramChange                   = 192,
    AkMidiEventTypeChannelAftertouch               = 208,
    AkMidiEventTypePitchBend                       = 224,
    AkMidiEventTypeSysex                           = 240,
    AkMidiEventTypeEscape                          = 247,
    AkMidiEventTypeMeta                            = 255,
    EAkMidiEventType                               = 256

};


// Enum  AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
    AkMidiCcBankSelectCoarse                       = 0,
    AkMidiCcModWheelCoarse                         = 1,
    AkMidiCcBreathCtrlCoarse                       = 2,
    AkMidiCcCtrl3Coarse                            = 3,
    AkMidiCcFootPedalCoarse                        = 4,
    AkMidiCcPortamentoCoarse                       = 5,
    AkMidiCcDataEntryCoarse                        = 6,
    AkMidiCcVolumeCoarse                           = 7,
    AkMidiCcBalanceCoarse                          = 8,
    AkMidiCcCtrl9Coarse                            = 9,
    AkMidiCcPanPositionCoarse                      = 10,
    AkMidiCcExpressionCoarse                       = 11,
    AkMidiCcEffectCtrl1Coarse                      = 12,
    AkMidiCcEffectCtrl2Coarse                      = 13,
    AkMidiCcCtrl14Coarse                           = 14,
    AkMidiCcCtrl15Coarse                           = 15,
    AkMidiCcGenSlider1                             = 16,
    AkMidiCcGenSlider2                             = 17,
    AkMidiCcGenSlider3                             = 18,
    AkMidiCcGenSlider4                             = 19,
    AkMidiCcCtrl20Coarse                           = 20,
    AkMidiCcCtrl21Coarse                           = 21,
    AkMidiCcCtrl22Coarse                           = 22,
    AkMidiCcCtrl23Coarse                           = 23,
    AkMidiCcCtrl24Coarse                           = 24,
    AkMidiCcCtrl25Coarse                           = 25,
    AkMidiCcCtrl26Coarse                           = 26,
    AkMidiCcCtrl27Coarse                           = 27,
    AkMidiCcCtrl28Coarse                           = 28,
    AkMidiCcCtrl29Coarse                           = 29,
    AkMidiCcCtrl30Coarse                           = 30,
    AkMidiCcCtrl31Coarse                           = 31,
    AkMidiCcBankSelectFine                         = 32,
    AkMidiCcModWheelFine                           = 33,
    AkMidiCcBreathCtrlFine                         = 34,
    AkMidiCcCtrl3Fine                              = 35,
    AkMidiCcFootPedalFine                          = 36,
    AkMidiCcPortamentoFine                         = 37,
    AkMidiCcDataEntryFine                          = 38,
    AkMidiCcVolumeFine                             = 39,
    AkMidiCcBalanceFine                            = 40,
    AkMidiCcCtrl9Fine                              = 41,
    AkMidiCcPanPositionFine                        = 42,
    AkMidiCcExpressionFine                         = 43,
    AkMidiCcEffectCtrl1Fine                        = 44,
    AkMidiCcEffectCtrl2Fine                        = 45,
    AkMidiCcCtrl14Fine                             = 46,
    AkMidiCcCtrl15Fine                             = 47,
    AkMidiCcCtrl20Fine                             = 52,
    AkMidiCcCtrl21Fine                             = 53,
    AkMidiCcCtrl22Fine                             = 54,
    AkMidiCcCtrl23Fine                             = 55,
    AkMidiCcCtrl24Fine                             = 56,
    AkMidiCcCtrl25Fine                             = 57,
    AkMidiCcCtrl26Fine                             = 58,
    AkMidiCcCtrl27Fine                             = 59,
    AkMidiCcCtrl28Fine                             = 60,
    AkMidiCcCtrl29Fine                             = 61,
    AkMidiCcCtrl30Fine                             = 62,
    AkMidiCcCtrl31Fine                             = 63,
    AkMidiCcHoldPedal                              = 64,
    AkMidiCcPortamentoOnOff                        = 65,
    AkMidiCcSustenutoPedal                         = 66,
    AkMidiCcSoftPedal                              = 67,
    AkMidiCcLegatoPedal                            = 68,
    AkMidiCcHoldPedal2                             = 69,
    AkMidiCcSoundVariation                         = 70,
    AkMidiCcSoundTimbre                            = 71,
    AkMidiCcSoundReleaseTime                       = 72,
    AkMidiCcSoundAttackTime                        = 73,
    AkMidiCcSoundBrightness                        = 74,
    AkMidiCcSoundCtrl6                             = 75,
    AkMidiCcSoundCtrl7                             = 76,
    AkMidiCcSoundCtrl8                             = 77,
    AkMidiCcSoundCtrl9                             = 78,
    AkMidiCcSoundCtrl10                            = 79,
    AkMidiCcGeneralButton1                         = 80,
    AkMidiCcGeneralButton2                         = 81,
    AkMidiCcGeneralButton3                         = 82,
    AkMidiCcGeneralButton4                         = 83,
    AkMidiCcReverbLevel                            = 91,
    AkMidiCcTremoloLevel                           = 92,
    AkMidiCcChorusLevel                            = 93,
    AkMidiCcCelesteLevel                           = 94,
    AkMidiCcPhaserLevel                            = 95,
    AkMidiCcDataButtonP1                           = 96,
    AkMidiCcDataButtonM1                           = 97,
    AkMidiCcNonRegisterCoarse                      = 98,
    AkMidiCcNonRegisterFine                        = 99,
    AkMidiCcAllSoundOff                            = 120,
    AkMidiCcAllControllersOff                      = 121,
    AkMidiCcLocalKeyboard                          = 122,
    AkMidiCcAllNotesOff                            = 123,
    AkMidiCcOmniModeOff                            = 124,
    AkMidiCcOmniModeOn                             = 125,
    AkMidiCcOmniMonophonicOn                       = 126,
    AkMidiCcOmniPolyphonicOn                       = 127,
    EAkMidiCcValues                                = 128

};


// Enum  AkAudio.AkCodecId
enum class AkCodecId : uint8_t
{
    None                                           = 0,
    PCM                                            = 1,
    ADPCM                                          = 2,
    XMA                                            = 3,
    Vorbis                                         = 4,
    ATRAC9                                         = 12,
    OpusNX                                         = 17,
    AkOpus                                         = 19,
    AkOpusWEM                                      = 20,
    AkCodecId                                      = 21

};


// Enum  AkAudio.AkMeshType
enum class AkMeshType : uint8_t
{
    StaticMesh                                     = 0,
    CollisionMesh                                  = 1,
    AkMeshType                                     = 2

};


// Enum  AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
    Speakers                                       = 0,
    Headphones                                     = 1,
    EAkPanningRule                                 = 2

};


// Enum  AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
    Anonymous                                      = 0,
    Standard                                       = 1,
    Ambisonic                                      = 2,
    EAkChannelConfigType                           = 3

};


// Enum  AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
    FrontLeft                                      = 0,
    FrontRight                                     = 1,
    FrontCenter                                    = 2,
    LowFrequency                                   = 3,
    BackLeft                                       = 4,
    BackRight                                      = 5,
    BackCenter                                     = 8,
    SideLeft                                       = 9,
    SideRight                                      = 10,
    Top                                            = 11,
    HeightFrontLeft                                = 12,
    HeightFrontCenter                              = 13,
    HeightFrontRight                               = 14,
    HeightBackLeft                                 = 15,
    HeightBackCenter                               = 16,
    HeightBackRight                                = 17,
    EAkChannelMask                                 = 18

};


// Enum  AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
    Socket                                         = 0,
    HTCS                                           = 1,
    EAkCommSystem                                  = 2

};


// Enum  AkAudio.EAkCollisionChannel
enum class EAkCollisionChannel : uint8_t
{
    EAKCC                                          = 0,
    EAKCC                                          = 1,
    EAKCC                                          = 2,
    EAKCC                                          = 3,
    EAKCC                                          = 4,
    EAKCC                                          = 5,
    EAKCC                                          = 6,
    EAKCC                                          = 7,
    EAKCC                                          = 8,
    EAKCC                                          = 9

};


// Enum  AkAudio.EAkUnrealAudioRouting
enum class EAkUnrealAudioRouting : uint8_t
{
    Custom                                         = 0,
    Separate                                       = 1,
    AudioLink                                      = 2,
    AudioMixer                                     = 3,
    EnableWwiseOnly                                = 4,
    EnableUnrealOnly                               = 5,
    EAkUnrealAudioRouting                          = 6

};


// Enum  AkAudio.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : uint8_t
{
    OrientedBox                                    = 0,
    AlignedBox                                     = 1,
    ConvexPolyhedron                               = 2,
    EAkFitToGeometryMode                           = 3

};


// Enum  WwiseFileHandler.EWwiseLanguageRequirement
enum class EWwiseLanguageRequirement : uint8_t
{
    IsDefault                                      = 0,
    IsOptional                                     = 1,
    SFX                                            = 2,
    EWwiseLanguageRequirement                      = 3

};


// Enum  WwiseFileHandler.EWwiseSoundBankType
enum class EWwiseSoundBankType : uint8_t
{
    User                                           = 0,
    Event                                          = 30,
    Bus                                            = 31,
    EWwiseSoundBankType                            = 32

};


// Enum  WwiseResourceLoader.EWwiseEventDestroyOptions
enum class EWwiseEventDestroyOptions : uint8_t
{
    StopEventOnDestroy                             = 0,
    WaitForEventEnd                                = 1,
    EWwiseEventDestroyOptions                      = 2

};


// Enum  WwiseResourceLoader.EWwiseEventSwitchContainerLoading
enum class EWwiseEventSwitchContainerLoading : uint8_t
{
    AlwaysLoad                                     = 0,
    LoadOnReference                                = 1,
    EWwiseEventSwitchContainerLoading              = 2

};


// Enum  WwiseResourceLoader.EWwiseGroupType
enum class EWwiseGroupType : uint8_t
{
    Switch                                         = 0,
    State                                          = 1,
    Unknown                                        = 255,
    EWwiseGroupType                                = 256

};


// Enum  WwiseResourceLoader.EWwiseReloadLanguage
enum class EWwiseReloadLanguage : uint8_t
{
    Manual                                         = 0,
    Immediate                                      = 1,
    Safe                                           = 2,
    EWwiseReloadLanguage                           = 3

};


// Enum  StreamlineBlueprint.UStreamlineFeature
enum class UStreamlineFeature : uint8_t
{
    DLSSG                                          = 0,
    Reflex                                         = 1,
    DeepDVC                                        = 2,
    Count                                          = 3,
    UStreamlineFeature                             = 4

};


// Enum  StreamlineBlueprint.UStreamlineFeatureSupport
enum class UStreamlineFeatureSupport : uint8_t
{
    Supported                                      = 0,
    NotSupported                                   = 1,
    NotSupportedIncompatibleHardware               = 2,
    NotSupportedDriverOutOfDate                    = 3,
    NotSupportedOperatingSystemOutOfDate           = 4,
    NotSupportedHardewareSchedulingDisabled        = 5,
    NotSupportedByRHI                              = 6,
    NotSupportedByPlatformAtBuildTime              = 7,
    NotSupportedIncompatibleAPICaptureToolActive   = 8,
    UStreamlineFeatureSupport                      = 9

};


// Enum  StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
enum class UStreamlineFeatureRequirementsFlags : uint8_t
{
    None                                           = 0,
    D3D11Supported                                 = 1,
    D3D12Supported                                 = 2,
    VulkanSupported                                = 4,
    VSyncOffRequired                               = 8,
    HardwareSchedulingRequired                     = 16,
    UStreamlineFeatureRequirementsFlags            = 17

};


// Enum  StreamlineBlueprint.UStreamlineDLSSGMode
enum class UStreamlineDLSSGMode : uint8_t
{
    Off                                            = 0,
    On                                             = 1,
    Auto                                           = 2,
    UStreamlineDLSSGMode                           = 3

};


// Enum  StreamlineBlueprint.UStreamlineReflexMode
enum class UStreamlineReflexMode : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    EnabledPlusBoost                               = 3,
    UStreamlineReflexMode                          = 4

};


// Enum  StreamlineRHI.EStreamlineSettingOverride
enum class EStreamlineSettingOverride : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    UseProjectSettings                             = 2,
    EStreamlineSettingOverride                     = 3

};


// Enum  EasyFileDialog.EEasyFileDialogFlags
enum class EEasyFileDialogFlags : uint8_t
{
    Single                                         = 0,
    Multiple                                       = 1,
    EEasyFileDialogFlags                           = 2

};


// Enum  INTLCore.EINTLAccountType
enum class EINTLAccountType : uint8_t
{
    kINTLAccountTypeNone                           = 0,
    kINTLAccountTypeEmail                          = 1,
    kINTLAccountTypeMobilePhone                    = 2,
    EINTLAccountType                               = 3

};


// Enum  INTLCore.EVerifyCodeType
enum class EVerifyCodeType : uint8_t
{
    kVerifyCodeTypeRegister                        = 0,
    kVerifyCodeTypeResetPassword                   = 1,
    kVerifyCodeTypeRegisterThenLogin               = 2,
    kVerifyCodeTypeModifyAccount                   = 3,
    kVerifyCodeTypeUnBindLI                        = 4,
    kVerifyCodeTypeUnbindThirdChannel              = 5,
    EVerifyCodeType                                = 6

};


// Enum  INTLCore.EINTLLoginChannel
enum class EINTLLoginChannel : uint8_t
{
    kChannelDefault                                = 0,
    kChannelW                                      = 1,
    kChannelQ                                      = 2,
    kChannelGuest                                  = 3,
    kChannelFacebook                               = 4,
    kChannelGameCenter                             = 5,
    kChannelGoogle                                 = 6,
    kChannelIEGPassport                            = 7,
    kChannelFirebase                               = 8,
    kChannelTwitter                                = 9,
    kChannelGarena                                 = 10,
    kChannelCustomAccount                          = 11,
    kChannelEGame                                  = 12,
    kChannelSwitch                                 = 13,
    kChannelLine                                   = 14,
    kChannelApple                                  = 15,
    kChannelVK                                     = 19,
    kChannelXbox                                   = 20,
    kChannelSteam                                  = 21,
    kChannelPS4                                    = 22,
    kChannelEpic                                   = 24,
    kChannelDiscord                                = 26,
    kChannelPS5                                    = 27,
    kChannelDmm                                    = 30,
    kChannelSquareEnix                             = 32,
    kChannelSupercell                              = 33,
    kChannelAppsFlyer                              = 34,
    kChannelKaKao                                  = 35,
    kChannelUbisoft                                = 37,
    kChannelVNG                                    = 38,
    kChannelGooglePGS                              = 39,
    kChannelEA                                     = 40,
    kChannelNintendo                               = 41,
    kChannelLevelInfinite                          = 131,
    EINTLLoginChannel                              = 132

};


// Enum  INTLCore.EComplianceAgeStatus
enum class EComplianceAgeStatus : uint8_t
{
    kMinor                                         = 0,
    kUnknown                                       = 1,
    kAdult                                         = 2,
    kBelowGrade                                    = 3,
    EComplianceAgeStatus                           = 4

};


// Enum  INTLCore.EComplianceAgreeStatus
enum class EComplianceAgreeStatus : uint8_t
{
    kDeny                                          = 0,
    kUnknown                                       = 1,
    kAgree                                         = 2,
    EComplianceAgreeStatus                         = 3

};


// Enum  INTLCore.EComplianceParentCertificateStatus
enum class EComplianceParentCertificateStatus : uint8_t
{
    kDeny                                          = 0,
    kUnknown                                       = 1,
    kAgree                                         = 2,
    EComplianceParentCertificateStatus             = 3

};


// Enum  INTLCore.EPermissionType
enum class EPermissionType : uint8_t
{
    kPermissionTypeNone                            = 0,
    kPermissionTypeCamera                          = 1,
    kPermissionTypePhoto                           = 2,
    kPermissionTypeMicrophone                      = 3,
    kPermissionTypeLocation                        = 4,
    kPermissionTypeBluetooth                       = 5,
    kPermissionTypeCalendar                        = 6,
    kPermissionTypeRemind                          = 7,
    kPermissionTypeContacts                        = 8,
    kPermissionTypeTrack                           = 99,
    kPermissionTypeCameraAndroid                   = 101,
    kPermissionTypeReadPhoneState                  = 102,
    kPermissionTypeRecordAudio                     = 103,
    kPermissionTypeReadExternalStorage             = 104,
    kPermissionTypeWriteExternalStorage            = 105,
    kPermissionTypeAccessBackgroundLocation        = 106,
    kPermissionTypeAccessCoarseLocation            = 107,
    kPermissionTypeAccessFineLocation              = 108,
    kPermissionTypeAccessMediaLoaction             = 109,
    kPermissionTypeReadCalendar                    = 110,
    kPermissionTypeWriteCalendar                   = 111,
    kPermissionTypeBluetoothAdvertise              = 112,
    kPermissionTypeBluetoothConnect                = 113,
    kPermissionTypeBluetoothScan                   = 114,
    kPermissionTypeBodySensors                     = 115,
    kPermissionTypeBodySensorsBackground           = 116,
    kPermissionTypeCallPhone                       = 117,
    kPermissionTypeReadCallLog                     = 118,
    kPermissionTypeReadContacts                    = 119,
    kPermissionTypeWriteContacts                   = 120,
    kPermissionTypeWriteCallLog                    = 121,
    kPermissionTypeAddVoicemail                    = 122,
    kPermissionTypeAnswerPhoneCalls                = 123,
    kPermissionTypeGetAccounts                     = 124,
    kPermissionTypeNearbyWifyDevices               = 125,
    kPermissionTypePostNotifications               = 126,
    kPermissionTypeProcessOutgoingCalls            = 127,
    kPermissionTypeReadMediaAudio                  = 128,
    kPermissionTypeReadMediaImages                 = 129,
    kPermissionTypeReadMediaVideo                  = 130,
    kPermissionTypeReadPhoneNumbers                = 131,
    kPermissionTypeReadSMS                         = 132,
    kPermissionTypeReveiveMMS                      = 133,
    kPermissionTypeRceiveSMS                       = 134,
    kPermissionTypeReceiveWapPush                  = 135,
    kPermissionTypeSendSMS                         = 136,
    kPermissionTypeUseSIP                          = 137,
    kPermissionTypeUWBRanging                      = 138,
    kPermissionTypeActivityRecognition             = 139,
    kPermissionTypeAcceptHandover                  = 140,
    EPermissionType                                = 141

};


// Enum  INTLCore.EINTLFriendReqType
enum class EINTLFriendReqType : uint8_t
{
    kReqText                                       = 0,
    kReqLink                                       = 1,
    kReqImage                                      = 2,
    kReqInvite                                     = 3,
    kReqVideo                                      = 4,
    EINTLFriendReqType                             = 5

};


// Enum  INTLCore.EINTLWebViewOrientation
enum class EINTLWebViewOrientation : uint8_t
{
    kAuto                                          = 0,
    kPortrait                                      = 1,
    kLandscape                                     = 2,
    EINTLWebViewOrientation                        = 3

};


// Enum  INTLCore.EINTLCrashLevel
enum class EINTLCrashLevel : uint8_t
{
    LogLevelZero                                   = 0,
    EINTLCrashLevel                                = 1

};


// Enum  INTLCore.EINTLUpdateNewVersionType
enum class EINTLUpdateNewVersionType : uint8_t
{
    kUnknown                                       = 0,
    kNoNeedUpdate                                  = 1,
    kOptionalUpdate                                = 2,
    kForcibleUpdate                                = 3,
    EINTLUpdateNewVersionType                      = 4

};


// Enum  INTLCore.EINTLUpdateActionType
enum class EINTLUpdateActionType : uint8_t
{
    kUnknown                                       = 0,
    kAppUpdate                                     = 1,
    kResourceUpdate                                = 2,
    kResourceRepair                                = 3,
    EINTLUpdateActionType                          = 4

};


// Enum  INTLCore.EINTLUpdateResourceCopyType
enum class EINTLUpdateResourceCopyType : uint8_t
{
    kUnknown                                       = 0,
    kCopyAll                                       = 1,
    kCopyOnDemand                                  = 2,
    EINTLUpdateResourceCopyType                    = 3

};


// Enum  INTLCore.EINTLUpdateStep
enum class EINTLUpdateStep : uint8_t
{
    kUnknown                                       = 0,
    kFirstResourceAnalyze                          = 1,
    kCheckUpdate                                   = 2,
    kDownload                                      = 3,
    EINTLUpdateStep                                = 4

};


// Enum  INTLCore.EPGNAModule
enum class EPGNAModule : uint8_t
{
    kPGNAModuleUnknow                              = 0,
    kPGNAModuleDialTest                            = 1,
    kPGNAModuleAccelerator                         = 2,
    kPGNAModuleAll                                 = 3,
    EPGNAModule                                    = 4

};


// Enum  INTLCore.FINTLFunnelStep
enum class FINTLFunnelStep : uint8_t
{
    kStartAppLaunch                                = 0,
    kAgreementShowUserAgreement                    = 1,
    kAgreementFinishUserAgreement                  = 2,
    kUpdateCheckForUpdates                         = 3,
    kUpdateDownloadUpdates                         = 4,
    kUpdateUnzipFiles                              = 5,
    kUpdateCompleteUpdates                         = 6,
    kAuthConfirmLoginChannel                       = 7,
    kAuthChannelAuthSuccess                        = 8,
    kAuthLoginAuthSuccess                          = 9,
    kPolicyQueryCompliance                         = 10,
    kPolicySelectRegionAndAge                      = 11,
    kPolicyAgreePrivacyPolicy                      = 12,
    kPolicyPrivacyAuthSucess                       = 13,
    kNavigateShowServerList                        = 14,
    kNavigateSubmitArea                            = 15,
    kNavigateConfirmArea                           = 16,
    kNavigateConnectSvrSuccess                     = 17,
    kEnterGameShowEnterGame                        = 18,
    kEnterGameClickIntoGame                        = 19,
    kLobbyEnterLobbySuccess                        = 20,
    kPayAuthentication                             = 21,
    kPayPullUpTheListOfGoods                       = 22,
    kPayPullUpPriceList                            = 23,
    kPayStartOrder                                 = 24,
    kPaySuccessfulOrder                            = 25,
    kPayStartPayment                               = 26,
    kPaySuccessfulPayment                          = 27,
    kPayStartDelivery                              = 28,
    kPaySuccessfulDelivery                         = 29,
    kAuthRegisterSuccess                           = 30,
    FINTLFunnelStep                                = 31

};


// Enum  INTLCore.FINTLConsentStatus
enum class FINTLConsentStatus : uint8_t
{
    kConsentStatusDenied                           = 0,
    kConsentStatusGranted                          = 1,
    FINTLConsentStatus                             = 2

};


// Enum  LevelInfinite.ELIEventType
enum class ELIEventType : uint8_t
{
    DEFAULT                                        = 0,
    INTL                                           = 1,
    GN                                             = 2,
    GN                                             = 3,
    LOGIN                                          = 4,
    LOGIN                                          = 5,
    ACCOUNT                                        = 6,
    ACCOUNT                                        = 7,
    SET                                            = 8,
    COMPLIANCE                                     = 9,
    COMPLIANCE                                     = 10,
    CLOSE                                          = 11,
    CLOSE                                          = 12,
    CLOSE                                          = 13,
    CLOSE                                          = 14,
    CONSOLE                                        = 15,
    DELETE                                         = 16,
    DELETE                                         = 17,
    DELETE                                         = 18,
    ELIEventType                                   = 19

};


// Enum  LevelInfinite.LILogicSchemeType
enum class LILogicSchemeType : uint8_t
{
    None                                           = 0,
    Console                                        = 1,
    Mobile                                         = 2,
    LILogicSchemeType                              = 3

};


// Enum  Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
    None                                           = 0,
    Use2DPhysics                                   = 1,
    Use3DPhysics                                   = 2,
    ESpriteCollisionMode                           = 3

};


// Enum  Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
    Box                                            = 0,
    Circle                                         = 1,
    Polygon                                        = 2,
    ESpriteShapeType                               = 3

};


// Enum  Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
    SourceBoundingBox                              = 0,
    TightBoundingBox                               = 1,
    ShrinkWrapped                                  = 2,
    FullyCustom                                    = 3,
    Diced                                          = 4,
    ESpritePolygonMode                             = 5

};


// Enum  Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
    Top                                            = 0,
    Top                                            = 1,
    Top                                            = 2,
    Center                                         = 3,
    Center                                         = 4,
    Center                                         = 5,
    Bottom                                         = 6,
    Bottom                                         = 7,
    Bottom                                         = 8,
    Custom                                         = 9,
    ESpritePivotMode                               = 10

};


// Enum  Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
    NoCollision                                    = 0,
    FirstFrameCollision                            = 1,
    EachFrameCollision                             = 2,
    EFlipbookCollisionMode                         = 3

};


// Enum  Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
    DilateBorder                                   = 0,
    PadWithZero                                    = 1,
    EPaperSpriteAtlasPadding                       = 2

};


// Enum  Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
    Orthogonal                                     = 0,
    IsometricDiamond                               = 1,
    IsometricStaggered                             = 2,
    HexagonalStaggered                             = 3,
    ETileMapProjectionMode                         = 4

};


// Enum  PzRobot.RobotStatus
enum class RobotStatus : uint8_t
{
    ST                                             = 0,
    ST                                             = 1,
    ST                                             = 2,
    ST                                             = 3,
    ST                                             = 4,
    ST                                             = 5,
    ST                                             = 6,
    ST                                             = 7,
    ST                                             = 8,
    ST                                             = 9,
    ST                                             = 10,
    ST                                             = 11,
    ST                                             = 12,
    ST                                             = 13,
    ST                                             = 14,
    ST                                             = 15,
    ST                                             = 16,
    ST                                             = 17,
    ST                                             = 18,
    ST                                             = 19,
    ST                                             = 20,
    ST                                             = 21,
    ST                                             = 22,
    ST                                             = 23

};


// Enum  TencentGME.UTencentGME
enum class UTencentGME : uint8_t
{
    UTencentGME                                    = 0,
    UTencentGME                                    = 1,
    UTencentGME                                    = 2

};


// Enum  TencentGME.UTencentGME
enum class UTencentGME : uint8_t
{
    UTencentGME                                    = 0,
    UTencentGME                                    = 1,
    UTencentGME                                    = 2,
    UTencentGME                                    = 3

};


// Enum  TencentGME.UTencentGME
enum class UTencentGME : uint8_t
{
    UTencentGME                                    = 0,
    UTencentGME                                    = 1,
    UTencentGME                                    = 2,
    UTencentGME                                    = 3,
    UTencentGME                                    = 4

};


// Enum  TencentGME.UTencentGME
enum class UTencentGME : uint8_t
{
    UTencentGME                                    = 0,
    UTencentGME                                    = 1,
    UTencentGME                                    = 2,
    UTencentGME                                    = 3,
    UTencentGME                                    = 4,
    UTencentGME                                    = 5

};


// Enum  TencentGME.UTencentGME
enum class UTencentGME : uint8_t
{
    UTencentGME                                    = 0,
    UTencentGME                                    = 101,
    UTencentGME                                    = 102,
    UTencentGME                                    = 103,
    UTencentGME                                    = 104,
    UTencentGME                                    = 105,
    UTencentGME                                    = 106,
    UTencentGME                                    = 107,
    UTencentGME                                    = 108,
    UTencentGME                                    = 109

};


// Enum  ControlRigSpline.ESplineType
enum class ESplineType : uint8_t
{
    BSpline                                        = 0,
    Hermite                                        = 1,
    Max                                            = 2

};


// Enum  IKRig.ERetargetTranslationMode
enum class ERetargetTranslationMode : uint8_t
{
    None                                           = 0,
    GloballyScaled                                 = 1,
    Absolute                                       = 2,
    ERetargetTranslationMode                       = 3

};


// Enum  IKRig.ERetargetRotationMode
enum class ERetargetRotationMode : uint8_t
{
    Interpolated                                   = 0,
    OneToOne                                       = 1,
    OneToOneReversed                               = 2,
    None                                           = 3,
    ERetargetRotationMode                          = 4

};


// Enum  IKRig.EBasicAxis
enum class EBasicAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    NegX                                           = 3,
    NegY                                           = 4,
    NegZ                                           = 5,
    EBasicAxis                                     = 6

};


// Enum  IKRig.EWarpingDirectionSource
enum class EWarpingDirectionSource : uint8_t
{
    Goals                                          = 0,
    Chain                                          = 1,
    EWarpingDirectionSource                        = 2

};


// Enum  IKRig.EIKRigGoalSpace
enum class EIKRigGoalSpace : uint8_t
{
    Component                                      = 0,
    Additive                                       = 1,
    World                                          = 2,
    EIKRigGoalSpace                                = 3

};


// Enum  IKRig.EIKRigGoalTransformSource
enum class EIKRigGoalTransformSource : uint8_t
{
    Manual                                         = 0,
    Bone                                           = 1,
    ActorComponent                                 = 2,
    EIKRigGoalTransformSource                      = 3

};


// Enum  FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8_t
{
    Free                                           = 0,
    Limit                                          = 1,
    Locked                                         = 2,
    EFBIKBoneLimitType                             = 3

};


// Enum  FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8_t
{
    Direction                                      = 0,
    Location                                       = 1,
    EPoleVectorOption                              = 2

};


// Enum  PBIK.EPBIKLimitType
enum class EPBIKLimitType : uint8_t
{
    Free                                           = 0,
    Limited                                        = 1,
    Locked                                         = 2,
    EPBIKLimitType                                 = 3

};


// Enum  PBIK.EPBIKRootBehavior
enum class EPBIKRootBehavior : uint8_t
{
    PrePull                                        = 0,
    PinToInput                                     = 1,
    Free                                           = 2,
    EPBIKRootBehavior                              = 3

};


// Enum  GameplayCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
    SineWave                                       = 0,
    PerlinNoise                                    = 1,
    EOscillatorWaveform                            = 2

};


// Enum  GameplayCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
    EOO                                            = 0,
    EOO                                            = 1,
    EOO                                            = 2

};


// Enum  GameplayCameras.ECameraAnimationPlaySpace
enum class ECameraAnimationPlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraAnimationPlaySpace                      = 3

};


// Enum  GameplayCameras.ECameraAnimationEasingType
enum class ECameraAnimationEasingType : uint8_t
{
    Linear                                         = 0,
    Sinusoidal                                     = 1,
    Quadratic                                      = 2,
    Cubic                                          = 3,
    Quartic                                        = 4,
    Quintic                                        = 5,
    Exponential                                    = 6,
    Circular                                       = 7,
    ECameraAnimationEasingType                     = 8

};


// Enum  GameplayCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
    Random                                         = 0,
    Zero                                           = 1,
    Fixed                                          = 2,
    EInitialWaveOscillatorOffsetType               = 3

};


// Enum  TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8_t
{
    FloatProperty                                  = 0,
    TransformPropertyLocationOnly                  = 1,
    TransformPropertyRotationOnly                  = 2,
    ETemplateSectionPropertyScaleType              = 3

};


// Enum  OodleNetworkHandlerComponent.EOodleNetworkEnableMode
enum class EOodleNetworkEnableMode : uint8_t
{
    AlwaysEnabled                                  = 0,
    WhenCompressedPacketReceived                   = 1,
    EOodleNetworkEnableMode                        = 2

};


// Enum  OodleNetworkHandlerComponent.EOodleNetResult
enum class EOodleNetResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    OodleDecodeFailed                              = 2,
    OodleSerializePayloadFail                      = 3,
    OodleBadDecompressedLength                     = 4,
    OodleNoDictionary                              = 5,
    EOodleNetResult                                = 6

};


// Enum  DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
    Rectangle                                      = 0,
    Disc                                           = 1,
    Sphere                                         = 2,
    Cylinder                                       = 3,
    None                                           = 4,
    EDatasmithAreaLightActorShape                  = 5

};


// Enum  DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
    Point                                          = 0,
    Spot                                           = 1,
    Rect                                           = 2,
    EDatasmithAreaLightActorType                   = 3

};


// Enum  DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
    Current                                        = 0,
    All                                            = 1,
    EDatasmithImportSearchPackagePolicy            = 2

};


// Enum  DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
    Replace                                        = 0,
    Update                                         = 1,
    Use                                            = 2,
    Ignore                                         = 3,
    EDatasmithImportAssetConflictPolicy            = 4

};


// Enum  DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
    Update                                         = 0,
    Full                                           = 1,
    Ignore                                         = 2,
    EDatasmithImportActorPolicy                    = 3

};


// Enum  DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
    UseNoFresnelCurves                             = 0,
    UseSimplifierFresnelCurves                     = 1,
    UseRealFresnelCurves                           = 2,
    EDatasmithImportMaterialQuality                = 3

};


// Enum  DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
    LIGHTMAP                                       = 0,
    LIGHTMAP                                       = 1,
    LIGHTMAP                                       = 2,
    LIGHTMAP                                       = 3,
    LIGHTMAP                                       = 4,
    LIGHTMAP                                       = 5,
    LIGHTMAP                                       = 6

};


// Enum  DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
    LIGHTMAP                                       = 0,
    LIGHTMAP                                       = 1,
    LIGHTMAP                                       = 2,
    LIGHTMAP                                       = 3,
    LIGHTMAP                                       = 4,
    LIGHTMAP                                       = 5,
    LIGHTMAP                                       = 6,
    LIGHTMAP                                       = 7

};


// Enum  DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
    NewLevel                                       = 0,
    CurrentLevel                                   = 1,
    AssetsOnly                                     = 2,
    EDatasmithImportScene                          = 3

};


// Enum  DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
    StitchingNone                                  = 0,
    StitchingHeal                                  = 1,
    StitchingSew                                   = 2,
    EDatasmithCADStitchingTechnique                = 3

};


// Enum  DatasmithContent.EDatasmithCADRetessellationRule
enum class EDatasmithCADRetessellationRule : uint8_t
{
    All                                            = 0,
    SkipDeletedSurfaces                            = 1,
    EDatasmithCADRetessellationRule                = 2

};


// Enum  VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
    Undefined                                      = 0,
    Generic                                        = 1,
    RelativeLocation                               = 2,
    RelativeRotation                               = 4,
    RelativeScale3D                                = 8,
    Visibility                                     = 16,
    Material                                       = 32,
    Color                                          = 64,
    Option                                         = 128,
    EPropertyValueCategory                         = 129

};


// Enum  GLTFExporter.EGLTFTextureImageFormat
enum class EGLTFTextureImageFormat : uint8_t
{
    None                                           = 0,
    PNG                                            = 1,
    JPEG                                           = 2,
    EGLTFTextureImageFormat                        = 3

};


// Enum  GLTFExporter.EGLTFTextureType
enum class EGLTFTextureType : uint8_t
{
    None                                           = 0,
    HDR                                            = 1,
    Normalmaps                                     = 2,
    Lightmaps                                      = 4,
    All                                            = 7,
    EGLTFTextureType                               = 8

};


// Enum  GLTFExporter.EGLTFTextureHDREncoding
enum class EGLTFTextureHDREncoding : uint8_t
{
    None                                           = 0,
    RGBM                                           = 1,
    EGLTFTextureHDREncoding                        = 2

};


// Enum  GLTFExporter.EGLTFSceneMobility
enum class EGLTFSceneMobility : uint8_t
{
    None                                           = 0,
    Static                                         = 1,
    Stationary                                     = 2,
    Movable                                        = 4,
    All                                            = 7,
    EGLTFSceneMobility                             = 8

};


// Enum  GLTFExporter.EGLTFVariantSetsMode
enum class EGLTFVariantSetsMode : uint8_t
{
    None                                           = 0,
    Khronos                                        = 1,
    Epic                                           = 2,
    EGLTFVariantSetsMode                           = 3

};


// Enum  GLTFExporter.EGLTFMaterialVariantMode
enum class EGLTFMaterialVariantMode : uint8_t
{
    None                                           = 0,
    Simple                                         = 1,
    UseMeshData                                    = 2,
    EGLTFMaterialVariantMode                       = 3

};


// Enum  GLTFExporter.EGLTFMaterialBakeMode
enum class EGLTFMaterialBakeMode : uint8_t
{
    Disabled                                       = 0,
    Simple                                         = 1,
    UseMeshData                                    = 2,
    EGLTFMaterialBakeMode                          = 3

};


// Enum  GLTFExporter.EGLTFMaterialBakeSizePOT
enum class EGLTFMaterialBakeSizePOT : uint8_t
{
    POT                                            = 0,
    POT                                            = 1,
    POT                                            = 2,
    POT                                            = 3,
    POT                                            = 4,
    POT                                            = 5,
    POT                                            = 6,
    POT                                            = 7,
    POT                                            = 8,
    POT                                            = 9,
    POT                                            = 10,
    POT                                            = 11,
    POT                                            = 12,
    POT                                            = 13,
    POT                                            = 14

};


// Enum  GLTFExporter.EGLTFMaterialPropertyGroup
enum class EGLTFMaterialPropertyGroup : uint8_t
{
    None                                           = 0,
    BaseColorOpacity                               = 1,
    MetallicRoughness                              = 2,
    EmissiveColor                                  = 3,
    Normal                                         = 4,
    AmbientOcclusion                               = 5,
    ClearCoatRoughness                             = 6,
    ClearCoatBottomNormal                          = 7,
    EGLTFMaterialPropertyGroup                     = 8

};


// Enum  ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t
{
    None                                           = 0,
    MaxDistance                                    = 1,
    BackstopDistance                               = 2,
    BackstopRadius                                 = 3,
    AnimDriveStiffness                             = 4,
    AnimDriveDamping                               = 5,
    TetherStiffness                                = 6,
    TetherScale                                    = 7,
    Drag                                           = 8,
    Lift                                           = 9,
    EdgeStiffness                                  = 10,
    BendingStiffness                               = 11,
    AreaStiffness                                  = 12,
    BucklingStiffness                              = 13,
    Pressure                                       = 14,
    EChaosWeightMapTarget                          = 15

};


// Enum  ChaosCloth.EChaosClothTetherMode
enum class EChaosClothTetherMode : uint8_t
{
    FastTetherFastLength                           = 0,
    AccurateTetherFastLength                       = 1,
    AccurateTetherAccurateLength                   = 2,
    MaxChaosClothTetherMode                        = 3,
    EChaosClothTetherMode                          = 4

};


// Enum  ChaosCaching.ECacheMode
enum class ECacheMode : uint8_t
{
    None                                           = 0,
    Play                                           = 1,
    Record                                         = 2,
    ECacheMode                                     = 3

};


// Enum  ChaosCaching.EStartMode
enum class EStartMode : uint8_t
{
    Timed                                          = 0,
    Triggered                                      = 1,
    EStartMode                                     = 2

};


// Enum  GeometryCollectionNodes.EMakeBoxDataTypeEnum
enum class EMakeBoxDataTypeEnum : uint8_t
{
    Dataflow                                       = 0,
    Dataflow                                       = 1,
    Dataflow                                       = 2

};


// Enum  GeometryCollectionNodes.EFloatToIntFunctionEnum
enum class EFloatToIntFunctionEnum : uint8_t
{
    Dataflow                                       = 0,
    Dataflow                                       = 1,
    Dataflow                                       = 2,
    Dataflow                                       = 3,
    Dataflow                                       = 4

};


// Enum  GeometryCollectionNodes.EMathConstantsEnum
enum class EMathConstantsEnum : uint8_t
{
    Dataflow                                       = 0,
    Dataflow                                       = 1,
    Dataflow                                       = 2,
    Dataflow                                       = 3,
    Dataflow                                       = 4,
    Dataflow                                       = 5,
    Dataflow                                       = 6,
    Dataflow                                       = 7,
    Dataflow                                       = 8,
    Dataflow                                       = 9,
    Dataflow                                       = 10,
    Dataflow                                       = 11,
    Dataflow                                       = 12,
    Dataflow                                       = 13,
    Dataflow                                       = 14

};


// Enum  ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3,
    ChaosNiagara                                   = 4

};


// Enum  ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3

};


// Enum  ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3

};


// Enum  ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3

};


// Enum  ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2

};


// Enum  ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3,
    ChaosNiagara                                   = 4

};


// Enum  ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3,
    ChaosNiagara                                   = 4

};


// Enum  ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8_t
{
    ChaosNiagara                                   = 0,
    ChaosNiagara                                   = 1,
    ChaosNiagara                                   = 2,
    ChaosNiagara                                   = 3,
    ChaosNiagara                                   = 4

};


// Enum  UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
    None                                           = 0,
    Json                                           = 1,
    TaggedProperty                                 = 2,
    CborPlatformEndianness                         = 3,
    CborStandardEndianness                         = 4,
    EUdpMessageFormat                              = 5

};


// Enum  ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
    ContextActor                                   = 0,
    ExternalActor                                  = 1,
    Component                                      = 2,
    EActorSequenceObjectReferenceType              = 3

};


// Enum  AndroidFileServer.EAFSActiveType
enum class EAFSActiveType : uint8_t
{
    None                                           = 0,
    USBOnly                                        = 1,
    NetworkOnly                                    = 2,
    Combined                                       = 3,
    EAFSActiveType                                 = 4

};


// Enum  AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
    Local                                          = 0,
    Private                                        = 1,
    Shared                                         = 2,
    ECollectionScriptingShareType                  = 3

};


// Enum  GooglePAD.EGooglePADErrorCode
enum class EGooglePADErrorCode : uint8_t
{
    AssetPack                                      = 0,
    AssetPack                                      = 1,
    AssetPack                                      = 2,
    AssetPack                                      = 3,
    AssetPack                                      = 4,
    AssetPack                                      = 5,
    AssetPack                                      = 6,
    AssetPack                                      = 7,
    AssetPack                                      = 8,
    AssetPack                                      = 9,
    AssetPack                                      = 10,
    AssetPack                                      = 11,
    AssetPack                                      = 12,
    AssetPack                                      = 13,
    AssetPack                                      = 14

};


// Enum  GooglePAD.EGooglePADDownloadStatus
enum class EGooglePADDownloadStatus : uint8_t
{
    AssetPack                                      = 0,
    AssetPack                                      = 1,
    AssetPack                                      = 2,
    AssetPack                                      = 3,
    AssetPack                                      = 4,
    AssetPack                                      = 5,
    AssetPack                                      = 6,
    AssetPack                                      = 7,
    AssetPack                                      = 8,
    AssetPack                                      = 9,
    AssetPack                                      = 10,
    AssetPack                                      = 11,
    AssetPack                                      = 12,
    AssetPack                                      = 13

};


// Enum  GooglePAD.EGooglePADStorageMethod
enum class EGooglePADStorageMethod : uint8_t
{
    AssetPack                                      = 0,
    AssetPack                                      = 1,
    AssetPack                                      = 2,
    AssetPack                                      = 3,
    AssetPack                                      = 4

};


// Enum  GooglePAD.EGooglePADCellularDataConfirmStatus
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
    AssetPack                                      = 0,
    AssetPack                                      = 1,
    AssetPack                                      = 2,
    AssetPack                                      = 3,
    AssetPack                                      = 4

};


// Enum  LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
    LA                                             = 0,
    LA                                             = 1,
    LA                                             = 2,
    LA                                             = 3,
    LA                                             = 4,
    LA                                             = 5,
    LA                                             = 6

};


// Enum  Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
    Sine                                           = 0,
    Saw                                            = 1,
    Triangle                                       = 2,
    Square                                         = 3,
    Noise                                          = 4,
    Count                                          = 5,
    ESynth1OscType                                 = 6

};


// Enum  Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    Count                                          = 7,
    ESynthLFOType                                  = 8

};


// Enum  Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
    Sync                                           = 0,
    OneShot                                        = 1,
    Free                                           = 2,
    Count                                          = 3,
    ESynthLFOMode                                  = 4

};


// Enum  Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
    PatchToNone                                    = 0,
    PatchToGain                                    = 1,
    PatchToOscFreq                                 = 2,
    PatchToFilterFreq                              = 3,
    PatchToFilterQ                                 = 4,
    PatchToOscPulseWidth                           = 5,
    PatchToOscPan                                  = 6,
    PatchLFO1ToLFO2Frequency                       = 7,
    PatchLFO1ToLFO2Gain                            = 8,
    Count                                          = 9,
    ESynthLFOPatchType                             = 10

};


// Enum  Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
    PatchToNone                                    = 0,
    PatchToOscFreq                                 = 1,
    PatchToFilterFreq                              = 2,
    PatchToFilterQ                                 = 3,
    PatchToLFO1Gain                                = 4,
    PatchToLFO2Gain                                = 5,
    PatchToLFO1Freq                                = 6,
    PatchToLFO2Freq                                = 7,
    Count                                          = 8,
    ESynthModEnvPatch                              = 9

};


// Enum  Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
    PatchToNone                                    = 0,
    PatchToOscFreq                                 = 1,
    PatchToFilterFreq                              = 2,
    PatchToFilterQ                                 = 3,
    PatchToLFO1Gain                                = 4,
    PatchToLFO2Gain                                = 5,
    PatchToLFO1Freq                                = 6,
    PatchToLFO2Freq                                = 7,
    Count                                          = 8,
    ESynthModEnvBiasPatch                          = 9

};


// Enum  Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESynthFilterType                               = 5

};


// Enum  Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESynthFilterAlgorithm                          = 4

};


// Enum  Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
    Normal                                         = 0,
    Cross                                          = 1,
    PingPong                                       = 2,
    Count                                          = 3,
    ESynthStereoDelayMode                          = 4

};


// Enum  Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
    LFO1                                           = 0,
    LFO2                                           = 1,
    Envelope                                       = 2,
    BiasEnvelope                                   = 3,
    Count                                          = 4,
    ESynth1PatchSource                             = 5

};


// Enum  Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
    Osc1Gain                                       = 0,
    Osc1Frequency                                  = 1,
    Osc1Pulsewidth                                 = 2,
    Osc2Gain                                       = 3,
    Osc2Frequency                                  = 4,
    Osc2Pulsewidth                                 = 5,
    FilterFrequency                                = 6,
    FilterQ                                        = 7,
    Gain                                           = 8,
    Pan                                            = 9,
    LFO1Frequency                                  = 10,
    LFO1Gain                                       = 11,
    LFO2Frequency                                  = 12,
    LFO2Gain                                       = 13,
    Count                                          = 14,
    ESynth1PatchDestination                        = 15

};


// Enum  Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
    BlockSize256                                   = 0,
    BlockSize512                                   = 1,
    BlockSize1024                                  = 2,
    ESubmixEffectConvolutionReverbBlockSize        = 3

};


// Enum  Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    UpwardsCompressor                              = 4,
    Count                                          = 5,
    ESourceEffectDynamicsProcessorType             = 6

};


// Enum  Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESourceEffectDynamicsPeakMode                  = 4

};


// Enum  Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    EEnvelopeFollowerPeakMode                      = 4

};


// Enum  Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESourceEffectFilterCircuit                     = 4

};


// Enum  Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESourceEffectFilterType                        = 5

};


// Enum  Synthesis.ESourceEffectFilterParam
enum class ESourceEffectFilterParam : uint8_t
{
    FilterFrequency                                = 0,
    FilterResonance                                = 1,
    Count                                          = 2,
    ESourceEffectFilterParam                       = 3

};


// Enum  Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
    MidSide                                        = 0,
    LeftRight                                      = 1,
    count                                          = 2,
    EStereoChannelMode                             = 3

};


// Enum  Synthesis.ESourceEffectMotionFilterModSource
enum class ESourceEffectMotionFilterModSource : uint8_t
{
    DistanceFromListener                           = 0,
    SpeedRelativeToListener                        = 1,
    SpeedOfSourceEmitter                           = 2,
    SpeedOfListener                                = 3,
    SpeedOfAngleDelta                              = 4,
    Count                                          = 5,
    ESourceEffectMotionFilterModSource             = 6

};


// Enum  Synthesis.ESourceEffectMotionFilterModDestination
enum class ESourceEffectMotionFilterModDestination : uint8_t
{
    FilterACutoffFrequency                         = 0,
    FilterAResonance                               = 1,
    FilterAOutputVolumeDB                          = 2,
    FilterBCutoffFrequency                         = 3,
    FilterBResonance                               = 4,
    FilterBOutputVolumeDB                          = 5,
    FilterMix                                      = 6,
    Count                                          = 7,
    ESourceEffectMotionFilterModDestination        = 8

};


// Enum  Synthesis.ESourceEffectMotionFilterTopology
enum class ESourceEffectMotionFilterTopology : uint8_t
{
    SerialMode                                     = 0,
    ParallelMode                                   = 1,
    Count                                          = 2,
    ESourceEffectMotionFilterTopology              = 3

};


// Enum  Synthesis.ESourceEffectMotionFilterCircuit
enum class ESourceEffectMotionFilterCircuit : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESourceEffectMotionFilterCircuit               = 4

};


// Enum  Synthesis.ESourceEffectMotionFilterType
enum class ESourceEffectMotionFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESourceEffectMotionFilterType                  = 5

};


// Enum  Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    Count                                          = 7,
    EPhaserLFOType                                 = 8

};


// Enum  Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
    Sine                                           = 0,
    Saw                                            = 1,
    Triangle                                       = 2,
    Square                                         = 3,
    Count                                          = 4,
    ERingModulatorTypeSourceEffect                 = 5

};


// Enum  Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
    Normal                                         = 0,
    Cross                                          = 1,
    PingPong                                       = 2,
    Count                                          = 3,
    EStereoDelaySourceEffect                       = 4

};


// Enum  Synthesis.EStereoDelayFiltertype
enum class EStereoDelayFiltertype : uint8_t
{
    Lowpass                                        = 0,
    Highpass                                       = 1,
    Bandpass                                       = 2,
    Notch                                          = 3,
    Count                                          = 4,
    EStereoDelayFiltertype                         = 5

};


// Enum  Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESubmixFilterType                              = 5

};


// Enum  Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESubmixFilterAlgorithm                         = 4

};


// Enum  Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
    SendToChannel                                  = 0,
    Panning                                        = 1,
    Disabled                                       = 2,
    ETapLineMode                                   = 3

};


// Enum  Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
    Rectangular                                    = 0,
    Triangle                                       = 1,
    DownwardTriangle                               = 2,
    UpwardTriangle                                 = 3,
    ExponentialDecay                               = 4,
    ExponentialIncrease                            = 5,
    Gaussian                                       = 6,
    Hanning                                        = 7,
    Lanczos                                        = 8,
    Cosine                                         = 9,
    CosineSquared                                  = 10,
    Welch                                          = 11,
    Blackman                                       = 12,
    BlackmanHarris                                 = 13,
    Count                                          = 14,
    EGranularSynthEnvelopeType                     = 15

};


// Enum  Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
    FromBeginning                                  = 0,
    FromCurrentPosition                            = 1,
    Count                                          = 2,
    EGranularSynthSeekType                         = 3

};


// Enum  Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8_t
{
    AUTOINTERP                                     = 0,
    LINEAR                                         = 1,
    CONSTANT                                       = 2,
    CurveInterpolationType                         = 3

};


// Enum  Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
    FromBeginning                                  = 0,
    FromCurrentPosition                            = 1,
    FromEnd                                        = 2,
    Count                                          = 3,
    ESamplePlayerSeekType                          = 4

};


// Enum  Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
    Medium                                         = 0,
    Large                                          = 1,
    Count                                          = 2,
    ESynthKnobSize                                 = 3

};


// Enum  Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    Count                                          = 3,
    ESynthSlateSizeType                            = 4

};


// Enum  Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
    Light                                          = 0,
    Dark                                           = 1,
    Count                                          = 2,
    ESynthSlateColorStyle                          = 3

};


// Enum  LyraGame.ETgfPVPTeamColor
enum class ETgfPVPTeamColor : uint8_t
{
    None                                           = 0,
    Blue                                           = 1,
    Red                                            = 2,
    ETgfPVPTeamColor                               = 3

};


// Enum  LyraGame.ETgfWeaponChangeSlot
enum class ETgfWeaponChangeSlot : uint8_t
{
    TgfWeaponChangeSlotNone                        = 0,
    TgfWeaponChangeSlotWeaponPair1                 = 1,
    TgfWeaponChangeSlotWeaponPair2                 = 2,
    TgfWeaponChangeSlotConsumable1                 = 3,
    TgfWeaponChangeSlotConsumable2                 = 4,
    TgfWeaponChangeSlotConsumable3                 = 5,
    TgfWeaponChangeSlotThrowable                   = 6,
    TgfWeaponChangeSlotMAX                         = 7,
    ETgfWeaponChangeSlot                           = 8

};


// Enum  LyraGame.ETgfPauseActorTickReason
enum class ETgfPauseActorTickReason : uint8_t
{
    TgfPauseActorTickReasonNone                    = 0,
    TgfPauseActorTickReasonDeath                   = 1,
    TgfPauseActorTickReasonActorMap                = 2,
    TgfPauseActorTickReasonMonsterHold             = 3,
    ETgfPauseActorTickReason                       = 4

};


// Enum  LyraGame.ETgfPauseDSMeshTickReason
enum class ETgfPauseDSMeshTickReason : uint8_t
{
    TgfPauseDSMeshTickReasonNone                   = 0,
    TgfPauseDSMeshTickReasonDeath                  = 1,
    TgfPauseDSMeshTickReasonCrouch                 = 2,
    TgfPauseDSMeshTickReasonGuard                  = 3,
    TgfPauseDSMeshTickReasonMonsterHold            = 4,
    TgfPauseDSMeshTickReasonMonsterAbility         = 5,
    TgfPauseDSMeshTickReasonMonsterDormant         = 6,
    TgfPauseDSMeshTickReasonMithrilResurrecting    = 7,
    TgfPauseDSMeshTIckReasonMonsterWeak            = 8,
    ETgfPauseDSMeshTickReason                      = 9

};


// Enum  LyraGame.ETgfPauseClientTickReason
enum class ETgfPauseClientTickReason : uint8_t
{
    TgfPauseClientTickReasonNone                   = 0,
    TgfPauseClientTickReasonDeath                  = 1,
    ETgfPauseClientTickReason                      = 2

};


// Enum  LyraGame.EDeathZoneRuntimeState
enum class EDeathZoneRuntimeState : uint8_t
{
    Undefined                                      = 0,
    Paused                                         = 1,
    AtInterval                                     = 2,
    Shrinking                                      = 3,
    Completed                                      = 4,
    EDeathZoneRuntimeState                         = 5

};


// Enum  LyraGame.EPortalType
enum class EPortalType : uint8_t
{
    None                                           = 0,
    Blue                                           = 1,
    Red                                            = 2,
    Shadow                                         = 3,
    Scroll                                         = 4,
    EPortalType                                    = 5

};


// Enum  LyraGame.ETGFInGameRookieTaskType
enum class ETGFInGameRookieTaskType : uint8_t
{
    TgfInGameRookieTaskNone                        = 0,
    TgfInGameRookieFirstBlockBack                  = 1,
    TgfInGameRookieFirstChargedBash                = 2,
    TgfInGameRookieFirstBreakItem                  = 3,
    TgfIngameRookieTaskFirstUseFire                = 4,
    TgfInGameRookieTaskFirstTakeMedicine           = 5,
    TgfInGameRookieFirstEnvironmentDead            = 6,
    TgfInGameRookieFirstKillEliteMonster           = 7,
    TgfInGameRookieFirstKillBossMonster            = 8,
    TgfInGameRookieFirstReviveTeammate             = 9,
    TgfInGameRookieFirstEscapeWithScroll           = 10,
    TgfInGameRookieFirstEscapeWithoutScroll        = 11,
    TgfInGameRookieFirstEnterLevelTwo              = 12,
    TgfInGameRookieFirstEnterGame                  = 13,
    TgfInGameRookieFirstAddFriend                  = 14,
    TgfInGameRookieFirstFixEquip                   = 15,
    TgfInGameRookieFirstInlayDiamond               = 16,
    TgfInGameRookieFirstProduceMedicine            = 17,
    TgfInGameRookieFirstTrade                      = 18,
    TgfInGameRookieFirstPurchase                   = 19,
    TgfInGameRookieFirstOpenPagePackage            = 20,
    TgfInGameRookieFirstOpenPageAlchemy            = 21,
    TgfInGameRookieFirstOpenPageTutorial           = 22,
    TgfInGameRookieKillAtLowHealth                 = 23,
    TgfInGameRookieResurrectionRepay               = 24,
    TgfInGameRookieRevengeOneTeammate              = 25,
    TgfInGameRookieRevengeTwoTeammates             = 26,
    TgfInGameRookieSwordMasterWithAtLeastXTalents  = 27,
    TgfInGameRookieFighterWithAtLeastXTalents      = 28,
    TgfInGameRookiePriestWithAtLeastXTalents       = 29,
    TgfInGameRookieRogueWithAtLeastXTalents        = 30,
    TgfInGameRookieWizardWithAtLeastXTalents       = 31,
    TgfInGameRookieDeathKnightWithAtLeastXTalents  = 32,
    TgfInGameRookieLichWithAtLeastXTalents         = 33,
    TgfInGameRookieDruidPantherWithAtLeastXTalents = 34,
    TgfInGameRookieBattleWithXWeapoons             = 35,
    TgfInGameRookieBattleWithXYWeapoons            = 36,
    ETGFInGameRookieTaskType                       = 37

};


// Enum  LyraGame.ETgfInventoryOperationItemSourceType
enum class ETgfInventoryOperationItemSourceType : uint8_t
{
    None                                           = 0,
    Ordinary                                       = 1,
    Partial                                        = 2,
    ETgfInventoryOperationItemSourceType           = 3

};


// Enum  LyraGame.ECreateRoleChooseSubType
enum class ECreateRoleChooseSubType : uint8_t
{
    None                                           = 0,
    FaceType                                       = 1,
    HairType                                       = 2,
    HairColor                                      = 3,
    SkinColor                                      = 4,
    EyeColor                                       = 5,
    TatooColor                                     = 6,
    TatooType                                      = 7,
    BeardType                                      = 8,
    BeardColor                                     = 9,
    ScarType                                       = 10,
    MakeupType                                     = 11,
    MakeupColor                                    = 12,
    ECreateRoleChooseSubType                       = 13

};


// Enum  LyraGame.ECharacterCustomizationCollisionMode
enum class ECharacterCustomizationCollisionMode : uint8_t
{
    NoCollision                                    = 0,
    UseCollisionFromCharacterPart                  = 1,
    ECharacterCustomizationCollisionMode           = 2

};


// Enum  LyraGame.EEffectsContextMatchType
enum class EEffectsContextMatchType : uint8_t
{
    ExactMatch                                     = 0,
    BestMatch                                      = 1,
    EEffectsContextMatchType                       = 2

};


// Enum  LyraGame.ELyraStatDisplayMode
enum class ELyraStatDisplayMode : uint8_t
{
    Hidden                                         = 0,
    TextOnly                                       = 1,
    GraphOnly                                      = 2,
    TextAndGraph                                   = 3,
    ELyraStatDisplayMode                           = 4

};


// Enum  LyraGame.ELyraDisplayablePerformanceStat
enum class ELyraDisplayablePerformanceStat : uint8_t
{
    ClientFPS                                      = 0,
    ServerFPS                                      = 1,
    IdleTime                                       = 2,
    FrameTime                                      = 3,
    FrameTime                                      = 4,
    FrameTime                                      = 5,
    FrameTime                                      = 6,
    FrameTime                                      = 7,
    Ping                                           = 8,
    PacketLoss                                     = 9,
    PacketLoss                                     = 10,
    PacketRate                                     = 11,
    PacketRate                                     = 12,
    PacketSize                                     = 13,
    PacketSize                                     = 14,
    Count                                          = 15,
    ELyraDisplayablePerformanceStat                = 16

};


// Enum  LyraGame.EnRoleDisplayAttribueID
enum class EnRoleDisplayAttribueID : uint8_t
{
    EN                                             = 0,
    EN                                             = 1,
    EN                                             = 2,
    EN                                             = 3,
    EN                                             = 4,
    EN                                             = 5,
    EN                                             = 6,
    EN                                             = 7,
    EN                                             = 8,
    EN                                             = 127,
    EN                                             = 56,
    EN                                             = 9,
    EN                                             = 10,
    EN                                             = 11,
    EN                                             = 12,
    EN                                             = 13,
    EN                                             = 14,
    EN                                             = 15,
    EN                                             = 16,
    EN                                             = 17,
    EN                                             = 18,
    EN                                             = 19,
    EN                                             = 20,
    EN                                             = 21,
    EN                                             = 22,
    EN                                             = 23,
    EN                                             = 24,
    EN                                             = 25,
    EN                                             = 26,
    EN                                             = 27,
    EN                                             = 28,
    EN                                             = 29,
    EN                                             = 30,
    EN                                             = 31,
    EN                                             = 32,
    EN                                             = 33,
    EN                                             = 34,
    EN                                             = 35,
    EN                                             = 36,
    EN                                             = 37,
    EN                                             = 38,
    EN                                             = 39,
    EN                                             = 40,
    EN                                             = 41,
    EN                                             = 42,
    EN                                             = 43,
    EN                                             = 44,
    EN                                             = 45,
    EN                                             = 46,
    EN                                             = 47,
    EN                                             = 49,
    EN                                             = 51,
    EN                                             = 52,
    EN                                             = 53,
    EN                                             = 54,
    EN                                             = 55,
    EN                                             = 64,
    EN                                             = 57,
    EN                                             = 58,
    EN                                             = 60,
    EN                                             = 61,
    EN                                             = 62,
    EN                                             = 63,
    EN                                             = 65,
    EN                                             = 66,
    EN                                             = 67,
    EN                                             = 68,
    EN                                             = 69,
    EN                                             = 70,
    EN                                             = 72,
    EN                                             = 74,
    EN                                             = 75,
    EN                                             = 76,
    EN                                             = 79,
    EN                                             = 80,
    EN                                             = 81,
    EN                                             = 82,
    EN                                             = 83,
    EN                                             = 84,
    EN                                             = 85,
    EN                                             = 86,
    EN                                             = 87,
    EN                                             = 88,
    EN                                             = 89,
    EN                                             = 90,
    EN                                             = 91,
    EN                                             = 92,
    EN                                             = 93,
    EN                                             = 94,
    EN                                             = 95,
    EN                                             = 96,
    EN                                             = 97,
    EN                                             = 98,
    EN                                             = 99,
    EN                                             = 100,
    EN                                             = 101,
    EN                                             = 102,
    EN                                             = 103,
    EN                                             = 104,
    EN                                             = 105,
    EN                                             = 106,
    EN                                             = 107,
    EN                                             = 108,
    EN                                             = 109,
    EN                                             = 110,
    EN                                             = 111,
    EN                                             = 112,
    EN                                             = 113,
    EN                                             = 114,
    EN                                             = 115,
    EN                                             = 116,
    EN                                             = 117,
    EN                                             = 118,
    EN                                             = 119,
    EN                                             = 120,
    EN                                             = 121,
    EN                                             = 122,
    EN                                             = 123,
    EN                                             = 124,
    EN                                             = 125,
    EN                                             = 126,
    EN                                             = 200

};


// Enum  LyraGame.EnRoleDisplayAttributeIntConvert
enum class EnRoleDisplayAttributeIntConvert : uint8_t
{
    EnRoleDisplayAttributeIntConvert               = 0,
    EnRoleDisplayAttributeIntConvert               = 1,
    EnRoleDisplayAttributeIntConvert               = 2,
    EnRoleDisplayAttributeIntConvert               = 3

};


// Enum  LyraGame.EnRoleDisplayAttribueGroup
enum class EnRoleDisplayAttribueGroup : uint8_t
{
    EnRoleDisplayAttribueGroup                     = 0,
    EnRoleDisplayAttribueGroup                     = 1,
    EnRoleDisplayAttribueGroup                     = 2,
    EnRoleDisplayAttribueGroup                     = 3,
    EnRoleDisplayAttribueGroup                     = 4,
    EnRoleDisplayAttribueGroup                     = 10,
    EnRoleDisplayAttribueGroup                     = 11

};


// Enum  LyraGame.EnRoleStatisticsDataID
enum class EnRoleStatisticsDataID : uint8_t
{
    EN                                             = 0,
    EN                                             = 1,
    EN                                             = 2,
    EN                                             = 3,
    EN                                             = 4,
    EN                                             = 5,
    EN                                             = 6,
    EN                                             = 7,
    EN                                             = 8,
    EN                                             = 9,
    EN                                             = 10,
    EN                                             = 11,
    EN                                             = 12,
    EN                                             = 13,
    EN                                             = 14,
    EN                                             = 15,
    EN                                             = 16,
    EN                                             = 17,
    EN                                             = 18,
    EN                                             = 19,
    EN                                             = 20,
    EN                                             = 21,
    EN                                             = 22,
    EN                                             = 23

};


// Enum  LyraGame.EnRoleStatisticsDataGroup
enum class EnRoleStatisticsDataGroup : uint8_t
{
    EnRoleStatisticsDataGroup                      = 0,
    EnRoleStatisticsDataGroup                      = 1,
    EnRoleStatisticsDataGroup                      = 2,
    EnRoleStatisticsDataGroup                      = 3

};


// Enum  LyraGame.ESwordMasterSkillType
enum class ESwordMasterSkillType : uint8_t
{
    None                                           = 0,
    Skill                                          = 1,
    Skill                                          = 2,
    ESwordMasterSkillType                          = 3

};


// Enum  LyraGame.ETgfMovementMonitorType
enum class ETgfMovementMonitorType : uint8_t
{
    MonitorMove                                    = 0,
    MonitorNoMove                                  = 1,
    ETgfMovementMonitorType                        = 2

};


// Enum  LyraGame.ETgfMovementMonitorCrouchSetting
enum class ETgfMovementMonitorCrouchSetting : uint8_t
{
    None                                           = 0,
    KeepCrouch                                     = 1,
    KeepUnCrouch                                   = 2,
    ETgfMovementMonitorCrouchSetting               = 3

};


// Enum  LyraGame.ETgfMonitorNetExecutionPolicy
enum class ETgfMonitorNetExecutionPolicy : uint8_t
{
    ServerOnly                                     = 0,
    ClientOnly                                     = 1,
    Both                                           = 2,
    ETgfMonitorNetExecutionPolicy                  = 3

};


// Enum  LyraGame.ETgfMontageRateType
enum class ETgfMontageRateType : uint8_t
{
    DefaultRate                                    = 0,
    AttackRate                                     = 1,
    RecoverableItemConsumeRate                     = 2,
    WeaponChangeSpeedRate                          = 3,
    ThrowableItemConsumeSpeedRate                  = 4,
    ETgfMontageRateType                            = 5

};


// Enum  LyraGame.ETgfAIAbilityFilterOp
enum class ETgfAIAbilityFilterOp : uint8_t
{
    TgfAIAbilityFilterOpAnd                        = 0,
    TgfAIAbilityFilterOpOr                         = 1,
    ETgfAIAbilityFilterOp                          = 2

};


// Enum  LyraGame.ETgfAIAbilityFilterType
enum class ETgfAIAbilityFilterType : uint8_t
{
    TgfAIAbilityFilterTypeNone                     = 0,
    TgfAIAbilityFilterTypeHealthLow                = 1,
    TgfAIAbilityFilterTypeHealthHigh               = 2,
    TgfAIAbilityFilterTypeFriendlyCount            = 3,
    TgfAIAbilityFilterTypeHostileCount             = 4,
    TgfAIAbilityFilterTypeBoss                     = 5,
    TgfAIAbilityFilterTypeEnemyBehind              = 6,
    TgfAIAbilityFilterTypeSummonsCount             = 7,
    TgfAIAbilityFilterTypeTags                     = 8,
    ETgfAIAbilityFilterType                        = 9

};


// Enum  LyraGame.ETgfAIAbilityTargetFilterType
enum class ETgfAIAbilityTargetFilterType : uint8_t
{
    TgfAIAbilityTargetFilterTypeNone               = 0,
    TgfAIAbilityTargetFilterTypeRange              = 1,
    TgfAIAbilityTargetFilterTypeThreats            = 2,
    TgfAIAbilityTargetFilterTypeFriendly           = 3,
    TgfAIAbilityTargetFilterTypeHostile            = 4,
    TgfAIAbilityTargetFilterTypeRace               = 5,
    TgfAIAbilityTargetFilterTypeCareer             = 6,
    TgfAIAbilityTargetFilterTypeHealthLowest       = 7,
    TgfAIAbilityTargetFilterTypeHealthHighest      = 8,
    TgfAIAbilityTargetFilterTypeThreatLowest       = 9,
    TgfAIAbilityTargetFilterTypeThreatHighest      = 10,
    TgfAIAbilityTargetFilterTypeNearest            = 11,
    TgfAIAbilityTargetFilterTypeFurthest           = 12,
    TgfAIAbilityTargetFilterTypeCareerPriority     = 13,
    TgfAIAbilityTargetFilterTypeItemEquip          = 14,
    TgfAIAbilityTargetFilterTypeTags               = 15,
    TgfAIAbilityTargetFilterTypeAlternately        = 16,
    ETgfAIAbilityTargetFilterType                  = 17

};


// Enum  LyraGame.ETgfAIAbilityTargetType
enum class ETgfAIAbilityTargetType : uint8_t
{
    TgfAIAbilityTargetTypeNone                     = 0,
    TgfAIAbilityTargetTypeActor                    = 1,
    TgfAIAbilityTargetTypeLocation                 = 2,
    ETgfAIAbilityTargetType                        = 3

};


// Enum  LyraGame.ETgfEffectPlacementTargetType
enum class ETgfEffectPlacementTargetType : uint8_t
{
    None                                           = 0,
    Self                                           = 1,
    RightHand                                      = 2,
    LeftHand                                       = 3,
    WorldTransform                                 = 4,
    ETgfEffectPlacementTargetType                  = 5

};


// Enum  LyraGame.EWeaponAmmoType
enum class EWeaponAmmoType : uint8_t
{
    None                                           = 0,
    Arrow                                          = 1,
    Fire                                           = 2,
    Ice                                            = 3,
    Thunder                                        = 4,
    Additional                                     = 10,
    EWeaponAmmoType                                = 11

};


// Enum  LyraGame.ETgfBattleElement
enum class ETgfBattleElement : uint8_t
{
    TgfElementNone                                 = 0,
    TgfElementFire                                 = 1,
    TgfElementIce                                  = 2,
    TgfElementThunder                              = 3,
    TgfElementLight                                = 4,
    TgfElementDark                                 = 5,
    ETgfBattleElement                              = 6

};


// Enum  LyraGame.ETgfActorCareer
enum class ETgfActorCareer : uint8_t
{
    TgfActorCareerNone                             = 0,
    TgfActorCareerSwordMaster                      = 1,
    TgfActorCareerFighter                          = 2,
    TgfActorCareerRogue                            = 3,
    TgfActorCareerPriest                           = 4,
    TgfActorCareerWizard                           = 5,
    TgfActorCareerDeathKnight                      = 6,
    TgfActorCareerLich                             = 7,
    TgfActorCareerDruidPanther                     = 8,
    TgfActorCareerPaladin                          = 9,
    TgfActorCareerMithrilFighter                   = 101,
    TgfActorCareerMithrilRogue                     = 102,
    TgfActorCareerMithrilPriest                    = 103,
    ETgfActorCareer                                = 104

};


// Enum  LyraGame.ETgfActorType
enum class ETgfActorType : uint8_t
{
    TgfActorTypeNone                               = 0,
    TgfActorTypePlayer                             = 1,
    TgfActorTypeBotPlayer                          = 2,
    TgfActorTypeObstacle                           = 3,
    TgfActorTypeMonster                            = 11,
    TgfActorTypeElite                              = 12,
    TgfActorTypeBoss                               = 13,
    TgfActorTypeSummon                             = 14,
    TgfActorTypeChest                              = 41,
    ETgfActorType                                  = 42

};


// Enum  LyraGame.ETgfActorRace
enum class ETgfActorRace : uint8_t
{
    TgfActorRaceNone                               = 0,
    TgfActorRaceHuman                              = 1,
    TgfActorRaceElf                                = 2,
    TgfActorRaceUndead                             = 3,
    ETgfActorRace                                  = 4

};


// Enum  LyraGame.ETgfActorGender
enum class ETgfActorGender : uint8_t
{
    TgfActorGenderNone                             = 0,
    TgfActorGenderMale                             = 1,
    TgfActorGenderFemale                           = 2,
    TgfActorGenderUndead                           = 3,
    ETgfActorGender                                = 4

};


// Enum  LyraGame.ETgfForceType
enum class ETgfForceType : uint8_t
{
    TgfForceTypeNone                               = 0,
    TgfForceTypeAdventurer                         = 1,
    TgfForceTypeMithrilForce                       = 2,
    ETgfForceType                                  = 3

};


// Enum  LyraGame.ETgfPlayerSceneTag
enum class ETgfPlayerSceneTag : uint8_t
{
    TgfPlayerSceneTagDefault                       = 0,
    TgfPlayerSceneTagShadow                        = 1,
    ETgfPlayerSceneTag                             = 2

};


// Enum  LyraGame.ETgfSkinSlot
enum class ETgfSkinSlot : uint8_t
{
    TgfSkinSlotNone                                = 0,
    TgfSkinSlotClothChest                          = 1,
    TgfSkinSlotClothTrousers                       = 2,
    TgfSkinSlotClothHelmet                         = 3,
    TgfSkinSlotClothShoe                           = 4,
    TgfSkinSlotClothGlove                          = 5,
    TgfSkinSlotLeatherChest                        = 11,
    TgfSkinSlotLeatherTrousers                     = 12,
    TgfSkinSlotLeatherHelmet                       = 13,
    TgfSkinSlotLeatherShoe                         = 14,
    TgfSkinSlotLeatherGlove                        = 15,
    TgfSkinSlotPlateChest                          = 21,
    TgfSkinSlotPlateTrousers                       = 22,
    TgfSkinSlotPlateHelmet                         = 23,
    TgfSkinSlotPlateShoe                           = 24,
    TgfSkinSlotPlateGlove                          = 25,
    TgfSkinSlotCloak                               = 31,
    TgfSkinSlotHeaddress                           = 32,
    TgfSkinSlotTorch                               = 41,
    TgfSkinSlotPotion                              = 51,
    TgfSkinSlotSword                               = 62,
    TgfSkinSlotShield                              = 63,
    TgfSkinSlotLongSword                           = 64,
    TgfSkinSlotDagger                              = 65,
    TgfSkinSlotMace                                = 66,
    TgfSkinSlotHeavyCrossbow                       = 81,
    TgfSkinSlotStaff                               = 101,
    TgfSkinSlotRelic                               = 102,
    TgfSkinSlotAttachingWaist                      = 121,
    TgfSkinSlotAttachingBack                       = 122,
    TgfSkinSlotKillingEffect                       = 151,
    TgfSkinSlotHeadFrame                           = 201,
    ETgfSkinSlot                                   = 202

};


// Enum  LyraGame.ETgfSkinCategory
enum class ETgfSkinCategory : uint8_t
{
    TgfSkinCategoryNormal                          = 0,
    TgfSkinCategoryHeirloom                        = 1,
    ETgfSkinCategory                               = 2

};


// Enum  LyraGame.ELyraInventoryType
enum class ELyraInventoryType : uint8_t
{
    Normal                                         = 0,
    Mithril                                        = 1,
    ELyraInventoryType                             = 2

};


// Enum  LyraGame.ETgfEquipSlot
enum class ETgfEquipSlot : uint8_t
{
    TgfEquipSlotNone                               = 0,
    TgfEquipSlotPair1RightWeapon                   = 1,
    TgfEquipSlotPair1LeftWeapon                    = 2,
    TgfEquipSlotPair2RightWeapon                   = 3,
    TgfEquipSlotPair2LeftWeapon                    = 4,
    TgfEquipSlotUpperArmor                         = 11,
    TgfEquipSlotLowerArmor                         = 12,
    TgfEquipSlotHelmet                             = 13,
    TgfEquipSlotShoe                               = 14,
    TgfEquipSlotGlove                              = 15,
    TgfEquipSlotNecklace                           = 16,
    TgfEquipSlotLeftRing                           = 17,
    TgfEquipSlotRightRing                          = 18,
    TgfEquipSlotConsumable1                        = 41,
    TgfEquipSlotConsumable2                        = 42,
    TgfEquipSlotConsumable3                        = 43,
    TgfEquipSlotThrowable                          = 51,
    TgfEquipSlotAdditionalWeaponCasting            = 100,
    TgfEquipSlotAdditionalWeapon1                  = 101,
    TgfEquipSlotAdditionalWeapon2                  = 102,
    TgfEquipSlotAdditionalWeapon3                  = 103,
    TgfEquipSlotAdditionalWeapon4                  = 104,
    TgfEquipSlotAdditionalWeapon5                  = 105,
    TgfEquipSlotAdditionalWeapon6                  = 106,
    TgfEquipSlotAdditionalWeapon7                  = 107,
    TgfEquipSlotAdditionalWeapon8                  = 108,
    TgfEquipSlotAdditionalWeapon9                  = 109,
    ETgfEquipSlot                                  = 110

};


// Enum  LyraGame.TgfSwitchSlotType
enum class TgfSwitchSlotType : uint8_t
{
    TgfSwitchSlotTypeDefined                       = 0,
    TgfSwitchSlotTypeCurrentWeaponRight            = 1,
    TgfSwitchSlotTypeCurrentWeaponLeft             = 2,
    TgfSwitchSlotType                              = 3

};


// Enum  LyraGame.ETgfItemType
enum class ETgfItemType : uint8_t
{
    TgfItemTypeNone                                = 0,
    TgfItemTypeEquipWeapon                         = 1,
    TgfItemTypeEquipArmor                          = 2,
    TgfItemTypeEquipAccessory                      = 3,
    TgfItemTypeItemConsumable                      = 21,
    TgfItemTypeItemThrowable                       = 22,
    TgfItemTypeItemAmmo                            = 23,
    TgfItemTypeItemTreasure                        = 41,
    TgfItemTypeItemLevel                           = 42,
    TgfItemTypeItemGem                             = 43,
    TgfItemTypeItemOther                           = 51,
    ETgfItemType                                   = 52

};


// Enum  LyraGame.ETgfEquipSubType
enum class ETgfEquipSubType : uint8_t
{
    TgfEquipSubTypeNone                            = 0,
    TgfEquipSubTypeEquipClothChest                 = 1,
    TgfEquipSubTypeEquipClothTrousers              = 2,
    TgfEquipSubTypeEquipClothHelmet                = 3,
    TgfEquipSubTypeEquipClothShoe                  = 4,
    TgfEquipSubTypeEquipClothGlove                 = 5,
    TgfEquipSubTypeEquipLeatherChest               = 11,
    TgfEquipSubTypeEquipLeatherTrousers            = 12,
    TgfEquipSubTypeEquipLeatherHelmet              = 13,
    TgfEquipSubTypeEquipLeatherShoe                = 14,
    TgfEquipSubTypeEquipLeatherGlove               = 15,
    TgfEquipSubTypeEquipPlateChest                 = 21,
    TgfEquipSubTypeEquipPlateTrousers              = 22,
    TgfEquipSubTypeEquipPlateHelmet                = 23,
    TgfEquipSubTypeEquipPlateShoe                  = 24,
    TgfEquipSubTypeEquipPlateGlove                 = 25,
    TgfEquipSubTypeEquipRing                       = 31,
    TgfEquipSubTypeEquipNecklace                   = 32,
    TgfEquipSubTypeEquipNecklaceCareer             = 39,
    TgfEquipSubTypeEquipConsumableItem             = 41,
    TgfEquipSubTypeEquipHoldableItem               = 42,
    TgfEquipSubTypeEquipThrowableItem              = 51,
    TgfEquipSubTypeEquipBareHands                  = 61,
    TgfEquipSubTypeEquipSword                      = 62,
    TgfEquipSubTypeEquipShield                     = 63,
    TgfEquipSubTypeEquipLongSword                  = 64,
    TgfEquipSubTypeEquipDagger                     = 65,
    TgfEquipSubTypeEquipMace                       = 66,
    TgfEquipSubTypeEquipHeavyCrossbow              = 81,
    TgfEquipSubTypeEquipStaff                      = 101,
    TgfEquipSubTypeEquipRelic                      = 102,
    TgfEquipSubTypeEquipCrossbowAmmo               = 151,
    TgfEquipSubTypeEquipCommonChest                = 201,
    TgfEquipSubTypeEquipCommonTrousers             = 202,
    TgfEquipSubTypeEquipCommonHelmet               = 203,
    TgfEquipSubTypeEquipCommonShoe                 = 204,
    TgfEquipSubTypeEquipCommonGlove                = 205,
    ETgfEquipSubType                               = 206

};


// Enum  LyraGame.ETgfWeaponEquipType
enum class ETgfWeaponEquipType : uint8_t
{
    TgfWeaponEquipTypeNone                         = 0,
    TgfWeaponEquipTypeOnlyRight                    = 1,
    TgfWeaponEquipTypeOnlyLeft                     = 2,
    TgfWeaponEquipTypeBothHand                     = 3,
    TgfWeaponEquipTypeConsumable                   = 11,
    TgfWeaponEquipTypeThrowable                    = 12,
    ETgfWeaponEquipType                            = 13

};


// Enum  LyraGame.ETgfEquipQuality
enum class ETgfEquipQuality : uint8_t
{
    TgfEquipQualityNone                            = 0,
    TgfEquipQualityRotted                          = 1,
    TgfEquipQualityNormal                          = 2,
    TgfEquipQualityUncommon                        = 3,
    TgfEquipQualityEnhanced                        = 4,
    TgfEquipQualityEpic                            = 5,
    TgfEquipQualityLegendary                       = 6,
    TgfEquipQualityUnique                          = 7,
    TgfEquipQualityExceptional                     = 8,
    ETgfEquipQuality                               = 9

};


// Enum  LyraGame.ETgfEquipAttrParseType
enum class ETgfEquipAttrParseType : uint8_t
{
    TgfEquipAttrParseTypeNone                      = 0,
    TgfEquipAttrParseTypeLeftAttack                = 1,
    TgfEquipAttrParseTypeRightAttack               = 2,
    ETgfEquipAttrParseType                         = 3

};


// Enum  LyraGame.ETgfItemAffixType
enum class ETgfItemAffixType : uint8_t
{
    TgfItemAffixTypeNone                           = 0,
    TgfItemAffixTypeMajor                          = 10,
    TgfItemAffixTypeMinor                          = 20,
    TgfItemAffixTypeLegendary                      = 30,
    ETgfItemAffixType                              = 31

};


// Enum  LyraGame.ETgfWeaponHandType
enum class ETgfWeaponHandType : uint8_t
{
    TgfWeaponHandTypeNone                          = 0,
    TgfWeaponHandTypeRight                         = 1,
    TgfWeaponHandTypeLeft                          = 2,
    TgfWeaponHandTypeBoth                          = 3,
    ETgfWeaponHandType                             = 4

};


// Enum  LyraGame.ETgfUseAttackType
enum class ETgfUseAttackType : uint8_t
{
    TgfUseAttackTypeRight                          = 0,
    TgfUseAttackTypeLeft                           = 1,
    TgfUseAttackTypeBoth                           = 4,
    TgfUseAttackTypeAdditional                     = 11,
    TgfUseAttackTypeBaseValue                      = 41,
    TgfUseAttackTypeDPH                            = 42,
    ETgfUseAttackType                              = 43

};


// Enum  LyraGame.ETgfAnimAttrValueType
enum class ETgfAnimAttrValueType : uint8_t
{
    TgfAnimAttrValueTypeNone                       = 0,
    TgfAnimAttrValueTypeAttackWeight               = 1,
    TgfAnimAttrValueTypeDefendValue                = 2,
    TgfAnimAttrValueTypeGuardedDefendValue         = 3,
    ETgfAnimAttrValueType                          = 4

};


// Enum  LyraGame.ETgfGameplayEffectActiveType
enum class ETgfGameplayEffectActiveType : uint8_t
{
    TgfGameplayEffectActiveTypeActive              = 0,
    TgfGameplayEffectActiveTypeInActive            = 1,
    ETgfGameplayEffectActiveType                   = 2

};


// Enum  LyraGame.ETgfGameplayEffectSkillType
enum class ETgfGameplayEffectSkillType : uint8_t
{
    TgfGameplayEffectSkillTypeNone                 = 0,
    TgfGameplayEffectSkillTypeWeapon               = 1,
    TgfGameplayEffectSkillTypeSkill                = 2,
    TgfGameplayEffectSkillTypeItem                 = 3,
    TgfGameplayEffectSkillTypeLevel                = 10,
    TgfGameplayEffectSkillTypeMonster              = 11,
    TgfGameplayEffectSkillTypePassive              = 40,
    TgfGameplayEffectSkillTypeCooldown             = 101,
    ETgfGameplayEffectSkillType                    = 102

};


// Enum  LyraGame.ETgfBattleAffixType
enum class ETgfBattleAffixType : uint8_t
{
    EN                                             = 0,
    EN                                             = 5,
    EN                                             = 10,
    EN                                             = 20,
    EN                                             = 30,
    EN                                             = 31

};


// Enum  LyraGame.ETgfEscapeMapHintType
enum class ETgfEscapeMapHintType : uint8_t
{
    TgfEscapeHintNone                              = 0,
    TgfEscapeHintPortalBlueHandling                = 1,
    TgfEscapeHintScrollsKeyShowing                 = 2,
    TgfEscapeHintPortalRedHandling                 = 3,
    TgfEscapeHintFixPortalBlueSpawn                = 4,
    TgfEscapeHintFixPortalRedSpawn                 = 5,
    TgfEscapeHintPortalShadowHandling              = 6,
    TgfEscapeHintPortalShadowSpawn                 = 7,
    ETgfEscapeMapHintType                          = 8

};


// Enum  LyraGame.ETgfIntraGameDisplayInfoType
enum class ETgfIntraGameDisplayInfoType : uint8_t
{
    TgfIntraGameDisplayInfoType                    = 0,
    TgfIntraGameDisplayInfoType                    = 1,
    TgfIntraGameDisplayInfoType                    = 2,
    TgfIntraGameDisplayInfoType                    = 3,
    TgfIntraGameDisplayInfoType                    = 4,
    TgfIntraGameDisplayInfoType                    = 5,
    TgfIntraGameDisplayInfoType                    = 6,
    TgfIntraGameDisplayInfoType                    = 7

};


// Enum  LyraGame.ETgfDisplayInfoKillSubType
enum class ETgfDisplayInfoKillSubType : uint8_t
{
    TgfDisplayKillSubType                          = 0,
    TgfDisplayKillSubType                          = 1,
    TgfDisplayKillSubType                          = 2,
    TgfDisplayKillSubType                          = 3,
    TgfDisplayKillSubType                          = 4,
    TgfDisplayKillSubType                          = 5,
    TgfDisplayKillSubType                          = 6,
    TgfDisplayKillSubType                          = 7,
    TgfDisplayKillSubType                          = 8,
    TgfDisplayKillSubType                          = 9,
    TgfDisplayKillSubType                          = 10

};


// Enum  LyraGame.ETgfDisplayInfoPortalSubType
enum class ETgfDisplayInfoPortalSubType : uint8_t
{
    TgfDisplayPortalSubType                        = 0,
    TgfDisplayPortalSubType                        = 1,
    TgfDisplayPortalSubType                        = 2,
    TgfDisplayPortalSubType                        = 3,
    TgfDisplayPortalSubType                        = 4,
    TgfDisplayPortalSubType                        = 5,
    TgfDisplayPortalSubType                        = 6,
    TgfDisplayPortalSubType                        = 7,
    TgfDisplayPortalSubType                        = 8,
    TgfDisplayPortalSubType                        = 9,
    TgfDisplayPortalSubType                        = 10,
    TgfDisplayPortalSubType                        = 11,
    TgfDisplayPortalSubType                        = 12,
    TgfDisplayPortalSubType                        = 13,
    TgfDisplayPortalSubType                        = 14,
    TgfDisplayPortalSubType                        = 15,
    TgfDisplayPortalSubType                        = 16,
    TgfDisplayPortalSubType                        = 17

};


// Enum  LyraGame.ETgfDisplayInfoDropSubType
enum class ETgfDisplayInfoDropSubType : uint8_t
{
    ETgfDisplayDropSubType                         = 0,
    ETgfDisplayDropSubType                         = 1,
    ETgfDisplayDropSubType                         = 2

};


// Enum  LyraGame.ETgfDisplayInfoCharaSubType
enum class ETgfDisplayInfoCharaSubType : uint8_t
{
    ETgfDisplayCharaSubType                        = 0,
    ETgfDisplayCharaSubType                        = 1,
    ETgfDisplayCharaSubType                        = 2,
    ETgfDisplayCharaSubType                        = 3

};


// Enum  LyraGame.ETgfDisplayInfoAbilitySubType
enum class ETgfDisplayInfoAbilitySubType : uint8_t
{
    ETgfDisplayInfoAbilitySubType                  = 0,
    ETgfDisplayInfoAbilitySubType                  = 1,
    ETgfDisplayInfoAbilitySubType                  = 2,
    ETgfDisplayInfoAbilitySubType                  = 3

};


// Enum  LyraGame.ETgfDisplayInfoStateTagSubType
enum class ETgfDisplayInfoStateTagSubType : uint8_t
{
    ETgfDisplayInfoStateTagSubType                 = 0,
    ETgfDisplayInfoStateTagSubType                 = 1,
    ETgfDisplayInfoStateTagSubType                 = 2

};


// Enum  LyraGame.ETgfDisplayAgingType
enum class ETgfDisplayAgingType : uint8_t
{
    TgfBattleHintMessageType                       = 0,
    TgfBattleHintMessageType                       = 1,
    TgfBattleHintMessageType                       = 2,
    TgfBattleHintMessageType                       = 3

};


// Enum  LyraGame.ETgfInterableType
enum class ETgfInterableType : uint8_t
{
    TgfInterableTypeNone                           = 0,
    TgfInterableTypeTorch                          = 1,
    TgfInterableTypeLamp                           = 2,
    TgfInterableTypeAltar                          = 11,
    TgfInterableTypeDoor                           = 21,
    TgfInterableTypeSwitch                         = 22,
    TgfInterableTypeControlled                     = 23,
    TgfInterableTypeCollectable                    = 31,
    TgfInterableTypeChest                          = 41,
    TgfInterableTypeFlawlessTrialChest             = 42,
    TgfInterableTypeExtractDevice                  = 51,
    TgfInterableTypeExtractDevice                  = 52,
    TgfInterableTypeDestroyable                    = 61,
    TgfInterableTypeLoot                           = 71,
    ETgfInterableType                              = 72

};


// Enum  LyraGame.ETgfAttributeCondition
enum class ETgfAttributeCondition : uint8_t
{
    TgfAttributeConditionNone                      = 0,
    TgfAttributeConditionHPGE80                    = 1,
    TgfAttributeConditionHPLE35                    = 2,
    TgfAttributeConditionHasShield                 = 3,
    TgfAttributeConditionElementAttack             = 4,
    ETgfAttributeCondition                         = 5

};


// Enum  LyraGame.ETgfAttributeTarget
enum class ETgfAttributeTarget : uint8_t
{
    TgfAttributeTargetNone                         = 0,
    TgfAttributeTargetSourceSelf                   = 1,
    TgfAttributeTargetSourceOpponent               = 2,
    TgfAttributeTargetTargetSelf                   = 3,
    TgfAttributeTargetTargetOpponent               = 4,
    ETgfAttributeTarget                            = 5

};


// Enum  LyraGame.ETgfDeathState
enum class ETgfDeathState : uint8_t
{
    NotDead                                        = 0,
    DeathStarted                                   = 1,
    DeathFinished                                  = 2,
    Resurrecting                                   = 3,
    Escaping                                       = 4,
    OnlySpectator                                  = 5,
    ETgfDeathState                                 = 6

};


// Enum  LyraGame.ETgfBriefMapType
enum class ETgfBriefMapType : uint8_t
{
    TgfBriefMapType                                = 0,
    TgfBriefMapType                                = 1,
    TgfBriefMapType                                = 2,
    TgfBriefMapType                                = 3

};


// Enum  LyraGame.EAnimConfigDirection
enum class EAnimConfigDirection : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    Right                                          = 2,
    Left                                           = 3,
    EAnimConfigDirection                           = 4

};


// Enum  LyraGame.EAnimConfigDirection8
enum class EAnimConfigDirection8 : uint8_t
{
    Forward                                        = 0,
    ForwardRight                                   = 1,
    Right                                          = 2,
    RightBackward                                  = 3,
    Backward                                       = 4,
    BackwardLeft                                   = 5,
    Left                                           = 6,
    LeftForward                                    = 7,
    EAnimConfigDirection8                          = 8

};


// Enum  LyraGame.ETgfAxisName
enum class ETgfAxisName : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    NX                                             = 4,
    NY                                             = 5,
    NZ                                             = 6,
    ETgfAxisName                                   = 7

};


// Enum  LyraGame.ETgfCharacterMaterialCloakType
enum class ETgfCharacterMaterialCloakType : uint8_t
{
    TgfCharacterMaterialCloakTypeNone              = 0,
    TgfCharacterMaterialCloakTypeTeammateOrLocal   = 1,
    TgfCharacterMaterialCloakTypeEnemy             = 2,
    TgfCharacterMaterialCloakTypeEnemyLight        = 3,
    ETgfCharacterMaterialCloakType                 = 4

};


// Enum  LyraGame.ECharacterMaterialEnum
enum class ECharacterMaterialEnum : uint8_t
{
    TgfCharacterMaterialNone                       = 0,
    TgfCharacterMaterialDropOut                    = 1,
    TgfCharacterMaterialCloak                      = 2,
    ECharacterMaterialEnum                         = 3

};


// Enum  LyraGame.ETgfFovConfigChangeType
enum class ETgfFovConfigChangeType : uint8_t
{
    None                                           = 0,
    Cosmetic                                       = 1,
    AnimNotify                                     = 2,
    ETgfFovConfigChangeType                        = 3

};


// Enum  LyraGame.ETgfChargeTimestampType
enum class ETgfChargeTimestampType : uint8_t
{
    StartTimestamp                                 = 0,
    FirstLevelSucceedTimestamp                     = 1,
    SecondLevelSucceedTimestamp                    = 2,
    ThirdLevelSucceedTimestamp                     = 3,
    ETgfChargeTimestampType                        = 4

};


// Enum  LyraGame.ESnapMoveType
enum class ESnapMoveType : uint8_t
{
    None                                           = 0,
    LocationXY                                     = 1,
    LocationZ                                      = 2,
    RotationX                                      = 4,
    RotationY                                      = 8,
    ESnapMoveType                                  = 9

};


// Enum  LyraGame.ETgfAuraDeathPolicy
enum class ETgfAuraDeathPolicy : uint8_t
{
    Remove                                         = 0,
    PauseEffect                                    = 1,
    ETgfAuraDeathPolicy                            = 2

};


// Enum  LyraGame.ETgfAuraCoolDownPolicy
enum class ETgfAuraCoolDownPolicy : uint8_t
{
    None                                           = 0,
    IndividuallyForEachTarget                      = 1,
    Shared                                         = 2,
    ETgfAuraCoolDownPolicy                         = 3

};


// Enum  LyraGame.ETgfAuraNetExecutionPolicy
enum class ETgfAuraNetExecutionPolicy : uint8_t
{
    ServerOnly                                     = 0,
    ClientOnly                                     = 1,
    Both                                           = 2,
    ETgfAuraNetExecutionPolicy                     = 3

};


// Enum  LyraGame.EWidgetDirection
enum class EWidgetDirection : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    EWidgetDirection                               = 3

};


// Enum  LyraGame.ETgfSkillType
enum class ETgfSkillType : uint8_t
{
    None                                           = 0,
    Damage                                         = 1,
    Heal                                           = 2,
    Movement                                       = 3,
    Defend                                         = 4,
    Investigate                                    = 5,
    Dot                                            = 6,
    Buff                                           = 7,
    Debuff                                         = 8,
    Repel                                          = 9,
    Remote                                         = 10,
    AOE                                            = 11,
    Magic                                          = 12,
    ETgfSkillType                                  = 13

};


// Enum  LyraGame.EHurtNotifyType
enum class EHurtNotifyType : uint8_t
{
    None                                           = 0,
    Heal                                           = 1,
    Damage                                         = 2,
    DamageFire                                     = 3,
    DamageIce                                      = 4,
    DamageThunder                                  = 5,
    DamageShadow                                   = 6,
    DamageHoly                                     = 7,
    DamageFixed                                    = 8,
    Magic                                          = 9,
    Shield                                         = 10,
    TeammateDamage                                 = 11,
    EHurtNotifyType                                = 12

};


// Enum  LyraGame.EHurtNotifyAnimType
enum class EHurtNotifyAnimType : uint8_t
{
    Normal                                         = 0,
    HighFrequency                                  = 1,
    Special1                                       = 2,
    Special2                                       = 3,
    Special3                                       = 4,
    Special4                                       = 5,
    Special5                                       = 6,
    EHurtNotifyAnimType                            = 7

};


// Enum  LyraGame.EHealthBarType
enum class EHealthBarType : uint8_t
{
    None                                           = 0,
    HealthOnly                                     = 1,
    Magic                                          = 2,
    SoulEnergy                                     = 3,
    Sword                                          = 4,
    NaturalEnergy                                  = 5,
    Reserved1                                      = 6,
    Reserved2                                      = 7,
    EHealthBarType                                 = 8

};


// Enum  LyraGame.ELocalBuffState
enum class ELocalBuffState : uint8_t
{
    None                                           = 0,
    Start                                          = 1,
    Pause                                          = 2,
    End                                            = 3,
    ELocalBuffState                                = 4

};


// Enum  LyraGame.EFollowMode
enum class EFollowMode : uint8_t
{
    ForceFollow                                    = 0,
    Kinematics                                     = 1,
    EFollowMode                                    = 2

};


// Enum  LyraGame.ETgfInventoryType
enum class ETgfInventoryType : uint8_t
{
    None                                           = 0,
    InGameLocalPlayer                              = 1,
    InGameLoot                                     = 2,
    InGameInspector                                = 3,
    Lobby                                          = 32,
    Market                                         = 33,
    Storage                                        = 34,
    Trade                                          = 35,
    Fusion                                         = 36,
    Blacksmith                                     = 37,
    Activity                                       = 38,
    Mithril                                        = 39,
    Mail                                           = 40,
    SmallPack                                      = 41,
    Virtual                                        = 42,
    TradeNoRight                                   = 43,
    TradeAuction                                   = 44,
    TradeBuyItNow                                  = 45,
    MithrilResult                                  = 46,
    CommonTips                                     = 47,
    ETgfInventoryType                              = 48

};


// Enum  LyraGame.ETgfInventoryRequirementQueryResult
enum class ETgfInventoryRequirementQueryResult : uint8_t
{
    NotAnEquipment                                 = 0,
    RequirementsMeet                               = 1,
    CareerMismatch                                 = 2,
    EquipmentTypeIncompatible                      = 3,
    LevelInsufficient                              = 4,
    ETgfInventoryRequirementQueryResult            = 5

};


// Enum  LyraGame.EnItemStorageType
enum class EnItemStorageType : uint8_t
{
    EN                                             = 0,
    EN                                             = 1,
    EN                                             = 2,
    EN                                             = 3,
    EN                                             = 4,
    EN                                             = 5

};


// Enum  LyraGame.ETGFBriefMapViewBorderType
enum class ETGFBriefMapViewBorderType : uint8_t
{
    BorderTop                                      = 0,
    BorderRight                                    = 1,
    BorderBottom                                   = 2,
    BorderLeft                                     = 3,
    ETGFBriefMapViewBorderType                     = 4

};


// Enum  LyraGame.ETgfPawnMeshType
enum class ETgfPawnMeshType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Avatar                                         = 2,
    Equipment                                      = 4,
    ETgfPawnMeshType                               = 5

};


// Enum  LyraGame.ETgfCharaMatStateType
enum class ETgfCharaMatStateType : uint8_t
{
    TgfCharaMatState                               = 0,
    TgfCharaMatState                               = 1,
    TgfCharaMatState                               = 2,
    TgfCharaMatState                               = 3,
    TgfCharaMatState                               = 4,
    TgfCharaMatState                               = 5,
    TgfCharaMatState                               = 6,
    TgfCharaMatState                               = 7,
    TgfCharaMatState                               = 41,
    TgfCharaMatState                               = 42,
    TgfCharaMatState                               = 43

};


// Enum  LyraGame.ERangedWeaponActionType
enum class ERangedWeaponActionType : uint8_t
{
    None                                           = 0,
    Draw                                           = 1,
    ToFire                                         = 2,
    ToReload                                       = 3,
    ToADS                                          = 4,
    CancelADS                                      = 5,
    End                                            = 6,
    ERangedWeaponActionType                        = 7

};


// Enum  LyraGame.ERangedWeaponStateType
enum class ERangedWeaponStateType : uint8_t
{
    NormalIdle                                     = 0,
    ArrowIdle                                      = 1,
    ERangedWeaponStateType                         = 2

};


// Enum  LyraGame.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
    NotRouted                                      = 0,
    RelevantAllConnections                         = 1,
    Spatialize                                     = 2,
    Spatialize                                     = 3,
    Spatialize                                     = 4,
    NotSet                                         = 5,
    EClassRepNodeMapping                           = 6

};


// Enum  LyraGame.ESpectatorWidgetMode
enum class ESpectatorWidgetMode : uint8_t
{
    None                                           = 0,
    Confirm                                        = 1,
    CountDown                                      = 2,
    ESpectatorWidgetMode                           = 3

};


// Enum  LyraGame.ESpectatingTargetType
enum class ESpectatingTargetType : uint8_t
{
    None                                           = 0,
    Teammate                                       = 1,
    Enemy                                          = 2,
    NoTarget                                       = 3,
    SpectatingActor                                = 4,
    ESpectatingTargetType                          = 5

};


// Enum  LyraGame.ETgfStencilRef
enum class ETgfStencilRef : uint8_t
{
    Default                                        = 0,
    FirstPersonPlayer                              = 4,
    CollectableFlickerEffect                       = 8,
    InteractableOutlineEffect                      = 64,
    DruidAbilityOutline                            = 160,
    TeammateSilhouette                             = 192,
    ETgfStencilRef                                 = 193

};


// Enum  LyraGame.ETgfStencilTypeBaseValue
enum class ETgfStencilTypeBaseValue : uint8_t
{
    Default                                        = 0,
    FirstPersonPlayer                              = 3,
    CollectableFlickerEffect                       = 4,
    OutlineEffect                                  = 6,
    ETgfStencilTypeBaseValue                       = 7

};


// Enum  LyraGame.ETgfStencilOutlineSubtype
enum class ETgfStencilOutlineSubtype : uint8_t
{
    Default                                        = 0,
    Interactable                                   = 2,
    DruidAbility                                   = 16,
    TeammateSilhouette                             = 32,
    ETgfStencilOutlineSubtype                      = 33

};


// Enum  LyraGame.ECallSource
enum class ECallSource : uint8_t
{
    Client                                         = 0,
    Server                                         = 1,
    ECallSource                                    = 2

};


// Enum  LyraGame.ETgfMonsterSelectTargetType
enum class ETgfMonsterSelectTargetType : uint8_t
{
    Random                                         = 0,
    Threat                                         = 1,
    Distance                                       = 2,
    ETgfMonsterSelectTargetType                    = 3

};


// Enum  LyraGame.ETgfMonsterTargetOverflowType
enum class ETgfMonsterTargetOverflowType : uint8_t
{
    RandomPos                                      = 0,
    MultiTrigger                                   = 1,
    Ignore                                         = 2,
    ETgfMonsterTargetOverflowType                  = 3

};


// Enum  LyraGame.ELyraAbilityActivationPolicy
enum class ELyraAbilityActivationPolicy : uint8_t
{
    OnInputTriggered                               = 0,
    WhileInputActive                               = 1,
    TriggerOrWhileBySetting                        = 2,
    OnSpawn                                        = 3,
    ELyraAbilityActivationPolicy                   = 4

};


// Enum  LyraGame.ELyraAbilityActivationGroup
enum class ELyraAbilityActivationGroup : uint8_t
{
    Independent                                    = 0,
    Exclusive                                      = 1,
    Exclusive                                      = 2,
    MAX                                            = 3

};


// Enum  LyraGame.ETgfGameplayCueNotify
enum class ETgfGameplayCueNotify : uint8_t
{
    ETgfGameplayCueNotify                          = 0,
    ETgfGameplayCueNotify                          = 1,
    ETgfGameplayCueNotify                          = 2,
    ETgfGameplayCueNotify                          = 3,
    ETgfGameplayCueNotify                          = 4,
    ETgfGameplayCueNotify                          = 5,
    ETgfGameplayCueNotify                          = 6,
    ETgfGameplayCueNotify                          = 7

};


// Enum  LyraGame.ETgfFirstPersonRestrict
enum class ETgfFirstPersonRestrict : uint8_t
{
    None                                           = 0,
    RestrictInstigator                             = 1,
    RestrictTarget                                 = 2,
    RestrictNotTarget                              = 3,
    ETgfFirstPersonRestrict                        = 4

};


// Enum  LyraGame.ETgfThreeValueRestrict
enum class ETgfThreeValueRestrict : uint8_t
{
    None                                           = 0,
    RestrictTrue                                   = 1,
    RestrictFalse                                  = 2,
    ETgfThreeValueRestrict                         = 3

};


// Enum  LyraGame.ETgfExecutionModifierTriggerType
enum class ETgfExecutionModifierTriggerType : uint8_t
{
    GameplatEffectExecution                        = 0,
    ETgfExecutionModifierTriggerType               = 1

};


// Enum  LyraGame.ETgfExecutionModifierAffectType
enum class ETgfExecutionModifierAffectType : uint8_t
{
    Source                                         = 0,
    Target                                         = 1,
    ETgfExecutionModifierAffectType                = 2

};


// Enum  LyraGame.EPhaseTagMatchType
enum class EPhaseTagMatchType : uint8_t
{
    ExactMatch                                     = 0,
    PartialMatch                                   = 1,
    EPhaseTagMatchType                             = 2

};


// Enum  LyraGame.ETgfTrackingDashType
enum class ETgfTrackingDashType : uint8_t
{
    StopDash                                       = 0,
    KeepDash                                       = 1,
    ETgfTrackingDashType                           = 2

};


// Enum  LyraGame.ELyraPlayRateModifyKey
enum class ELyraPlayRateModifyKey : uint8_t
{
    Basic                                          = 0,
    MontageChase                                   = 1,
    ELyraPlayRateModifyKey                         = 2

};


// Enum  LyraGame.ELyraCameraModeBlendFunction
enum class ELyraCameraModeBlendFunction : uint8_t
{
    Linear                                         = 0,
    EaseIn                                         = 1,
    EaseOut                                        = 2,
    EaseInOut                                      = 3,
    COUNT                                          = 4,
    ELyraCameraModeBlendFunction                   = 5

};


// Enum  LyraGame.EPortalTagType
enum class EPortalTagType : uint8_t
{
    None                                           = 0,
    Red                                            = 1,
    Blue                                           = 2,
    EPortalTagType                                 = 3

};


// Enum  LyraGame.ELyraDeathState
enum class ELyraDeathState : uint8_t
{
    NotDead                                        = 0,
    DeathStarted                                   = 1,
    DeathFinished                                  = 2,
    ELyraDeathState                                = 3

};


// Enum  LyraGame.ETgfInputTagType
enum class ETgfInputTagType : uint8_t
{
    ETgfInputTagType                               = 0,
    ETgfInputTagType                               = 1,
    ETgfInputTagType                               = 2

};


// Enum  LyraGame.ETgfCharaPart
enum class ETgfCharaPart : uint8_t
{
    FullBody                                       = 0,
    Chest                                          = 1,
    Glove                                          = 2,
    Helmet                                         = 3,
    Shoe                                           = 4,
    Thigh                                          = 5,
    BodyHead                                       = 6,
    Cloak                                          = 7,
    Beard                                          = 8,
    Count                                          = 9,
    ETgfCharaPart                                  = 10

};


// Enum  LyraGame.ETgfMontageEntryType
enum class ETgfMontageEntryType : uint8_t
{
    NoFilter                                       = 0,
    Begin1                                         = 1,
    Begin2                                         = 2,
    Begin3                                         = 3,
    CastToSelf                                     = 10,
    Cast1                                          = 11,
    Cast2                                          = 12,
    Cast3                                          = 13,
    Cancel1                                        = 21,
    Cancel2                                        = 22,
    Cancel3                                        = 23,
    End1                                           = 31,
    End2                                           = 32,
    End3                                           = 33,
    HitAnim1                                       = 41,
    HitAnim2                                       = 42,
    HitAnim3                                       = 43,
    ETgfMontageEntryType                           = 44

};


// Enum  LyraGame.ECosmeticCheatMode
enum class ECosmeticCheatMode : uint8_t
{
    ReplaceParts                                   = 0,
    AddParts                                       = 1,
    ECosmeticCheatMode                             = 2

};


// Enum  LyraGame.ETGFCharacterPartSource
enum class ETGFCharacterPartSource : uint8_t
{
    SourceNone                                     = 0,
    Natural                                        = 1,
    NaturalSuppressedViaCheat                      = 2,
    AppliedViaDeveloperSettingsCheat               = 3,
    AppliedViaCheatManager                         = 4,
    ETGFCharacterPartSource                        = 5

};


// Enum  LyraGame.ECheatExecutionTime
enum class ECheatExecutionTime : uint8_t
{
    OnCheatManagerCreated                          = 0,
    OnPlayerPawnPossession                         = 1,
    ECheatExecutionTime                            = 2

};


// Enum  LyraGame.ETgfEquipMapType
enum class ETgfEquipMapType : uint8_t
{
    Normal                                         = 0,
    Gearset                                        = 1,
    ETgfEquipMapType                               = 2

};


// Enum  LyraGame.EContextEffectsLibraryLoadState
enum class EContextEffectsLibraryLoadState : uint8_t
{
    Unloaded                                       = 0,
    Loading                                        = 1,
    Loaded                                         = 2,
    EContextEffectsLibraryLoadState                = 3

};


// Enum  LyraGame.ETgfMatchType
enum class ETgfMatchType : uint8_t
{
    None                                           = 0,
    PVPVE                                          = 1,
    PVP                                            = 11,
    PVP                                            = 12,
    HOMELAND                                       = 31,
    PVP                                            = 32,
    Onboarding                                     = 33,
    FlawlessTrial                                  = 34,
    ETgfMatchType                                  = 35

};


// Enum  LyraGame.EDeadzoneStick
enum class EDeadzoneStick : uint8_t
{
    MoveStick                                      = 0,
    LookStick                                      = 1,
    EDeadzoneStick                                 = 2

};


// Enum  LyraGame.ELyraTargetingType
enum class ELyraTargetingType : uint8_t
{
    Normal                                         = 0,
    ADS                                            = 1,
    ELyraTargetingType                             = 2

};


// Enum  LyraGame.ELyraFramePacingMode
enum class ELyraFramePacingMode : uint8_t
{
    DesktopStyle                                   = 0,
    ConsoleStyle                                   = 1,
    MobileStyle                                    = 2,
    ELyraFramePacingMode                           = 3

};


// Enum  LyraGame.ELyraPlayerConnectionType
enum class ELyraPlayerConnectionType : uint8_t
{
    Player                                         = 0,
    LiveSpectator                                  = 1,
    ReplaySpectator                                = 2,
    InactivePlayer                                 = 3,
    ELyraPlayerConnectionType                      = 4

};


// Enum  LyraGame.EStorageLimit
enum class EStorageLimit : uint8_t
{
    MB                                             = 0,
    MB                                             = 1,
    GB                                             = 2,
    Unlimited                                      = 3,
    EStorageLimit                                  = 4

};


// Enum  LyraGame.ETGFVideoSettingType
enum class ETGFVideoSettingType : uint8_t
{
    TGFVIDEOSETTINGTYPE                            = 0,
    TGFVIDEOSETTINGTYPE                            = 1,
    TGFVIDEOSETTINGTYPE                            = 2,
    TGFVIDEOSETTINGTYPE                            = 3,
    TGFVIDEOSETTINGTYPE                            = 4,
    TGFVIDEOSETTINGTYPE                            = 5,
    TGFVIDEOSETTINGTYPE                            = 6,
    TGFVIDEOSETTINGTYPE                            = 7,
    TGFVIDEOSETTINGTYPE                            = 8,
    TGFVIDEOSETTINGTYPE                            = 9,
    TGFVIDEOSETTINGTYPE                            = 10,
    TGFVIDEOSETTINGTYPE                            = 11,
    TGFVIDEOSETTINGTYPE                            = 12,
    TGFVIDEOSETTINGTYPE                            = 13,
    TGFVIDEOSETTINGTYPE                            = 14,
    TGFVIDEOSETTINGTYPE                            = 15,
    TGFVIDEOSETTINGTYPE                            = 16

};


// Enum  LyraGame.EColorBlindMode
enum class EColorBlindMode : uint8_t
{
    Off                                            = 0,
    Deuteranope                                    = 1,
    Protanope                                      = 2,
    Tritanope                                      = 3,
    EColorBlindMode                                = 4

};


// Enum  LyraGame.ELyraAllowBackgroundAudioSetting
enum class ELyraAllowBackgroundAudioSetting : uint8_t
{
    Off                                            = 0,
    AllSounds                                      = 1,
    Num                                            = 2,
    ELyraAllowBackgroundAudioSetting               = 3

};


// Enum  LyraGame.ESocialPermission
enum class ESocialPermission : uint8_t
{
    Block                                          = 0,
    FriendOnly                                     = 1,
    Allow                                          = 2,
    ESocialPermission                              = 3

};


// Enum  LyraGame.ELyraGamepadSensitivity
enum class ELyraGamepadSensitivity : uint8_t
{
    Invalid                                        = 0,
    Slow                                           = 1,
    SlowPlus                                       = 2,
    SlowPlusPlus                                   = 3,
    Normal                                         = 4,
    NormalPlus                                     = 5,
    NormalPlusPlus                                 = 6,
    Fast                                           = 7,
    FastPlus                                       = 8,
    FastPlusPlus                                   = 9,
    Insane                                         = 10,
    MAX                                            = 11

};


// Enum  LyraGame.TgfActorIntStatisticType
enum class TgfActorIntStatisticType : uint8_t
{
    TgfActorIntStatisticTypeNone                   = 0,
    TgfActorIntStatisticTypeKillingType            = 1,
    TgfActorIntStatisticTypeKillingActorStatId     = 2,
    TgfActorIntStatisticTypeInteractingStatId      = 3,
    TgfActorIntStatisticTypeMovingArea             = 4,
    TgfActorIntStatisticTypeLooting                = 5,
    TgfActorIntStatisticTypeGameplayAbility        = 6,
    TgfActorIntStatisticTypeActionType             = 11,
    TgfActorIntStatisticTypeActorDieNum            = 51,
    TgfActorIntStatisticTypeResurrectOtherNum      = 52,
    TgfActorIntStatisticTypeDestroyingObject       = 53,
    TgfActorIntStatisticType                       = 54

};


// Enum  LyraGame.TgfActorFloatStatisticType
enum class TgfActorFloatStatisticType : uint8_t
{
    TgfActorFloatStatisticTypeNone                 = 0,
    TgfActorFloatStatisticTypeAlivingStartTime     = 1,
    TgfActorFloatStatisticTypeAlivingTotalTime     = 2,
    TgfActorFloatStatisticTypeCausedTotalDamage    = 3,
    TgfActorFloatStatisticTypeCausedTotalHeal      = 4,
    TgfActorFloatStatisticTypeGotTotalDamage       = 5,
    TgfActorFloatStatisticTypeAdditionalExp        = 6,
    TgfActorFloatStatisticTypeCausedPlayerTotalDamage = 7,
    TgfActorFloatStatisticType                     = 8

};


// Enum  LyraGame.TgfActorRelationStatisticType
enum class TgfActorRelationStatisticType : uint8_t
{
    TgfActorRelationStatisticTypeNone              = 0,
    TgfActorRelationStatisticTypeResurrect         = 1,
    TgfActorRelationStatisticTypeBeResurrected     = 2,
    TgfActorRelationStatisticType                  = 3

};


// Enum  LyraGame.EBlueprintExposedNetMode
enum class EBlueprintExposedNetMode : uint8_t
{
    Standalone                                     = 0,
    DedicatedServer                                = 1,
    ListenServer                                   = 2,
    Client                                         = 3,
    EBlueprintExposedNetMode                       = 4

};


// Enum  LyraGame.ELyraTeamComparison
enum class ELyraTeamComparison : uint8_t
{
    OnSameTeam                                     = 0,
    DifferentTeams                                 = 1,
    InvalidArgument                                = 2,
    ELyraTeamComparison                            = 3

};


// Enum  LyraGame.EActorCanvasProjectionMode
enum class EActorCanvasProjectionMode : uint8_t
{
    ComponentPoint                                 = 0,
    ComponentBoundingBox                           = 1,
    ComponentScreenBoundingBox                     = 2,
    ActorBoundingBox                               = 3,
    ActorScreenBoundingBox                         = 4,
    EActorCanvasProjectionMode                     = 5

};


// Enum  LyraGame.ELyraWidgetInputMode
enum class ELyraWidgetInputMode : uint8_t
{
    Default                                        = 0,
    GameAndMenu                                    = 1,
    Game                                           = 2,
    Menu                                           = 3,
    ELyraWidgetInputMode                           = 4

};


// Enum  LyraGame.ELyraAbilityTargetingSource
enum class ELyraAbilityTargetingSource : uint8_t
{
    CameraTowardsFocus                             = 0,
    PawnForward                                    = 1,
    PawnTowardsFocus                               = 2,
    WeaponForward                                  = 3,
    WeaponTowardsFocus                             = 4,
    Custom                                         = 5,
    ELyraAbilityTargetingSource                    = 6

};


// Enum  CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
    COND                                           = 0,
    COND                                           = 1,
    COND                                           = 2,
    COND                                           = 3,
    COND                                           = 4,
    COND                                           = 5,
    COND                                           = 6,
    COND                                           = 7,
    COND                                           = 8,
    COND                                           = 9,
    COND                                           = 10,
    COND                                           = 11,
    COND                                           = 12,
    COND                                           = 13,
    COND                                           = 15,
    COND                                           = 16,
    COND                                           = 17

};


// Enum  CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
    CaseSensitive                                  = 0,
    IgnoreCase                                     = 1,
    ESearchCase                                    = 2

};


// Enum  CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
    FromStart                                      = 0,
    FromEnd                                        = 1,
    ESearchDir                                     = 2

};


// Enum  CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
    None                                           = 0,
    UTC                                            = 1,
    SinceGStartTime                                = 2,
    Local                                          = 3,
    ELogTimes                                      = 4

};


// Enum  CoreUObject.EAxis
enum class EAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EAxis                                          = 4

};


// Enum  CoreUObject.EAxisList
enum class EAxisList : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 4,
    Screen                                         = 8,
    XY                                             = 3,
    XZ                                             = 5,
    YZ                                             = 6,
    XYZ                                            = 7,
    All                                            = 15,
    ZRotation                                      = 6,
    Rotate2D                                       = 8,
    EAxisList                                      = 16

};


// Enum  CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
    PF                                             = 0,
    PF                                             = 1,
    PF                                             = 2,
    PF                                             = 3,
    PF                                             = 4,
    PF                                             = 5,
    PF                                             = 6,
    PF                                             = 7,
    PF                                             = 8,
    PF                                             = 9,
    PF                                             = 10,
    PF                                             = 11,
    PF                                             = 12,
    PF                                             = 13,
    PF                                             = 14,
    PF                                             = 15,
    PF                                             = 16,
    PF                                             = 17,
    PF                                             = 18,
    PF                                             = 19,
    PF                                             = 20,
    PF                                             = 21,
    PF                                             = 22,
    PF                                             = 23,
    PF                                             = 24,
    PF                                             = 25,
    PF                                             = 26,
    PF                                             = 27,
    PF                                             = 28,
    PF                                             = 29,
    PF                                             = 30,
    PF                                             = 31,
    PF                                             = 32,
    PF                                             = 33,
    PF                                             = 34,
    PF                                             = 35,
    PF                                             = 36,
    PF                                             = 37,
    PF                                             = 38,
    PF                                             = 39,
    PF                                             = 40,
    PF                                             = 41,
    PF                                             = 42,
    PF                                             = 43,
    PF                                             = 44,
    PF                                             = 45,
    PF                                             = 46,
    PF                                             = 47,
    PF                                             = 48,
    PF                                             = 49,
    PF                                             = 50,
    PF                                             = 51,
    PF                                             = 52,
    PF                                             = 53,
    PF                                             = 54,
    PF                                             = 55,
    PF                                             = 56,
    PF                                             = 57,
    PF                                             = 58,
    PF                                             = 59,
    PF                                             = 60,
    PF                                             = 61,
    PF                                             = 62,
    PF                                             = 63,
    PF                                             = 64,
    PF                                             = 65,
    PF                                             = 66,
    PF                                             = 67,
    PF                                             = 68,
    PF                                             = 69,
    PF                                             = 70,
    PF                                             = 71,
    PF                                             = 72,
    PF                                             = 78,
    PF                                             = 79,
    PF                                             = 80,
    PF                                             = 81,
    PF                                             = 82,
    PF                                             = 83,
    PF                                             = 84,
    PF                                             = 85,
    PF                                             = 86

};


// Enum  CoreUObject.EUnit
enum class EUnit : uint8_t
{
    Micrometers                                    = 0,
    Millimeters                                    = 1,
    Centimeters                                    = 2,
    Meters                                         = 3,
    Kilometers                                     = 4,
    Inches                                         = 5,
    Feet                                           = 6,
    Yards                                          = 7,
    Miles                                          = 8,
    Lightyears                                     = 9,
    Degrees                                        = 10,
    Radians                                        = 11,
    CentimetersPerSecond                           = 12,
    MetersPerSecond                                = 13,
    KilometersPerHour                              = 14,
    MilesPerHour                                   = 15,
    Celsius                                        = 16,
    Farenheit                                      = 17,
    Kelvin                                         = 18,
    Micrograms                                     = 19,
    Milligrams                                     = 20,
    Grams                                          = 21,
    Kilograms                                      = 22,
    MetricTons                                     = 23,
    Ounces                                         = 24,
    Pounds                                         = 25,
    Stones                                         = 26,
    Newtons                                        = 27,
    PoundsForce                                    = 28,
    KilogramsForce                                 = 29,
    Hertz                                          = 30,
    Kilohertz                                      = 31,
    Megahertz                                      = 32,
    Gigahertz                                      = 33,
    RevolutionsPerMinute                           = 34,
    Bytes                                          = 35,
    Kilobytes                                      = 36,
    Megabytes                                      = 37,
    Gigabytes                                      = 38,
    Terabytes                                      = 39,
    Lumens                                         = 40,
    Milliseconds                                   = 46,
    Seconds                                        = 47,
    Minutes                                        = 48,
    Hours                                          = 49,
    Days                                           = 50,
    Months                                         = 51,
    Years                                          = 52,
    Multiplier                                     = 55,
    Percentage                                     = 54,
    Unspecified                                    = 56,
    EUnit                                          = 57

};


// Enum  CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
    Default                                        = 0,
    Never                                          = 1,
    Always                                         = 2,
    EPropertyAccessChangeNotifyMode                = 3

};


// Enum  CoreUObject.EAppReturnType
enum class EAppReturnType : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    YesAll                                         = 2,
    NoAll                                          = 3,
    Cancel                                         = 4,
    Ok                                             = 5,
    Retry                                          = 6,
    Continue                                       = 7,
    EAppReturnType                                 = 8

};


// Enum  CoreUObject.EAppMsgType
enum class EAppMsgType : uint8_t
{
    Ok                                             = 0,
    YesNo                                          = 1,
    OkCancel                                       = 2,
    YesNoCancel                                    = 3,
    CancelRetryContinue                            = 4,
    YesNoYesAllNoAll                               = 5,
    YesNoYesAllNoAllCancel                         = 6,
    YesNoYesAll                                    = 7,
    EAppMsgType                                    = 8

};


// Enum  CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    NotValidated                                   = 2,
    EDataValidationResult                          = 3

};


// Enum  AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
    Transform                                      = 0,
    Aim                                            = 1,
    MAX                                            = 2

};


// Enum  AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
    Translation                                    = 0,
    Rotation                                       = 1,
    Scale                                          = 2,
    Parent                                         = 3,
    LookAt                                         = 4,
    ETransformConstraintType                       = 5

};


// Enum  InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    AnyHand                                        = 2,
    Pad                                            = 3,
    ExternalCamera                                 = 4,
    Gun                                            = 5,
    HMD                                            = 6,
    Special                                        = 7,
    Special                                        = 8,
    Special                                        = 9,
    Special                                        = 10,
    Special                                        = 11,
    Special                                        = 12,
    Special                                        = 13,
    Special                                        = 14,
    Special                                        = 15,
    Special                                        = 16,
    Special                                        = 17,
    ControllerHand                                 = 18,
    EControllerHand                                = 19

};


// Enum  InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
    None                                           = 0,
    XBoxOne                                        = 1,
    PS4                                            = 2,
    EConsoleForGamepadLabels                       = 3

};


// Enum  InputCore.ETouchType
enum class ETouchType : uint8_t
{
    Began                                          = 0,
    Moved                                          = 1,
    Stationary                                     = 2,
    ForceChanged                                   = 3,
    FirstMove                                      = 4,
    Ended                                          = 5,
    NumTypes                                       = 6,
    ETouchType                                     = 7

};


// Enum  SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
    DownAndUp                                      = 0,
    MouseDown                                      = 1,
    MouseUp                                        = 2,
    PreciseClick                                   = 3,
    EButtonClickMethod                             = 4

};


// Enum  SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
    DownAndUp                                      = 0,
    Down                                           = 1,
    PreciseTap                                     = 2,
    EButtonTouchMethod                             = 3

};


// Enum  SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
    DownAndUp                                      = 0,
    ButtonPress                                    = 1,
    ButtonRelease                                  = 2,
    EButtonPressMethod                             = 3

};


// Enum  SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
    Accept                                         = 0,
    Back                                           = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EUINavigationAction                            = 4

};


// Enum  SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
    FocusedWidget                                  = 0,
    WidgetUnderCursor                              = 1,
    ENavigationSource                              = 2

};


// Enum  SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
    Keyboard                                       = 0,
    Controller                                     = 1,
    User                                           = 2,
    ENavigationGenesis                             = 3

};


// Enum  SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
    Scroll                                         = 0,
    Scroll                                         = 1,
    Scroll                                         = 2

};


// Enum  SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
    MouseMove                                      = 0,
    MouseEnter                                     = 1,
    MouseLeave                                     = 2,
    PreviewMouseButtonDown                         = 3,
    MouseButtonDown                                = 4,
    MouseButtonUp                                  = 5,
    MouseButtonDoubleClick                         = 6,
    MouseWheel                                     = 7,
    TouchStart                                     = 8,
    TouchEnd                                       = 9,
    TouchForceChanged                              = 10,
    TouchFirstMove                                 = 11,
    TouchMoved                                     = 12,
    DragDetected                                   = 13,
    DragEnter                                      = 14,
    DragLeave                                      = 15,
    DragOver                                       = 16,
    DragDrop                                       = 17,
    DropMessage                                    = 18,
    PreviewKeyDown                                 = 19,
    KeyDown                                        = 20,
    KeyUp                                          = 21,
    KeyChar                                        = 22,
    AnalogInput                                    = 23,
    TouchGesture                                   = 24,
    MotionDetected                                 = 25,
    MAX                                            = 26

};


// Enum  SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
    MouseCaptureGained                             = 0,
    MouseCaptureLost                               = 1,
    ESlateDebuggingStateChangeEvent                = 2

};


// Enum  SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
    Unknown                                        = 0,
    Explicit                                       = 1,
    CustomDelegateBound                            = 2,
    CustomDelegateUnbound                          = 3,
    NextOrPrevious                                 = 4,
    HitTestGrid                                    = 5,
    ESlateDebuggingNavigationMethod                = 6

};


// Enum  SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
    FocusChanging                                  = 0,
    FocusLost                                      = 1,
    FocusReceived                                  = 2,
    MAX                                            = 3

};


// Enum  SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
    Default                                        = 0,
    Auto                                           = 1,
    AutoLight                                      = 2,
    Monochrome                                     = 3,
    None                                           = 4,
    EFontHinting                                   = 5

};


// Enum  SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
    LazyLoad                                       = 0,
    Stream                                         = 1,
    Inline                                         = 2,
    EFontLoadingPolicy                             = 3

};


// Enum  SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
    Metrics                                        = 0,
    BoundingBox                                    = 1,
    EFontLayoutMethod                              = 2

};


// Enum  SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
    Mouse                                          = 0,
    Navigation                                     = 1,
    SetDirectly                                    = 2,
    Cleared                                        = 3,
    OtherWidgetLostFocus                           = 4,
    WindowActivate                                 = 5,
    EFocusCause                                    = 6

};


// Enum  SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
    WhenScrollingPossible                          = 0,
    Always                                         = 1,
    Never                                          = 2,
    EConsumeMouseWheel                             = 3

};


// Enum  SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
    ActiveWindow                                   = 0,
    MainWindow                                     = 1,
    ESlateParentWindowSearchMethod                 = 2

};


// Enum  SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
    CheckBox                                       = 0,
    ToggleButton                                   = 1,
    ESlateCheckBoxType                             = 2

};


// Enum  SlateCore.EStyleColor
enum class EStyleColor : uint8_t
{
    Black                                          = 0,
    Background                                     = 1,
    Title                                          = 2,
    WindowBorder                                   = 3,
    Foldout                                        = 4,
    Input                                          = 5,
    InputOutline                                   = 6,
    Recessed                                       = 7,
    Panel                                          = 8,
    Header                                         = 9,
    Dropdown                                       = 10,
    DropdownOutline                                = 11,
    Hover                                          = 12,
    Hover2                                         = 13,
    White                                          = 14,
    White25                                        = 15,
    Highlight                                      = 16,
    Primary                                        = 17,
    PrimaryHover                                   = 18,
    PrimaryPress                                   = 19,
    Secondary                                      = 20,
    Foreground                                     = 21,
    ForegroundHover                                = 22,
    ForegroundInverted                             = 23,
    ForegroundHeader                               = 24,
    Select                                         = 25,
    SelectInactive                                 = 26,
    SelectParent                                   = 27,
    SelectHover                                    = 28,
    Notifications                                  = 29,
    AccentBlue                                     = 30,
    AccentPurple                                   = 31,
    AccentPink                                     = 32,
    AccentRed                                      = 33,
    AccentOrange                                   = 34,
    AccentYellow                                   = 35,
    AccentGreen                                    = 36,
    AccentBrown                                    = 37,
    AccentBlack                                    = 38,
    AccentGray                                     = 39,
    AccentWhite                                    = 40,
    AccentFolder                                   = 41,
    Warning                                        = 42,
    Error                                          = 43,
    Success                                        = 44,
    User1                                          = 45,
    User2                                          = 46,
    User3                                          = 47,
    User4                                          = 48,
    User5                                          = 49,
    User6                                          = 50,
    User7                                          = 51,
    User8                                          = 52,
    User9                                          = 53,
    User10                                         = 54,
    User11                                         = 55,
    User12                                         = 56,
    User13                                         = 57,
    User14                                         = 58,
    User15                                         = 59,
    User16                                         = 60,
    MAX                                            = 61

};


// Enum  Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
    None                                           = 0,
    Single                                         = 1,
    SingleToggle                                   = 2,
    Multi                                          = 3,
    ESelectionMode                                 = 4

};


// Enum  Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
    List                                           = 0,
    Tile                                           = 1,
    Tree                                           = 2,
    ETableViewMode                                 = 3

};


// Enum  Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
    MenuBar                                        = 0,
    ToolBar                                        = 1,
    VerticalToolBar                                = 2,
    SlimHorizontalToolBar                          = 3,
    UniformToolBar                                 = 4,
    Menu                                           = 5,
    ButtonRow                                      = 6,
    EMultiBoxType                                  = 7

};


// Enum  Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
    None                                           = 0,
    ButtonRow                                      = 1,
    EditableText                                   = 2,
    Heading                                        = 3,
    MenuEntry                                      = 4,
    Separator                                      = 5,
    ToolBarButton                                  = 6,
    ToolBarComboButton                             = 7,
    Widget                                         = 8,
    EMultiBlockType                                = 9

};


// Enum  Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
    IntoView                                       = 0,
    TopOrLeft                                      = 1,
    Center                                         = 2,
    BottomOrRight                                  = 3,
    EDescendantScrollDestination                   = 4

};


// Enum  Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
    NoScroll                                       = 0,
    InstantScroll                                  = 1,
    AnimatedScroll                                 = 2,
    EScrollWhenFocusChanges                        = 3

};


// Enum  Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
    None                                           = 0,
    Visible                                        = 1,
    Hidden                                         = 2,
    ECustomizedToolMenuVisibility                  = 3

};


// Enum  Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
    None                                           = 0,
    Button                                         = 1,
    ToggleButton                                   = 2,
    RadioButton                                    = 3,
    Check                                          = 4,
    CollapsedButton                                = 5,
    EUserInterfaceActionType                       = 6

};


// Enum  Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    NumChords                                      = 2,
    EMultipleKeyBindingIndex                       = 3

};


// Enum  Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
    Both                                           = 0,
    DownOnly                                       = 1,
    UpOnly                                         = 2,
    EStretchDirection                              = 3

};


// Enum  Slate.EStretch
enum class EStretch : uint8_t
{
    None                                           = 0,
    Fill                                           = 1,
    ScaleToFit                                     = 2,
    ScaleToFitX                                    = 3,
    ScaleToFitY                                    = 4,
    ScaleToFill                                    = 5,
    ScaleBySafeZone                                = 6,
    UserSpecified                                  = 7,
    UserSpecifiedWithClipping                      = 8,
    EStretch                                       = 9

};


// Enum  Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
    LeftToRight                                    = 0,
    RightToLeft                                    = 1,
    FillFromCenter                                 = 2,
    FillFromCenterHorizontal                       = 3,
    FillFromCenterVertical                         = 4,
    TopToBottom                                    = 5,
    BottomToTop                                    = 6,
    EProgressBarFillType                           = 7

};


// Enum  Slate.EProgressBarFillStyle
enum class EProgressBarFillStyle : uint8_t
{
    Mask                                           = 0,
    Scale                                          = 1,
    EProgressBarFillStyle                          = 2

};


// Enum  Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
    EvenlyDistributed                              = 0,
    EvenlySize                                     = 1,
    EvenlyWide                                     = 2,
    LeftAligned                                    = 3,
    RightAligned                                   = 4,
    CenterAligned                                  = 5,
    Fill                                           = 6,
    EListItemAlignment                             = 7

};


// Enum  ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
    PNG                                            = 0,
    JPG                                            = 1,
    BMP                                            = 2,
    EXR                                            = 3,
    EDesiredImageFormat                            = 4

};


// Enum  MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
    NoFiltering                                    = 0,
    PCF                                            = 1,
    PCF                                            = 2,
    PCF                                            = 3,
    EMobileShadowQuality                           = 4

};


// Enum  EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
    NotConnected                                   = 0,
    NotTracking                                    = 1,
    Tracking                                       = 2,
    EEyeTrackerStatus                              = 3

};


// Enum  EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    ETwoPlayerSplitScreenType                      = 2

};


// Enum  EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
    FavorTop                                       = 0,
    FavorBottom                                    = 1,
    Vertical                                       = 2,
    Horizontal                                     = 3,
    EThreePlayerSplitScreenType                    = 4

};


// Enum  EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
    Grid                                           = 0,
    Vertical                                       = 1,
    Horizontal                                     = 2,
    EFourPlayerSplitScreenType                     = 3

};


// Enum  EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
    ExactClass                                     = 0,
    IsChildOf                                      = 1,
    ESubLevelStripMode                             = 2

};


// Enum  Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4

};


// Enum  Chaos.EWaveFunctionType
enum class EWaveFunctionType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4

};


// Enum  Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4

};


// Enum  Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3

};


// Enum  Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3

};


// Enum  Chaos.EFieldFilterType
enum class EFieldFilterType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5,
    Field                                          = 6

};


// Enum  Chaos.EFieldObjectType
enum class EFieldObjectType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5

};


// Enum  Chaos.EFieldPositionType
enum class EFieldPositionType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2

};


// Enum  Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5

};


// Enum  Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5,
    Field                                          = 6,
    Field                                          = 7,
    Field                                          = 8,
    Field                                          = 9,
    Field                                          = 10,
    Field                                          = 11,
    Field                                          = 12,
    Field                                          = 13,
    Field                                          = 14,
    Field                                          = 15,
    Field                                          = 16,
    Field                                          = 17,
    Field                                          = 18,
    Field                                          = 19,
    Field                                          = 20

};


// Enum  Chaos.EFieldVectorType
enum class EFieldVectorType : uint8_t
{
    Vector                                         = 0,
    Vector                                         = 1,
    Vector                                         = 2,
    Vector                                         = 3,
    Vector                                         = 4,
    Vector                                         = 5,
    Vector                                         = 6,
    Vector                                         = 7,
    Vector                                         = 8,
    Vector                                         = 9

};


// Enum  Chaos.EFieldScalarType
enum class EFieldScalarType : uint8_t
{
    Scalar                                         = 0,
    Scalar                                         = 1,
    Scalar                                         = 2,
    Scalar                                         = 3,
    Scalar                                         = 4,
    Scalar                                         = 5,
    Scalar                                         = 6,
    Scalar                                         = 7

};


// Enum  Chaos.EFieldIntegerType
enum class EFieldIntegerType : uint8_t
{
    Integer                                        = 0,
    Integer                                        = 1,
    Integer                                        = 2,
    Integer                                        = 3,
    Integer                                        = 4,
    Integer                                        = 5,
    Integer                                        = 6

};


// Enum  Chaos.EFieldOutputType
enum class EFieldOutputType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3

};


// Enum  Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5

};


// Enum  Chaos.EConvexOverlapRemoval
enum class EConvexOverlapRemoval : uint8_t
{
    None                                           = 0,
    All                                            = 1,
    OnlyClusters                                   = 2,
    OnlyClustersVsClusters                         = 3,
    EConvexOverlapRemoval                          = 4

};


// Enum  Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2

};


// Enum  Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 5,
    Chaos                                          = 6

};


// Enum  Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 100,
    Chaos                                          = 101

};


// Enum  Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 5,
    Chaos                                          = 6,
    Chaos                                          = 7,
    Chaos                                          = 8,
    Chaos                                          = 9,
    Chaos                                          = 10,
    Chaos                                          = 11,
    Chaos                                          = 12,
    Chaos                                          = 13

};


// Enum  Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2

};


// Enum  Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2

};


// Enum  Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
    Fixed                                          = 0,
    Variable                                       = 1,
    VariableCapped                                 = 2,
    VariableCappedWithTarget                       = 3,
    EChaosSolverTickMode                           = 4

};


// Enum  Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
    DedicatedThread                                = 0,
    TaskGraph                                      = 1,
    SingleThread                                   = 2,
    Num                                            = 3,
    Invalid                                        = 4,
    EChaosThreadingMode                            = 5

};


// Enum  Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
    Double                                         = 0,
    Triple                                         = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EChaosBufferMode                               = 4

};


// Enum  Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
    PointImplicit                                  = 0,
    DelaunayTriangulation                          = 1,
    MinimalSpanningSubsetDelaunayTriangulation     = 2,
    PointImplicitAugmentedWithMinimalDelaunay      = 3,
    BoundsOverlapFilteredDelaunayTriangulation     = 4,
    None                                           = 5,
    EClusterUnionMethod                            = 6

};


// Enum  Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
    None                                           = 0,
    Record                                         = 1,
    Play                                           = 2,
    RecordAndPlay                                  = 3,
    EGeometryCollectionCacheType                   = 4

};


// Enum  PhysicsCore.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
    CTF                                            = 0,
    CTF                                            = 1,
    CTF                                            = 2,
    CTF                                            = 3,
    CTF                                            = 4

};


// Enum  PhysicsCore.EPhysicsType
enum class EPhysicsType : uint8_t
{
    PhysType                                       = 0,
    PhysType                                       = 1,
    PhysType                                       = 2,
    PhysType                                       = 3

};


// Enum  PhysicsCore.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
    BodyCollision                                  = 0,
    BodyCollision                                  = 1,
    BodyCollision                                  = 2

};


// Enum  PhysicsCore.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
    SurfaceType                                    = 0,
    SurfaceType1                                   = 1,
    SurfaceType2                                   = 2,
    SurfaceType3                                   = 3,
    SurfaceType4                                   = 4,
    SurfaceType5                                   = 5,
    SurfaceType6                                   = 6,
    SurfaceType7                                   = 7,
    SurfaceType8                                   = 8,
    SurfaceType9                                   = 9,
    SurfaceType10                                  = 10,
    SurfaceType11                                  = 11,
    SurfaceType12                                  = 12,
    SurfaceType13                                  = 13,
    SurfaceType14                                  = 14,
    SurfaceType15                                  = 15,
    SurfaceType16                                  = 16,
    SurfaceType17                                  = 17,
    SurfaceType18                                  = 18,
    SurfaceType19                                  = 19,
    SurfaceType20                                  = 20,
    SurfaceType21                                  = 21,
    SurfaceType22                                  = 22,
    SurfaceType23                                  = 23,
    SurfaceType24                                  = 24,
    SurfaceType25                                  = 25,
    SurfaceType26                                  = 26,
    SurfaceType27                                  = 27,
    SurfaceType28                                  = 28,
    SurfaceType29                                  = 29,
    SurfaceType30                                  = 30,
    SurfaceType31                                  = 31,
    SurfaceType32                                  = 32,
    SurfaceType33                                  = 33,
    SurfaceType34                                  = 34,
    SurfaceType35                                  = 35,
    SurfaceType36                                  = 36,
    SurfaceType37                                  = 37,
    SurfaceType38                                  = 38,
    SurfaceType39                                  = 39,
    SurfaceType40                                  = 40,
    SurfaceType41                                  = 41,
    SurfaceType42                                  = 42,
    SurfaceType43                                  = 43,
    SurfaceType44                                  = 44,
    SurfaceType45                                  = 45,
    SurfaceType46                                  = 46,
    SurfaceType47                                  = 47,
    SurfaceType48                                  = 48,
    SurfaceType49                                  = 49,
    SurfaceType50                                  = 50,
    SurfaceType51                                  = 51,
    SurfaceType52                                  = 52,
    SurfaceType53                                  = 53,
    SurfaceType54                                  = 54,
    SurfaceType55                                  = 55,
    SurfaceType56                                  = 56,
    SurfaceType57                                  = 57,
    SurfaceType58                                  = 58,
    SurfaceType59                                  = 59,
    SurfaceType60                                  = 60,
    SurfaceType61                                  = 61,
    SurfaceType62                                  = 62,
    SurfaceType                                    = 63,
    EPhysicalSurface                               = 64

};


// Enum  PhysicsCore.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
    RIF                                            = 0,
    RIF                                            = 1,
    RIF                                            = 2

};


// Enum  PhysicsCore.ESleepFamily
enum class ESleepFamily : uint8_t
{
    Normal                                         = 0,
    Sensitive                                      = 1,
    Custom                                         = 2,
    ESleepFamily                                   = 3

};


// Enum  PhysicsCore.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
    ACM                                            = 0,
    ACM                                            = 1,
    ACM                                            = 2,
    ACM                                            = 3

};


// Enum  PhysicsCore.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
    Frame1                                         = 0,
    Frame2                                         = 1,
    EConstraintFrame                               = 2

};


// Enum  PhysicsCore.EConstraintPlasticityType
enum class EConstraintPlasticityType : uint8_t
{
    CCPT                                           = 0,
    CCPT                                           = 1,
    CCPT                                           = 2,
    CCPT                                           = 3

};


// Enum  PhysicsCore.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
    LCM                                            = 0,
    LCM                                            = 1,
    LCM                                            = 2,
    LCM                                            = 3

};


// Enum  PhysicsCore.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
    Average                                        = 0,
    Min                                            = 1,
    Multiply                                       = 2,
    Max                                            = 3

};


// Enum  MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
    None                                           = 0,
    Confidence                                     = 1,
    Block                                          = 2,
    EMeshTrackerVertexColorMode                    = 3

};


// Enum  AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
    Unknown                                        = 0,
    Tracking                                       = 1,
    NotTracking                                    = 2,
    StoppedTracking                                = 3,
    EARTrackingState                               = 4

};


// Enum  AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
    None                                           = 0,
    GenerateMeshData                               = 1,
    RenderMeshDataInWireframe                      = 2,
    GenerateCollisionForMeshData                   = 4,
    GenerateNavMeshForMeshData                     = 8,
    UseMeshDataForOcclusion                        = 16,
    EARSessionConfigFlags                          = 17

};


// Enum  AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowNetworkRole                                = 1,
    ShowClassification                             = 2,
    EPlaneComponentDebugMode                       = 3

};


// Enum  AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowEyeVectors                                 = 1,
    ShowFaceMesh                                   = 2,
    EFaceComponentDebugMode                        = 3

};


// Enum  AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
    ComponentOnly                                  = 0,
    ComponentLocationTrackedRotation               = 1,
    ComponentWithTracked                           = 2,
    TrackingOnly                                   = 3,
    EARFaceTransformMixing                         = 4

};


// Enum  AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowDetectedImage                              = 1,
    EImageComponentDebugMode                       = 2

};


// Enum  AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowQRCode                                     = 1,
    EQRCodeComponentDebugMode                      = 2

};


// Enum  AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowSkeleton                                   = 1,
    EPoseComponentDebugMode                        = 2

};


// Enum  AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowGeoData                                    = 1,
    EGeoAnchorComponentDebugMode                   = 2

};


// Enum  AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
    UnknownError                                   = 0,
    UnknownChecking                                = 1,
    UnknownTimedOut                                = 2,
    UnsupportedDeviceNotCapable                    = 3,
    SupportedNotInstalled                          = 4,
    SupportedVersionTooOld                         = 5,
    SupportedInstalled                             = 6,
    EARServiceAvailability                         = 7

};


// Enum  AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
    Installed                                      = 0,
    DeviceNotCompatible                            = 1,
    UserDeclinedInstallation                       = 2,
    FatalError                                     = 3,
    EARServiceInstallRequestResult                 = 4

};


// Enum  AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
    Granted                                        = 0,
    Denied                                         = 1,
    EARServicePermissionRequestResult              = 2

};


// Enum  AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
    Initializing                                   = 0,
    Localized                                      = 1,
    Localizing                                     = 2,
    NotAvailable                                   = 3,
    EARGeoTrackingState                            = 4

};


// Enum  AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
    None                                           = 0,
    NotAvailableAtLocation                         = 1,
    NeedLocationPermissions                        = 2,
    DevicePointedTooLow                            = 3,
    WorldTrackingUnstable                          = 4,
    WaitingForLocation                             = 5,
    GeoDataNotLoaded                               = 6,
    VisualLocalizationFailed                       = 7,
    WaitingForAvailabilityCheck                    = 8,
    EARGeoTrackingStateReason                      = 9

};


// Enum  AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
    Undetermined                                   = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    EARGeoTrackingAccuracy                         = 4

};


// Enum  AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
    Gravity                                        = 0,
    GravityAndHeading                              = 1,
    Camera                                         = 2,
    EARWorldAlignment                              = 3

};


// Enum  AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
    None                                           = 0,
    Orientation                                    = 1,
    World                                          = 2,
    Face                                           = 3,
    Image                                          = 4,
    ObjectScanning                                 = 5,
    PoseTracking                                   = 6,
    GeoTracking                                    = 7,
    EARSessionType                                 = 8

};


// Enum  AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
    None                                           = 0,
    HorizontalPlaneDetection                       = 1,
    VerticalPlaneDetection                         = 2,
    EARPlaneDetectionMode                          = 3

};


// Enum  AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
    None                                           = 0,
    AmbientLightEstimate                           = 1,
    DirectionalLightEstimate                       = 2,
    EARLightEstimationMode                         = 3

};


// Enum  AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
    SyncTickWithCameraImage                        = 0,
    SyncTickWithoutCameraImage                     = 1,
    EARFrameSyncMode                               = 2

};


// Enum  AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
    None                                           = 0,
    Manual                                         = 1,
    Automatic                                      = 2,
    EAREnvironmentCaptureProbeType                 = 3

};


// Enum  AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
    CurvesAndGeo                                   = 0,
    CurvesOnly                                     = 1,
    EARFaceTrackingUpdate                          = 2

};


// Enum  AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
    None                                           = 0,
    PoseDetection2D                                = 1,
    PersonSegmentation                             = 2,
    PersonSegmentationWithDepth                    = 3,
    SceneDepth                                     = 4,
    SmoothedSceneDepth                             = 5,
    EARSessionTrackingFeature                      = 6

};


// Enum  AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
    None                                           = 0,
    MeshOnly                                       = 1,
    MeshWithClassification                         = 2,
    EARSceneReconstruction                         = 3

};


// Enum  AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
    Unknown                                        = 0,
    CameraImage                                    = 1,
    CameraDepth                                    = 2,
    EnvironmentCapture                             = 3,
    PersonSegmentationImage                        = 4,
    PersonSegmentationDepth                        = 5,
    SceneDepthMap                                  = 6,
    SceneDepthConfidenceMap                        = 7,
    EARTextureType                                 = 8

};


// Enum  AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
    Unkown                                         = 0,
    Low                                            = 1,
    High                                           = 2,
    EARDepthQuality                                = 3

};


// Enum  AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
    Unkown                                         = 0,
    Approximate                                    = 1,
    Accurate                                       = 2,
    EARDepthAccuracy                               = 3

};


// Enum  AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
    FaceRelative                                   = 0,
    FaceMirrored                                   = 1,
    EARFaceTrackingDirection                       = 2

};


// Enum  AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
    EyeBlinkLeft                                   = 0,
    EyeLookDownLeft                                = 1,
    EyeLookInLeft                                  = 2,
    EyeLookOutLeft                                 = 3,
    EyeLookUpLeft                                  = 4,
    EyeSquintLeft                                  = 5,
    EyeWideLeft                                    = 6,
    EyeBlinkRight                                  = 7,
    EyeLookDownRight                               = 8,
    EyeLookInRight                                 = 9,
    EyeLookOutRight                                = 10,
    EyeLookUpRight                                 = 11,
    EyeSquintRight                                 = 12,
    EyeWideRight                                   = 13,
    JawForward                                     = 14,
    JawLeft                                        = 15,
    JawRight                                       = 16,
    JawOpen                                        = 17,
    MouthClose                                     = 18,
    MouthFunnel                                    = 19,
    MouthPucker                                    = 20,
    MouthLeft                                      = 21,
    MouthRight                                     = 22,
    MouthSmileLeft                                 = 23,
    MouthSmileRight                                = 24,
    MouthFrownLeft                                 = 25,
    MouthFrownRight                                = 26,
    MouthDimpleLeft                                = 27,
    MouthDimpleRight                               = 28,
    MouthStretchLeft                               = 29,
    MouthStretchRight                              = 30,
    MouthRollLower                                 = 31,
    MouthRollUpper                                 = 32,
    MouthShrugLower                                = 33,
    MouthShrugUpper                                = 34,
    MouthPressLeft                                 = 35,
    MouthPressRight                                = 36,
    MouthLowerDownLeft                             = 37,
    MouthLowerDownRight                            = 38,
    MouthUpperUpLeft                               = 39,
    MouthUpperUpRight                              = 40,
    BrowDownLeft                                   = 41,
    BrowDownRight                                  = 42,
    BrowInnerUp                                    = 43,
    BrowOuterUpLeft                                = 44,
    BrowOuterUpRight                               = 45,
    CheekPuff                                      = 46,
    CheekSquintLeft                                = 47,
    CheekSquintRight                               = 48,
    NoseSneerLeft                                  = 49,
    NoseSneerRight                                 = 50,
    TongueOut                                      = 51,
    HeadYaw                                        = 52,
    HeadPitch                                      = 53,
    HeadRoll                                       = 54,
    LeftEyeYaw                                     = 55,
    LeftEyePitch                                   = 56,
    LeftEyeRoll                                    = 57,
    RightEyeYaw                                    = 58,
    RightEyePitch                                  = 59,
    RightEyeRoll                                   = 60,
    MAX                                            = 61

};


// Enum  AugmentedReality.EAREye
enum class EAREye : uint8_t
{
    LeftEye                                        = 0,
    RightEye                                       = 1,
    EAREye                                         = 2

};


// Enum  AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
    Camera                                         = 0,
    QRCode                                         = 1,
    SpatialMapping                                 = 2,
    SceneUnderstanding                             = 3,
    HandMesh                                       = 4,
    EARCaptureType                                 = 5

};


// Enum  AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
    None                                           = 0,
    FeaturePoint                                   = 1,
    GroundPlane                                    = 2,
    PlaneUsingExtent                               = 4,
    PlaneUsingBoundaryPolygon                      = 8,
    EARLineTraceChannels                           = 9

};


// Enum  AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
    NotTracking                                    = 0,
    OrientationOnly                                = 1,
    OrientationAndPosition                         = 2,
    EARTrackingQuality                             = 3

};


// Enum  AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
    None                                           = 0,
    Initializing                                   = 1,
    Relocalizing                                   = 2,
    ExcessiveMotion                                = 3,
    InsufficientFeatures                           = 4,
    InsufficientLight                              = 5,
    BadState                                       = 6,
    EARTrackingQualityReason                       = 7

};


// Enum  AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
    NotStarted                                     = 0,
    Running                                        = 1,
    NotSupported                                   = 2,
    FatalError                                     = 3,
    PermissionNotGranted                           = 4,
    UnsupportedConfiguration                       = 5,
    Other                                          = 6,
    EARSessionStatus                               = 7

};


// Enum  AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
    NotAvailable                                   = 0,
    StillMappingNotRelocalizable                   = 1,
    StillMappingRelocalizable                      = 2,
    Mapped                                         = 3,
    EARWorldMappingState                           = 4

};


// Enum  AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Diagonal                                       = 2,
    EARPlaneOrientation                            = 3

};


// Enum  AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
    NotApplicable                                  = 0,
    Unknown                                        = 1,
    Wall                                           = 2,
    Ceiling                                        = 3,
    Floor                                          = 4,
    Table                                          = 5,
    Seat                                           = 6,
    Face                                           = 7,
    Image                                          = 8,
    World                                          = 9,
    SceneObject                                    = 10,
    HandMesh                                       = 11,
    Door                                           = 12,
    Window                                         = 13,
    EARObjectClassification                        = 14

};


// Enum  AugmentedReality.EARSpatialMeshUsageFlags
enum class EARSpatialMeshUsageFlags : uint8_t
{
    NotApplicable                                  = 0,
    Visible                                        = 1,
    Collision                                      = 2,
    EARSpatialMeshUsageFlags                       = 3

};


// Enum  AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
    Model                                          = 0,
    ParentJoint                                    = 1,
    EARJointTransformSpace                         = 2

};


// Enum  AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
    Precise                                        = 0,
    Coarse                                         = 1,
    UserDefined                                    = 2,
    Unknown                                        = 3,
    EARAltitudeSource                              = 4

};


// Enum  AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
    Landscape                                      = 0,
    Portrait                                       = 1,
    EARCandidateImageOrientation                   = 2

};


// Enum  HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
    Orientation                                    = 0,
    Position                                       = 1,
    OrientationAndPosition                         = 2,
    EOrientPositionSelector                        = 3

};


// Enum  HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
    Floor                                          = 0,
    Eye                                            = 1,
    Stage                                          = 2,
    EHMDTrackingOrigin                             = 3

};


// Enum  HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
    Unknown                                        = 0,
    Worn                                           = 1,
    NotWorn                                        = 2,
    EHMDWornState                                  = 3

};


// Enum  HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
    NoTrackingSystem                               = 0,
    FeatureNotSupported                            = 1,
    NoValidViewport                                = 2,
    MiscFailure                                    = 3,
    Success                                        = 4,
    EXRDeviceConnectionResult                      = 5

};


// Enum  HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
    NoFlags                                        = 0,
    IsAR                                           = 1,
    IsTablet                                       = 2,
    IsHeadMounted                                  = 4,
    SupportsHandTracking                           = 8,
    EXRSystemFlags                                 = 9

};


// Enum  HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
    Disabled                                       = 0,
    SingleEyeLetterboxed                           = 1,
    Undistorted                                    = 2,
    Distorted                                      = 3,
    SingleEye                                      = 4,
    SingleEyeCroppedToFill                         = 5,
    Texture                                        = 6,
    TexturePlusEye                                 = 7,
    ESpectatorScreenMode                           = 8

};


// Enum  HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
    HeadMountedDisplay                             = 0,
    Controller                                     = 1,
    TrackingReference                              = 2,
    Other                                          = 3,
    Invalid                                        = 254,
    Any                                            = 255,
    EXRTrackedDeviceType                           = 256

};


// Enum  HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
    Palm                                           = 0,
    Wrist                                          = 1,
    ThumbMetacarpal                                = 2,
    ThumbProximal                                  = 3,
    ThumbDistal                                    = 4,
    ThumbTip                                       = 5,
    IndexMetacarpal                                = 6,
    IndexProximal                                  = 7,
    IndexIntermediate                              = 8,
    IndexDistal                                    = 9,
    IndexTip                                       = 10,
    MiddleMetacarpal                               = 11,
    MiddleProximal                                 = 12,
    MiddleIntermediate                             = 13,
    MiddleDistal                                   = 14,
    MiddleTip                                      = 15,
    RingMetacarpal                                 = 16,
    RingProximal                                   = 17,
    RingIntermediate                               = 18,
    RingDistal                                     = 19,
    RingTip                                        = 20,
    LittleMetacarpal                               = 21,
    LittleProximal                                 = 22,
    LittleIntermediate                             = 23,
    LittleDistal                                   = 24,
    LittleTip                                      = 25,
    EHandKeypoint                                  = 26

};


// Enum  HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
    Controller                                     = 0,
    Hand                                           = 1,
    EXRVisualType                                  = 2

};


// Enum  HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
    NotTracked                                     = 0,
    InertialOnly                                   = 1,
    Tracked                                        = 2,
    ETrackingStatus                                = 3

};


// Enum  HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
    None                                           = 0,
    Manipulation                                   = 1,
    Navigation                                     = 2,
    NavigationRails                                = 3,
    ESpatialInputGestureAxis                       = 4

};


// Enum  Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t
{
    FOLIAGEVERTEXCOLORMASK                         = 0,
    FOLIAGEVERTEXCOLORMASK                         = 1,
    FOLIAGEVERTEXCOLORMASK                         = 2,
    FOLIAGEVERTEXCOLORMASK                         = 3,
    FOLIAGEVERTEXCOLORMASK                         = 4,
    FOLIAGEVERTEXCOLORMASK                         = 5

};


// Enum  Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    MAX                                            = 4,
    EVertexColorMaskChannel                        = 5

};


// Enum  Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    LockXZ                                         = 3,
    LockYZ                                         = 4,
    EFoliageScaling                                = 5

};


// Enum  Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
    CollisionOverlap                               = 0,
    ShadeOverlap                                   = 1,
    None                                           = 2,
    ESimulationOverlap                             = 3

};


// Enum  Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
    None                                           = 0,
    CollisionOverlap                               = 1,
    ShadeOverlap                                   = 2,
    AnyOverlap                                     = 3,
    ESimulationQuery                               = 4

};


// Enum  Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
    LSE                                            = 0,
    LSE                                            = 1,
    LSE                                            = 2,
    LSE                                            = 3,
    LSE                                            = 4

};


// Enum  Landscape.ERTDrawingType
enum class ERTDrawingType : uint8_t
{
    RTAtlas                                        = 0,
    RTAtlasToNonAtlas                              = 1,
    RTNonAtlasToAtlas                              = 2,
    RTNonAtlas                                     = 3,
    RTMips                                         = 4,
    ERTDrawingType                                 = 5

};


// Enum  Landscape.EHeightmapRTType
enum class EHeightmapRTType : uint8_t
{
    HeightmapRT                                    = 0,
    HeightmapRT                                    = 1,
    HeightmapRT                                    = 2,
    HeightmapRT                                    = 3,
    HeightmapRT                                    = 4,
    HeightmapRT                                    = 5,
    HeightmapRT                                    = 6,
    HeightmapRT                                    = 7,
    HeightmapRT                                    = 8,
    HeightmapRT                                    = 9,
    HeightmapRT                                    = 10,
    HeightmapRT                                    = 11,
    HeightmapRT                                    = 12,
    HeightmapRT                                    = 13

};


// Enum  Landscape.EWeightmapRTType
enum class EWeightmapRTType : uint8_t
{
    WeightmapRT                                    = 0,
    WeightmapRT                                    = 1,
    WeightmapRT                                    = 2,
    WeightmapRT                                    = 3,
    WeightmapRT                                    = 4,
    WeightmapRT                                    = 5,
    WeightmapRT                                    = 6,
    WeightmapRT                                    = 7,
    WeightmapRT                                    = 8,
    WeightmapRT                                    = 9,
    WeightmapRT                                    = 10,
    WeightmapRT                                    = 11,
    WeightmapRT                                    = 12,
    WeightmapRT                                    = 13

};


// Enum  Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
    LSBM                                           = 0,
    LSBM                                           = 1,
    LSBM                                           = 2

};


// Enum  Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
    Clear                                          = 1,
    Clear                                          = 2,
    Clear                                          = 3,
    Clear                                          = 4

};


// Enum  Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
    LGT                                            = 0,
    LGT                                            = 1,
    LGT                                            = 2,
    LGT                                            = 3

};


// Enum  Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    EGrassScaling                                  = 3

};


// Enum  Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    ESplineModulationColorMask                     = 4

};


// Enum  Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t
{
    LSMO                                           = 0,
    LSMO                                           = 1,
    LSMO                                           = 2

};


// Enum  Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
    LB                                             = 0,
    LB                                             = 1,
    LB                                             = 2,
    LB                                             = 3

};


// Enum  Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
    TCMT                                           = 0,
    TCMT                                           = 1,
    TCMT                                           = 2,
    TCMT                                           = 3,
    TCMT                                           = 4

};


// Enum  Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
    LCCT                                           = 0,
    LCCT                                           = 1,
    LCCT                                           = 2,
    LCCT                                           = 3,
    LCCT                                           = 4,
    LCCT                                           = 5

};


// Enum  Landscape.ELandscapeResizeMode
enum class ELandscapeResizeMode : uint8_t
{
    Resample                                       = 0,
    Clip                                           = 1,
    Expand                                         = 2,
    ELandscapeResizeMode                           = 3

};


// Enum  Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
    Additive                                       = 0,
    Layered                                        = 1,
    ELandscapeImportAlphamapType                   = 2

};


// Enum  Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
    None                                           = 0,
    UseMaxLayers                                   = 1,
    ExistingOnly                                   = 2,
    UseComponentAllowList                          = 3,
    ELandscapeLayerPaintingRestriction             = 4

};


// Enum  Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
    Default                                        = 0,
    Alphabetical                                   = 1,
    UserSpecific                                   = 2,
    ELandscapeLayerDisplayMode                     = 3

};


// Enum  Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
    Linear                                         = 0,
    SquareRoot                                     = 1,
    ELandscapeLODFalloff                           = 2

};


// Enum  TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
    NonDropFrameTimecode                           = 0,
    DropFrameTimecode                              = 1,
    Seconds                                        = 2,
    Frames                                         = 3,
    MAX                                            = 4,
    EFrameNumberDisplayFormats                     = 5

};


// Enum  TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
    None                                           = 0,
    Timecode                                       = 1,
    PlatformTime                                   = 2,
    ETimedDataInputEvaluationType                  = 3

};


// Enum  TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
    Connected                                      = 0,
    Unresponsive                                   = 1,
    Disconnected                                   = 2,
    ETimedDataInputState                           = 3

};


// Enum  MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
    Auto                                           = 0,
    User                                           = 1,
    Break                                          = 2,
    Linear                                         = 3,
    Constant                                       = 4,
    EMovieSceneKeyInterpolation                    = 5

};


// Enum  MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
    KeepState                                      = 0,
    RestoreState                                   = 1,
    ProjectDefault                                 = 2,
    EMovieSceneCompletionMode                      = 3

};


// Enum  MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
    Stopped                                        = 0,
    Playing                                        = 1,
    Scrubbing                                      = 2,
    Jumping                                        = 3,
    Stepping                                       = 4,
    Paused                                         = 5,
    MAX                                            = 6

};


// Enum  MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
    FrameLocked                                    = 0,
    WithSubFrames                                  = 1,
    EMovieSceneEvaluationType                      = 2

};


// Enum  MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
    Tick                                           = 0,
    Platform                                       = 1,
    Audio                                          = 2,
    RelativeTimecode                               = 3,
    Timecode                                       = 4,
    PlayEveryFrame                                 = 5,
    Custom                                         = 6,
    EUpdateClockSource                             = 7

};


// Enum  MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
    None                                           = 0,
    Volatile                                       = 1,
    BlockingEvaluation                             = 2,
    InheritedFlags                                 = 1,
    EMovieSceneSequenceFlags                       = 3

};


// Enum  MovieScene.EMovieSceneServerClientMask
enum class EMovieSceneServerClientMask : uint8_t
{
    None                                           = 0,
    Server                                         = 1,
    Client                                         = 2,
    All                                            = 3,
    EMovieSceneServerClientMask                    = 4

};


// Enum  MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
    None                                           = 0,
    PreRoll                                        = 1,
    PostRoll                                       = 2,
    ESectionEvaluationFlags                        = 3

};


// Enum  MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
    Invalid                                        = 0,
    Absolute                                       = 1,
    Additive                                       = 2,
    Relative                                       = 4,
    AdditiveFromBase                               = 8,
    EMovieSceneBlendType                           = 9

};


// Enum  MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
    Static                                         = 0,
    Swept                                          = 1,
    EEvaluationMethod                              = 2

};


// Enum  MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
    Linear                                         = 0,
    SinIn                                          = 1,
    SinOut                                         = 2,
    SinInOut                                       = 3,
    QuadIn                                         = 4,
    QuadOut                                        = 5,
    QuadInOut                                      = 6,
    CubicIn                                        = 7,
    CubicOut                                       = 8,
    CubicInOut                                     = 9,
    QuartIn                                        = 10,
    QuartOut                                       = 11,
    QuartInOut                                     = 12,
    QuintIn                                        = 13,
    QuintOut                                       = 14,
    QuintInOut                                     = 15,
    ExpoIn                                         = 16,
    ExpoOut                                        = 17,
    ExpoInOut                                      = 18,
    CircIn                                         = 19,
    CircOut                                        = 20,
    CircInOut                                      = 21,
    EMovieSceneBuiltInEasing                       = 22

};


// Enum  MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
    Local                                          = 0,
    Root                                           = 1,
    Unused                                         = 2,
    EMovieSceneObjectBindingSpace                  = 3

};


// Enum  MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
    Play                                           = 0,
    Jump                                           = 1,
    Scrub                                          = 2,
    EUpdatePositionMethod                          = 3

};


// Enum  MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
    Frame                                          = 0,
    Time                                           = 1,
    MarkedFrame                                    = 2,
    EMovieScenePositionType                        = 3

};


// Enum  MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
    InnerSequence                                  = 0,
    MasterSequence                                 = 1,
    External                                       = 2,
    ESpawnOwnership                                = 3

};


// Enum  MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
    None                                           = 0,
    Normals                                        = 1,
    Tangents                                       = 2,
    WeightedNTBs                                   = 4,
    EComputeNTBsOptions                            = 5

};


// Enum  ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 5,
    Chaos                                          = 6,
    Chaos                                          = 7

};


// Enum  NetCore.ENetCloseResult
enum class ENetCloseResult : uint8_t
{
    NetDriverAlreadyExists                         = 0,
    NetDriverCreateFailure                         = 1,
    NetDriverListenFailure                         = 2,
    ConnectionLost                                 = 3,
    ConnectionTimeout                              = 4,
    FailureReceived                                = 5,
    OutdatedClient                                 = 6,
    OutdatedServer                                 = 7,
    PendingConnectionFailure                       = 8,
    NetGuidMismatch                                = 9,
    NetChecksumMismatch                            = 10,
    SecurityMalformedPacket                        = 11,
    SecurityInvalidData                            = 12,
    SecurityClosed                                 = 13,
    Unknown                                        = 14,
    Success                                        = 15,
    Extended                                       = 16,
    HostClosedConnection                           = 17,
    Disconnect                                     = 18,
    Upgrade                                        = 19,
    PreLoginFailure                                = 20,
    JoinFailure                                    = 21,
    JoinSplitFailure                               = 22,
    AddressResolutionFailed                        = 23,
    RPCDoS                                         = 24,
    Cleanup                                        = 25,
    MissingLevelPackage                            = 26,
    PacketHandlerIncomingError                     = 27,
    ZeroLastByte                                   = 28,
    ZeroSize                                       = 29,
    ReadHeaderFail                                 = 30,
    ReadHeaderExtraFail                            = 31,
    AckSequenceMismatch                            = 32,
    BunchBadChannelIndex                           = 33,
    BunchChannelNameFail                           = 34,
    BunchWrongChannelType                          = 35,
    BunchHeaderOverflow                            = 36,
    BunchDataOverflow                              = 37,
    BunchServerPackageMapExports                   = 38,
    BunchPrematureControlChannel                   = 39,
    BunchPrematureChannel                          = 40,
    BunchPrematureControlClose                     = 41,
    UnknownChannelType                             = 42,
    PrematureSend                                  = 43,
    CorruptData                                    = 44,
    SocketSendFailure                              = 45,
    BadChildConnectionIndex                        = 46,
    LogLimitInstant                                = 47,
    LogLimitSustained                              = 48,
    EncryptionFailure                              = 49,
    EncryptionTokenMissing                         = 50,
    ReceivedNetGUIDBunchFail                       = 51,
    MaxReliableExceeded                            = 52,
    ReceivedNextBunchFail                          = 53,
    ReceivedNextBunchQueueFail                     = 54,
    PartialInitialReliableDestroy                  = 55,
    PartialMergeReliableDestroy                    = 56,
    PartialInitialNonByteAligned                   = 57,
    PartialNonByteAligned                          = 58,
    PartialFinalPackageMapExports                  = 59,
    PartialTooLarge                                = 60,
    AlreadyOpen                                    = 61,
    ReliableBeforeOpen                             = 62,
    ReliableBufferOverflow                         = 63,
    RPCReliableBufferOverflow                      = 64,
    ControlChannelClose                            = 65,
    ControlChannelEndianCheck                      = 66,
    ControlChannelPlayerChannelFail                = 67,
    ControlChannelMessageUnknown                   = 68,
    ControlChannelMessageFail                      = 69,
    ControlChannelMessagePayloadFail               = 70,
    ControlChannelBunchOverflowed                  = 71,
    ControlChannelQueueBunchOverflowed             = 72,
    ClientHasMustBeMappedGUIDs                     = 73,
    ClientSentDestructionInfo                      = 74,
    UnregisteredMustBeMappedGUID                   = 75,
    ObjectReplicatorReceivedBunchFail              = 76,
    ContentBlockFail                               = 77,
    ContentBlockHeaderRepLayoutFail                = 78,
    ContentBlockHeaderIsActorFail                  = 79,
    ContentBlockHeaderObjFail                      = 80,
    ContentBlockHeaderPrematureEnd                 = 81,
    ContentBlockHeaderSubObjectActor               = 82,
    ContentBlockHeaderBadParent                    = 83,
    ContentBlockHeaderInvalidCreate                = 84,
    ContentBlockHeaderStablyNamedFail              = 85,
    ContentBlockHeaderNoSubObjectClass             = 86,
    ContentBlockHeaderUObjectSubObject             = 87,
    ContentBlockHeaderAActorSubObject              = 88,
    ContentBlockHeaderFail                         = 89,
    ContentBlockPayloadBitsFail                    = 90,
    FieldHeaderRepIndex                            = 91,
    FieldHeaderBadRepIndex                         = 92,
    FieldHeaderPayloadBitsFail                     = 93,
    FieldPayloadFail                               = 94,
    BeaconControlFlowError                         = 95,
    BeaconUnableToParsePacket                      = 96,
    BeaconAuthenticationFailure                    = 97,
    BeaconLoginInvalidIdError                      = 98,
    BeaconLoginInvalidAuthHandlerError             = 99,
    BeaconAuthError                                = 100,
    BeaconSpawnClientWorldPackageNameError         = 101,
    BeaconSpawnExistingActorError                  = 102,
    BeaconSpawnFailureError                        = 103,
    BeaconSpawnNetGUIDAckNoActor                   = 104,
    BeaconSpawnNetGUIDAckNoHost                    = 105,
    BeaconSpawnUnexpectedError                     = 106,
    FaultDisconnect                                = 107,
    NotRecoverable                                 = 108,
    ENetCloseResult                                = 109

};


// Enum  Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
    NoCollision                                    = 0,
    QueryOnly                                      = 1,
    PhysicsOnly                                    = 2,
    QueryAndPhysics                                = 3,
    ProbeOnly                                      = 4,
    QueryAndProbe                                  = 5,
    ECollisionEnabled                              = 6

};


// Enum  Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
    ECC                                            = 0,
    ECC                                            = 1,
    ECC                                            = 2,
    ECC                                            = 3,
    ECC                                            = 4,
    ECC                                            = 5,
    ECC                                            = 6,
    ECC                                            = 7,
    ECC                                            = 8,
    ECC                                            = 9,
    ECC                                            = 10,
    ECC                                            = 11,
    ECC                                            = 12,
    ECC                                            = 13,
    ECC                                            = 14,
    ECC                                            = 15,
    ECC                                            = 16,
    ECC                                            = 17,
    ECC                                            = 18,
    ECC                                            = 19,
    ECC                                            = 20,
    ECC                                            = 21,
    ECC                                            = 22,
    ECC                                            = 23,
    ECC                                            = 24,
    ECC                                            = 25,
    ECC                                            = 26,
    ECC                                            = 27,
    ECC                                            = 28,
    ECC                                            = 29,
    ECC                                            = 30,
    ECC                                            = 31,
    ECC                                            = 32,
    ECC                                            = 33

};


// Enum  Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
    ECR                                            = 0,
    ECR                                            = 1,
    ECR                                            = 2,
    ECR                                            = 3

};


// Enum  Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
    WalkableSlope                                  = 0,
    WalkableSlope                                  = 1,
    WalkableSlope                                  = 2,
    WalkableSlope                                  = 3,
    WalkableSlope                                  = 4

};


// Enum  Engine.EDOFMode
enum class EDOFMode : uint8_t
{
    Default                                        = 0,
    SixDOF                                         = 1,
    YZPlane                                        = 2,
    XZPlane                                        = 3,
    XYPlane                                        = 4,
    CustomPlane                                    = 5,
    None                                           = 6,
    EDOFMode                                       = 7

};


// Enum  Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
    ERSM                                           = 0,
    ERSM                                           = 1,
    ERSM                                           = 2,
    ERSM                                           = 3,
    ERSM                                           = 4,
    ERSM                                           = 5,
    ERSM                                           = 6,
    ERSM                                           = 7,
    ERSM                                           = 8,
    ERSM                                           = 9,
    ERSM                                           = 10

};


// Enum  Engine.ERayTracingGroupCullingPriority
enum class ERayTracingGroupCullingPriority : uint8_t
{
    CP                                             = 0,
    CP                                             = 1,
    CP                                             = 2,
    CP                                             = 3,
    CP                                             = 4,
    CP                                             = 5,
    CP                                             = 6,
    CP                                             = 7,
    CP                                             = 8,
    CP                                             = 9

};


// Enum  Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
    Never                                          = 0,
    Exclusive                                      = 1,
    Always                                         = 2,
    ERuntimeVirtualTextureMainPassType             = 3

};


// Enum  Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
    ECB                                            = 0,
    ECB                                            = 1,
    ECB                                            = 2,
    ECB                                            = 3

};


// Enum  Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    EvenIfNotCollidable                            = 2,
    DontExport                                     = 3,
    EHasCustomNavigableGeometry                    = 4

};


// Enum  Engine.ELightmapType
enum class ELightmapType : uint8_t
{
    Default                                        = 0,
    ForceSurface                                   = 1,
    ForceVolumetric                                = 2,
    ELightmapType                                  = 3

};


// Enum  Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
    ILCQ                                           = 0,
    ILCQ                                           = 1,
    ILCQ                                           = 2,
    ILCQ                                           = 3

};


// Enum  Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
    SDPG                                           = 0,
    SDPG                                           = 1,
    SDPG                                           = 2

};


// Enum  GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3

};


// Enum  GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1

};


// Enum  GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosBreakingSortMethod                       = 5

};


// Enum  GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByHighestImpulse                           = 3,
    SortByNearestFirst                             = 4,
    Count                                          = 5,
    EChaosCollisionSortMethod                      = 6

};


// Enum  GeometryCollectionEngine.EChaosRemovalSortMethod
enum class EChaosRemovalSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByNearestFirst                             = 2,
    Count                                          = 3,
    EChaosRemovalSortMethod                        = 4

};


// Enum  GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosTrailingSortMethod                       = 5

};


// Enum  GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
    HideNone                                       = 0,
    HideWithCollision                              = 1,
    HideSelected                                   = 2,
    HideWholeCollection                            = 3,
    HideAll                                        = 4,
    EGeometryCollectionDebugDrawActorHideGeometry  = 5

};


// Enum  AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
    BMM                                            = 0,
    BMM                                            = 1,
    BMM                                            = 2,
    BMM                                            = 3

};


// Enum  AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
    EIT                                            = 0,
    EIT                                            = 1,
    EIT                                            = 2

};


// Enum  AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
    Linear                                         = 0,
    Sinusoidal                                     = 1,
    Cubic                                          = 2,
    QuadraticInOut                                 = 3,
    CubicInOut                                     = 4,
    HermiteCubic                                   = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    CustomCurve                                    = 14,
    EEasingFuncType                                = 15

};


// Enum  AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
    EulerX                                         = 0,
    EulerY                                         = 1,
    EulerZ                                         = 2,
    QuaternionAngle                                = 3,
    SwingAngle                                     = 4,
    TwistAngle                                     = 5,
    ERotationComponent                             = 6

};


// Enum  AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
    StandardBlend                                  = 0,
    Inertialization                                = 1,
    EBlendListTransitionType                       = 2

};


// Enum  AnimGraphRuntime.EAnimFunctionCallSite
enum class EAnimFunctionCallSite : uint8_t
{
    OnInitialize                                   = 0,
    OnUpdate                                       = 1,
    OnBecomeRelevant                               = 2,
    OnEvaluate                                     = 3,
    OnInitializePostRecursion                      = 4,
    OnUpdatePostRecursion                          = 5,
    OnBecomeRelevantPostRecursion                  = 6,
    OnEvaluatePostRecursion                        = 7,
    OnStartedBlendingOut                           = 8,
    OnStartedBlendingIn                            = 9,
    OnFinishedBlendingOut                          = 10,
    OnFinishedBlendingIn                           = 11,
    EAnimFunctionCallSite                          = 12

};


// Enum  AnimGraphRuntime.ELayeredBoneBlendMode
enum class ELayeredBoneBlendMode : uint8_t
{
    BranchFilter                                   = 0,
    BlendMask                                      = 1,
    ELayeredBoneBlendMode                          = 2

};


// Enum  AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
    Add                                            = 0,
    Scale                                          = 1,
    Blend                                          = 2,
    WeightedMovingAverage                          = 3,
    RemapCurve                                     = 4,
    EModifyCurveApplyMode                          = 5

};


// Enum  AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
    SwingAndTwist                                  = 0,
    SwingOnly                                      = 1,
    Translation                                    = 2,
    EPoseDriverType                                = 3

};


// Enum  AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
    Rotation                                       = 0,
    Translation                                    = 1,
    EPoseDriverSource                              = 2

};


// Enum  AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
    DrivePoses                                     = 0,
    DriveCurves                                    = 1,
    EPoseDriverOutput                              = 2

};


// Enum  AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
    NamedSnapshot                                  = 0,
    SnapshotPin                                    = 1,
    ESnapshotSourceMode                            = 2

};


// Enum  AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
    NoReset                                        = 0,
    StartPosition                                  = 1,
    ExplicitTime                                   = 2,
    ESequenceEvalReinit                            = 3

};


// Enum  AnimGraphRuntime.ESwapRootBone
enum class ESwapRootBone : uint8_t
{
    SwapRootBone                                   = 0,
    SwapRootBone                                   = 1,
    SwapRootBone                                   = 2,
    SwapRootBone                                   = 3

};


// Enum  AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8_t
{
    Angular                                        = 0,
    Cone                                           = 1,
    AnimPhysAngularConstraintType                  = 2

};


// Enum  AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8_t
{
    Free                                           = 0,
    Limited                                        = 1,
    AnimPhysLinearConstraintType                   = 2

};


// Enum  AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8_t
{
    Component                                      = 0,
    Actor                                          = 1,
    World                                          = 2,
    RootRelative                                   = 3,
    BoneRelative                                   = 4,
    AnimPhysSimSpaceType                           = 5

};


// Enum  AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
    Inner                                          = 0,
    Outer                                          = 1,
    ESphericalLimitType                            = 2

};


// Enum  AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
    AddToInput                                     = 0,
    ReplaceComponent                               = 1,
    AddToRefPose                                   = 2,
    EDrivenBoneModificationMode                    = 3

};


// Enum  AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
    Bone                                           = 0,
    MorphTarget                                    = 1,
    MaterialParameter                              = 2,
    EDrivenDestinationMode                         = 3

};


// Enum  AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
    None                                           = 0,
    Offset                                         = 1,
    EConstraintOffsetOption                        = 2

};


// Enum  AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8_t
{
    Accumulate                                     = 0,
    Copy                                           = 1,
    CopyBoneDeltaMode                              = 2

};


// Enum  AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    Sinusoidal                                     = 2,
    EaseInOutExponent2                             = 3,
    EaseInOutExponent3                             = 4,
    EaseInOutExponent4                             = 5,
    EaseInOutExponent5                             = 6,
    MAX                                            = 7

};


// Enum  AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
    ComponentSpace                                 = 0,
    WorldSpace                                     = 1,
    BaseBoneSpace                                  = 2,
    ESimulationSpace                               = 3

};


// Enum  AnimGraphRuntime.ESimulationTiming
enum class ESimulationTiming : uint8_t
{
    Default                                        = 0,
    Synchronous                                    = 1,
    Deferred                                       = 2,
    ESimulationTiming                              = 3

};


// Enum  AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
    FixedDefaultLengthValue                        = 0,
    Distance                                       = 1,
    ChainLength                                    = 2,
    EScaleChainInitialLength                       = 3

};


// Enum  AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    ESplineBoneAxis                                = 4

};


// Enum  AnimGraphRuntime.EWarpingEvaluationMode
enum class EWarpingEvaluationMode : uint8_t
{
    Manual                                         = 0,
    Graph                                          = 1,
    EWarpingEvaluationMode                         = 2

};


// Enum  AnimGraphRuntime.EWarpingVectorMode
enum class EWarpingVectorMode : uint8_t
{
    ComponentSpaceVector                           = 0,
    ActorSpaceVector                               = 1,
    WorldSpaceVector                               = 2,
    IKFootRootLocalSpaceVector                     = 3,
    EWarpingVectorMode                             = 4

};


// Enum  AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
    Additive                                       = 0,
    Interpolative                                  = 1,
    ERBFSolverType                                 = 2

};


// Enum  AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    DefaultFunction                                = 5,
    ERBFFunctionType                               = 6

};


// Enum  AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
    Euclidean                                      = 0,
    Quaternion                                     = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    DefaultMethod                                  = 4,
    ERBFDistanceMethod                             = 5

};


// Enum  AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
    OnlyNormalizeAboveOne                          = 0,
    AlwaysNormalize                                = 1,
    NormalizeWithinMedian                          = 2,
    NoNormalization                                = 3,
    ERBFNormalizeMethod                            = 4

};


// Enum  AudioExtensions.EAudioParameterType
enum class EAudioParameterType : uint8_t
{
    None                                           = 0,
    Boolean                                        = 1,
    Integer                                        = 2,
    Float                                          = 3,
    String                                         = 4,
    Object                                         = 5,
    NoneArray                                      = 6,
    BooleanArray                                   = 7,
    IntegerArray                                   = 8,
    FloatArray                                     = 9,
    StringArray                                    = 10,
    ObjectArray                                    = 11,
    COUNT                                          = 12,
    EAudioParameterType                            = 13

};


// Enum  AudioExtensions.EPcmBitDepthConversion
enum class EPcmBitDepthConversion : uint8_t
{
    SameAsSource                                   = 0,
    Int16                                          = 1,
    Float32                                        = 2,
    EPcmBitDepthConversion                         = 3

};


// Enum  Constraints.EHandleEvent
enum class EHandleEvent : uint8_t
{
    LocalTransformUpdated                          = 0,
    GlobalTransformUpdated                         = 1,
    ComponentUpdated                               = 2,
    Max                                            = 3

};


// Enum  MovieSceneTracks.MovieScene3DPathSection
enum class MovieScene3DPathSection : uint8_t
{
    MovieScene3DPathSection                        = 0,
    MovieScene3DPathSection                        = 1,
    MovieScene3DPathSection                        = 2,
    MovieScene3DPathSection                        = 3,
    MovieScene3DPathSection                        = 4,
    MovieScene3DPathSection                        = 5,
    MovieScene3DPathSection                        = 6

};


// Enum  MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    ELevelVisibility                               = 2

};


// Enum  MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
    Activate                                       = 0,
    Deactivate                                     = 1,
    Trigger                                        = 2,
    EParticleKey                                   = 3

};


// Enum  MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
    AtStartOfEvaluation                            = 0,
    AtEndOfEvaluation                              = 1,
    AfterSpawn                                     = 2,
    EFireEventsAtPosition                          = 3

};


// Enum  UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
    None                                           = 0,
    Designing                                      = 1,
    ShowOutline                                    = 2,
    ExecutePreConstruct                            = 4,
    EWidgetDesignFlags                             = 5

};


// Enum  UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
    World                                          = 0,
    Screen                                         = 1,
    EWidgetSpace                                   = 2

};


// Enum  UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
    RealTime                                       = 0,
    GameTime                                       = 1,
    EWidgetTimingPolicy                            = 2

};


// Enum  UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
    Opaque                                         = 0,
    Masked                                         = 1,
    Transparent                                    = 2,
    EWidgetBlendMode                               = 3

};


// Enum  UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    EWidgetGeometryMode                            = 2

};


// Enum  UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
    Visible                                        = 0,
    SelfHitTestInvisible                           = 1,
    EWindowVisibility                              = 2

};


// Enum  UMG.ETickMode
enum class ETickMode : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Automatic                                      = 2,
    ETickMode                                      = 3

};


// Enum  UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
    World                                          = 0,
    Mouse                                          = 1,
    CenterScreen                                   = 2,
    Custom                                         = 3,
    EWidgetInteractionSource                       = 4

};


// Enum  UMG.EDragPivot
enum class EDragPivot : uint8_t
{
    MouseDown                                      = 0,
    TopLeft                                        = 1,
    TopCenter                                      = 2,
    TopRight                                       = 3,
    CenterLeft                                     = 4,
    CenterCenter                                   = 5,
    CenterRight                                    = 6,
    BottomLeft                                     = 7,
    BottomCenter                                   = 8,
    BottomRight                                    = 9,
    EDragPivot                                     = 10

};


// Enum  UMG.EBindingKind
enum class EBindingKind : uint8_t
{
    Function                                       = 0,
    Property                                       = 1,
    EBindingKind                                   = 2

};


// Enum  TypedElementRuntime.ETypedElementChildInclusionMethod
enum class ETypedElementChildInclusionMethod : uint8_t
{
    None                                           = 0,
    Immediate                                      = 1,
    Recursive                                      = 2,
    ETypedElementChildInclusionMethod              = 3

};


// Enum  TypedElementRuntime.ETypedElementSelectionMethod
enum class ETypedElementSelectionMethod : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    ETypedElementSelectionMethod                   = 2

};


// Enum  CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
    DoNotOverride                                  = 0,
    Manual                                         = 1,
    Tracking                                       = 2,
    Disable                                        = 3,
    MAX                                            = 4

};


// Enum  AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
    Max                                            = 0,
    High                                           = 1,
    Medium                                         = 2,
    Low                                            = 3,
    Min                                            = 4,
    MatchDevice                                    = 5

};


// Enum  AudioMixer.EAudioDeviceChangedRole
enum class EAudioDeviceChangedRole : uint8_t
{
    Invalid                                        = 0,
    Console                                        = 1,
    Multimedia                                     = 2,
    Communications                                 = 3,
    Count                                          = 4,
    EAudioDeviceChangedRole                        = 5

};


// Enum  AudioMixer.EAudioDeviceChangedState
enum class EAudioDeviceChangedState : uint8_t
{
    Invalid                                        = 0,
    Active                                         = 1,
    Disabled                                       = 2,
    NotPresent                                     = 3,
    Unplugged                                      = 4,
    Count                                          = 5,
    EAudioDeviceChangedState                       = 6

};


// Enum  AudioMixer.EAudioMixerChannelType
enum class EAudioMixerChannelType : uint8_t
{
    FrontLeft                                      = 0,
    FrontRight                                     = 1,
    FrontCenter                                    = 2,
    LowFrequency                                   = 3,
    BackLeft                                       = 4,
    BackRight                                      = 5,
    FrontLeftOfCenter                              = 6,
    FrontRightOfCenter                             = 7,
    BackCenter                                     = 8,
    SideLeft                                       = 9,
    SideRight                                      = 10,
    TopCenter                                      = 11,
    TopFrontLeft                                   = 12,
    TopFrontCenter                                 = 13,
    TopFrontRight                                  = 14,
    TopBackLeft                                    = 15,
    TopBackCenter                                  = 16,
    TopBackRight                                   = 17,
    Unknown                                        = 18,
    ChannelTypeCount                               = 19,
    DefaultChannel                                 = 0,
    EAudioMixerChannelType                         = 20

};


// Enum  AudioMixer.EAudioMixerStreamDataFormatType
enum class EAudioMixerStreamDataFormatType : uint8_t
{
    Unknown                                        = 0,
    Float                                          = 1,
    Int16                                          = 2,
    Unsupported                                    = 3,
    EAudioMixerStreamDataFormatType                = 4

};


// Enum  AudioMixer.ESwapAudioOutputDeviceResultState
enum class ESwapAudioOutputDeviceResultState : uint8_t
{
    Failure                                        = 0,
    Success                                        = 1,
    None                                           = 2,
    ESwapAudioOutputDeviceResultState              = 3

};


// Enum  AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
    C                                              = 0,
    Db                                             = 1,
    D                                              = 2,
    Eb                                             = 3,
    E                                              = 4,
    F                                              = 5,
    Gb                                             = 6,
    G                                              = 7,
    Ab                                             = 8,
    A                                              = 9,
    Bb                                             = 10,
    B                                              = 11,
    EMusicalNoteName                               = 12

};


// Enum  AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    UpwardsCompressor                              = 4,
    Count                                          = 5,
    ESubmixEffectDynamicsProcessorType             = 6

};


// Enum  AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsPeakMode                  = 4

};


// Enum  AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
    Disabled                                       = 0,
    Average                                        = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsChannelLinkMode           = 4

};


// Enum  AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
    Default                                        = 0,
    AudioBus                                       = 1,
    Submix                                         = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsKeySource                 = 4

};


// Enum  CoreOnline.ECoreOnlineDummy
enum class ECoreOnlineDummy : uint8_t
{
    Dummy                                          = 0,
    ECoreOnlineDummy                               = 1

};


// Enum  GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EGameplayContainerMatchType                    = 2

};


// Enum  GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
    Undefined                                      = 0,
    AnyTagsMatch                                   = 1,
    AllTagsMatch                                   = 2,
    NoTagsMatch                                    = 3,
    AnyExprMatch                                   = 4,
    AllExprMatch                                   = 5,
    NoExprMatch                                    = 6,
    EGameplayTagQueryExprType                      = 7

};


// Enum  GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
    Native                                         = 0,
    DefaultTagList                                 = 1,
    TagList                                        = 2,
    RestrictedTagList                              = 3,
    DataTable                                      = 4,
    Invalid                                        = 5,
    EGameplayTagSourceType                         = 6

};


// Enum  GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
    None                                           = 0,
    NonRestrictedOnly                              = 1,
    RestrictedOnly                                 = 2,
    All                                            = 3,
    EGameplayTagSelectionType                      = 4

};


// Enum  MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
    UseMediaPlayerSetting                          = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    EMediaPlayerOptionBooleanOverride              = 3

};


// Enum  MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Surround                                       = 2,
    EMediaSoundChannels                            = 3

};


// Enum  MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
    Min                                            = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    EMediaSoundComponentFFTSize                    = 4

};


// Enum  MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8_t
{
    MTOF                                           = 0,
    MTOF                                           = 1,
    MTOF                                           = 2

};


// Enum  MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8_t
{
    MTORI                                          = 0,
    MTORI                                          = 1,
    MTORI                                          = 2,
    MTORI                                          = 3,
    MTORI                                          = 4

};


// Enum  MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
    Audio                                          = 0,
    Caption                                        = 1,
    Metadata                                       = 2,
    Script                                         = 3,
    Subtitle                                       = 4,
    Text                                           = 5,
    Video                                          = 6,
    EMediaPlayerTrack                              = 7

};


// Enum  MediaAssets.EMediaTextureVisibleMipsTiles
enum class EMediaTextureVisibleMipsTiles : uint8_t
{
    None                                           = 0,
    Plane                                          = 1,
    Sphere                                         = 2,
    EMediaTextureVisibleMipsTiles                  = 3

};


// Enum  MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Microphone                                     = 2,
    Software                                       = 4,
    Unknown                                        = 8,
    EMediaAudioCaptureDeviceFilter                 = 9

};


// Enum  MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Software                                       = 2,
    Unknown                                        = 4,
    Webcam                                         = 8,
    EMediaVideoCaptureDeviceFilter                 = 9

};


// Enum  MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    DepthSensor                                    = 1,
    Front                                          = 2,
    Rear                                           = 4,
    Unknown                                        = 8,
    EMediaWebcamCaptureDeviceFilter                = 9

};


// Enum  MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
    HCGM                                           = 0,
    HCGM                                           = 1,
    HCGM                                           = 2,
    HCGM                                           = 3,
    HCGM                                           = 4,
    HCGM                                           = 5,
    HCGM                                           = 6

};


// Enum  MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
    Idle                                           = 0,
    Initialized                                    = 1,
    Capturing                                      = 2,
    Finalizing                                     = 3,
    EMovieSceneCaptureProtocolState                = 4

};


// Enum  MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
    MT                                             = 0,
    MT                                             = 1,
    MT                                             = 2,
    MT                                             = 3

};


// Enum  LocalFileNetworkReplayStreaming.ELocalFileReplayResult
enum class ELocalFileReplayResult : uint8_t
{
    Success                                        = 0,
    InvalidReplayInfo                              = 1,
    StreamChunkIndexMismatch                       = 2,
    DecompressBuffer                               = 3,
    CompressionNotSupported                        = 4,
    DecryptBuffer                                  = 5,
    EncryptionNotSupported                         = 6,
    Unknown                                        = 7,
    ELocalFileReplayResult                         = 8

};


// Enum  HttpNetworkReplayStreaming.EHttpReplayResult
enum class EHttpReplayResult : uint8_t
{
    Success                                        = 0,
    FailedJsonParse                                = 1,
    DataUnavailable                                = 2,
    InvalidHttpResponse                            = 3,
    CompressionFailed                              = 4,
    DecompressionFailed                            = 5,
    InvalidPayload                                 = 6,
    Unknown                                        = 7,
    EHttpReplayResult                              = 8

};


// Enum  Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8_t
{
    AKF                                            = 0,
    AKF                                            = 1,
    AKF                                            = 2,
    AKF                                            = 3

};


// Enum  Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
    AACF                                           = 0,
    AACF                                           = 1,
    AACF                                           = 2,
    AACF                                           = 4,
    AACF                                           = 8,
    AACF                                           = 16,
    AACF                                           = 32,
    AACF                                           = 64,
    AACF                                           = 65

};


// Enum  Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
    RCT                                            = 0,
    RCT                                            = 1,
    RCT                                            = 2,
    RCT                                            = 3

};


// Enum  Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
    RefPose                                        = 0,
    AnimFirstFrame                                 = 1,
    Zero                                           = 2,
    ERootMotionRootLock                            = 3

};


// Enum  Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
    NoRootMotionExtraction                         = 0,
    IgnoreRootMotion                               = 1,
    RootMotionFromEverything                       = 2,
    RootMotionFromMontagesOnly                     = 3,
    ERootMotionMode                                = 4

};


// Enum  Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
    ABPT                                           = 0,
    ABPT                                           = 1,
    ABPT                                           = 2,
    ABPT                                           = 3,
    ABPT                                           = 4,
    ABPT                                           = 5

};


// Enum  Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8_t
{
    ACF                                            = 0,
    ACF                                            = 1,
    ACF                                            = 2,
    ACF                                            = 3,
    ACF                                            = 4,
    ACF                                            = 5,
    ACF                                            = 6,
    ACF                                            = 7

};


// Enum  Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8_t
{
    AxisX                                          = 0,
    AxisY                                          = 1,
    AxisZ                                          = 2,
    AnimPhysTwistAxis                              = 3

};


// Enum  Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8_t
{
    CoM                                            = 0,
    CustomSphere                                   = 1,
    InnerSphere                                    = 2,
    OuterSphere                                    = 3,
    AnimPhysCollisionType                          = 4

};


// Enum  Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
    ETAA                                           = 0,
    ETAA                                           = 1,
    ETAA                                           = 2,
    ETAA                                           = 3

};


// Enum  Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
    BA                                             = 0,
    BA                                             = 1,
    BA                                             = 2,
    BA                                             = 3

};


// Enum  Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
    BCS                                            = 0,
    BCS                                            = 1,
    BCS                                            = 2,
    BCS                                            = 3,
    BCS                                            = 4

};


// Enum  Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
    BRS                                            = 0,
    BRS                                            = 1,
    BRS                                            = 2,
    BRS                                            = 3

};


// Enum  Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
    Queued                                         = 0,
    BranchingPoint                                 = 1,
    EMontageNotifyTickType                         = 2

};


// Enum  Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
    NoFiltering                                    = 0,
    LOD                                            = 1,
    ENotifyFilterType                              = 2

};


// Enum  Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
    AAT                                            = 0,
    AAT                                            = 1,
    AAT                                            = 2,
    AAT                                            = 3

};


// Enum  Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
    Override                                       = 0,
    DoNotOverride                                  = 1,
    NormalizeByWeight                              = 2,
    BlendByWeight                                  = 3,
    UseBasePose                                    = 4,
    UseMaxValue                                    = 5,
    UseMinValue                                    = 6,
    ECurveBlendOption                              = 7

};


// Enum  Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    EAnimInterpolationType                         = 2

};


// Enum  Engine.EAxisOption
enum class EAxisOption : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    X                                              = 3,
    Y                                              = 4,
    Z                                              = 5,
    Custom                                         = 6,
    EAxisOption                                    = 7

};


// Enum  Engine.EComponentType
enum class EComponentType : uint8_t
{
    None                                           = 0,
    TranslationX                                   = 1,
    TranslationY                                   = 2,
    TranslationZ                                   = 3,
    RotationX                                      = 4,
    RotationY                                      = 5,
    RotationZ                                      = 6,
    Scale                                          = 7,
    ScaleX                                         = 8,
    ScaleY                                         = 9,
    ScaleZ                                         = 10,
    EComponentType                                 = 11

};


// Enum  Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
    Speaker                                        = 0,
    Controller                                     = 1,
    ControllerFallbackToSpeaker                    = 2,
    EAudioOutputTarget                             = 3

};


// Enum  Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
    BL                                             = 0,
    BL                                             = 1,
    BL                                             = 2,
    BL                                             = 3,
    BL                                             = 4,
    BL                                             = 5

};


// Enum  Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
    BSA                                            = 0,
    BSA                                            = 1,
    BSA                                            = 2,
    BSA                                            = 3

};


// Enum  Engine.EPreferredTriangulationDirection
enum class EPreferredTriangulationDirection : uint8_t
{
    None                                           = 0,
    Tangential                                     = 1,
    Radial                                         = 2,
    EPreferredTriangulationDirection               = 3

};


// Enum  Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
    AllAnimations                                  = 0,
    HighestWeightedAnimation                       = 1,
    None                                           = 2,
    ENotifyTriggerMode                             = 3

};


// Enum  Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
    BS                                             = 0,
    BS                                             = 1,
    BS                                             = 2,
    BS                                             = 3,
    BS                                             = 4,
    BS                                             = 5,
    BS                                             = 6

};


// Enum  Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
    BPTYPE                                         = 0,
    BPTYPE                                         = 1,
    BPTYPE                                         = 2,
    BPTYPE                                         = 3,
    BPTYPE                                         = 4,
    BPTYPE                                         = 5,
    BPTYPE                                         = 6

};


// Enum  Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
    Default                                        = 0,
    Development                                    = 1,
    FinalRelease                                   = 2,
    EBlueprintCompileMode                          = 3

};


// Enum  Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
    Disabled                                       = 0,
    Dependency                                     = 1,
    ExplicitlyEnabled                              = 2,
    EBlueprintNativizationFlag                     = 3

};


// Enum  Engine.EShouldCookBlueprintPropertyGuids
enum class EShouldCookBlueprintPropertyGuids : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    Inherit                                        = 2,
    EShouldCookBlueprintPropertyGuids              = 3

};


// Enum  Engine.ECsgOper
enum class ECsgOper : uint8_t
{
    CSG                                            = 0,
    CSG                                            = 1,
    CSG                                            = 2,
    CSG                                            = 3,
    CSG                                            = 4,
    CSG                                            = 5,
    CSG                                            = 6

};


// Enum  Engine.EBrushType
enum class EBrushType : uint8_t
{
    Brush                                          = 0,
    Brush                                          = 1,
    Brush                                          = 2,
    Brush                                          = 3

};


// Enum  Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
    Perspective                                    = 0,
    Orthographic                                   = 1,
    ECameraProjectionMode                          = 2

};


// Enum  Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraShakePlaySpace                          = 3

};


// Enum  Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
    CSD                                            = 0,
    CSD                                            = 1,
    CSD                                            = 2,
    CSD                                            = 3,
    CSD                                            = 4,
    CSD                                            = 5,
    CSD                                            = 6,
    CSD                                            = 7

};


// Enum  Engine.EContentBundleClientState
enum class EContentBundleClientState : uint8_t
{
    Unregistered                                   = 0,
    Registered                                     = 1,
    ContentInjectionRequested                      = 2,
    ContentRemovalRequested                        = 3,
    RegistrationFailed                             = 4,
    EContentBundleClientState                      = 5

};


// Enum  Engine.EWorldContentState
enum class EWorldContentState : uint8_t
{
    NoContent                                      = 0,
    ContentBundleInjected                          = 1,
    ContentBundleInjectionFailed                   = 2,
    EWorldContentState                             = 3

};


// Enum  Engine.EContentBundleStatus
enum class EContentBundleStatus : uint8_t
{
    Registered                                     = 0,
    ReadyToInject                                  = 1,
    FailedToInject                                 = 2,
    ContentInjected                                = 3,
    Unknown                                        = 4294967295,
    EContentBundleStatus                           = 4

};


// Enum  Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8_t
{
    Override                                       = 0,
    Blend                                          = 1,
    ECustomAttributeBlendType                      = 2

};


// Enum  Engine.EDataLayerType
enum class EDataLayerType : uint8_t
{
    Runtime                                        = 0,
    Editor                                         = 1,
    Unknown                                        = 2,
    Size                                           = 3,
    EDataLayerType                                 = 4

};


// Enum  Engine.DistributionParamMode
enum class DistributionParamMode : uint8_t
{
    DPM                                            = 0,
    DPM                                            = 1,
    DPM                                            = 2,
    DPM                                            = 3

};


// Enum  Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
    EDVLF                                          = 0,
    EDVLF                                          = 1,
    EDVLF                                          = 2,
    EDVLF                                          = 3,
    EDVLF                                          = 4,
    EDVLF                                          = 5

};


// Enum  Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
    EDVMF                                          = 0,
    EDVMF                                          = 1,
    EDVMF                                          = 2,
    EDVMF                                          = 3

};


// Enum  Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
    EGPD                                           = 0,
    EGPD                                           = 1,
    EGPD                                           = 2

};


// Enum  Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
    None                                           = 0,
    Array                                          = 1,
    Set                                            = 2,
    Map                                            = 3,
    EPinContainerType                              = 4

};


// Enum  Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
    FullTitle                                      = 0,
    ListView                                       = 1,
    EditableTitle                                  = 2,
    MenuTitle                                      = 3,
    MAX                                            = 4,
    ENodeTitleType                                 = 5

};


// Enum  Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
    NoPins                                         = 0,
    Shown                                          = 1,
    Hidden                                         = 2,
    ENodeAdvancedPins                              = 3

};


// Enum  Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    DevelopmentOnly                                = 2,
    ENodeEnabledState                              = 3

};


// Enum  Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
    BPST                                           = 0,
    BPST                                           = 1,
    BPST                                           = 2

};


// Enum  Engine.EGraphType
enum class EGraphType : uint8_t
{
    GT                                             = 0,
    GT                                             = 1,
    GT                                             = 2,
    GT                                             = 3,
    GT                                             = 4,
    GT                                             = 5

};


// Enum  Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
    CONNECT                                        = 0,
    CONNECT                                        = 1,
    CONNECT                                        = 2,
    CONNECT                                        = 3,
    CONNECT                                        = 4,
    CONNECT                                        = 5,
    CONNECT                                        = 6,
    CONNECT                                        = 7

};


// Enum  Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
    FULLYLOAD                                      = 0,
    FULLYLOAD                                      = 1,
    FULLYLOAD                                      = 2,
    FULLYLOAD                                      = 3,
    FULLYLOAD                                      = 4,
    FULLYLOAD                                      = 5

};


// Enum  Engine.ETransitionType
enum class ETransitionType : uint8_t
{
    None                                           = 0,
    Paused                                         = 1,
    Loading                                        = 2,
    Saving                                         = 3,
    Connecting                                     = 4,
    Precaching                                     = 5,
    WaitingToConnect                               = 6,
    MAX                                            = 7

};


// Enum  Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
    NoCapture                                      = 0,
    CapturePermanently                             = 1,
    CapturePermanently                             = 2,
    CaptureDuringMouseDown                         = 3,
    CaptureDuringRightMouseDown                    = 4,
    EMouseCaptureMode                              = 5

};


// Enum  Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
    NotLagging                                     = 0,
    Lagging                                        = 1,
    ENetworkLagState                               = 2

};


// Enum  Engine.ETravelType
enum class ETravelType : uint8_t
{
    TRAVEL                                         = 0,
    TRAVEL                                         = 1,
    TRAVEL                                         = 2,
    TRAVEL                                         = 3

};


// Enum  Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
    Generic                                        = 0,
    DemoNotFound                                   = 1,
    Corrupt                                        = 2,
    InvalidVersion                                 = 3,
    InitBase                                       = 4,
    GameSpecificHeader                             = 5,
    ReplayStreamerInternal                         = 6,
    LoadMap                                        = 7,
    Serialization                                  = 8,
    EDemoPlayFailure                               = 9

};


// Enum  Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
    VMI                                            = 0,
    VMI                                            = 1,
    VMI                                            = 2,
    VMI                                            = 3,
    VMI                                            = 4,
    VMI                                            = 5,
    VMI                                            = 6,
    VMI                                            = 8,
    VMI                                            = 9,
    VMI                                            = 10,
    VMI                                            = 11,
    VMI                                            = 12,
    VMI                                            = 14,
    VMI                                            = 15,
    VMI                                            = 16,
    VMI                                            = 18,
    VMI                                            = 19,
    VMI                                            = 20,
    VMI                                            = 21,
    VMI                                            = 22,
    VMI                                            = 23,
    VMI                                            = 24,
    VMI                                            = 25,
    VMI                                            = 26,
    VMI                                            = 27,
    VMI                                            = 28,
    VMI                                            = 29,
    VMI                                            = 30,
    VMI                                            = 31,
    VMI                                            = 32,
    VMI                                            = 33,
    VMI                                            = 34,
    VMI                                            = 35,
    VMI                                            = 255

};


// Enum  Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
    AspectRatio                                    = 0,
    AspectRatio                                    = 1,
    AspectRatio                                    = 2,
    AspectRatio                                    = 3

};


// Enum  Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
    OCM                                            = 0,
    OCM                                            = 1,
    OCM                                            = 2

};


// Enum  Engine.EBlendMode
enum class EBlendMode : uint8_t
{
    BLEND                                          = 0,
    BLEND                                          = 1,
    BLEND                                          = 2,
    BLEND                                          = 3,
    BLEND                                          = 4,
    BLEND                                          = 5,
    BLEND                                          = 6,
    BLEND                                          = 7

};


// Enum  Engine.EStrataBlendMode
enum class EStrataBlendMode : uint8_t
{
    SBM                                            = 0,
    SBM                                            = 1,
    SBM                                            = 2,
    SBM                                            = 3,
    SBM                                            = 4,
    SBM                                            = 5,
    SBM                                            = 6

};


// Enum  Engine.EMaterialFloatPrecisionMode
enum class EMaterialFloatPrecisionMode : uint8_t
{
    MFPM                                           = 0,
    MFPM                                           = 1,
    MFPM                                           = 2,
    MFPM                                           = 3,
    MFPM                                           = 4

};


// Enum  Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
    SSM                                            = 0,
    SSM                                            = 1,
    SSM                                            = 2,
    SSM                                            = 3,
    SSM                                            = 4

};


// Enum  Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
    TMVM                                           = 0,
    TMVM                                           = 1,
    TMVM                                           = 2,
    TMVM                                           = 3,
    TMVM                                           = 4

};


// Enum  Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
    TLM                                            = 0,
    TLM                                            = 1,
    TLM                                            = 2,
    TLM                                            = 3,
    TLM                                            = 4,
    TLM                                            = 5,
    TLM                                            = 6

};


// Enum  Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
    RM                                             = 0,
    RM                                             = 1,
    RM                                             = 2

};


// Enum  Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
    SortByDistance                                 = 0,
    SortByProjectedZ                               = 1,
    SortAlongAxis                                  = 2,
    ETranslucentSortPolicy                         = 3

};


// Enum  Engine.EDynamicGlobalIlluminationMethod
enum class EDynamicGlobalIlluminationMethod : uint8_t
{
    None                                           = 0,
    Lumen                                          = 1,
    ScreenSpace                                    = 2,
    RayTraced                                      = 3,
    Plugin                                         = 4,
    EDynamicGlobalIlluminationMethod               = 5

};


// Enum  Engine.EReflectionMethod
enum class EReflectionMethod : uint8_t
{
    None                                           = 0,
    Lumen                                          = 1,
    ScreenSpace                                    = 2,
    RayTraced                                      = 3,
    EReflectionMethod                              = 4

};


// Enum  Engine.EShadowMapMethod
enum class EShadowMapMethod : uint8_t
{
    ShadowMaps                                     = 0,
    VirtualShadowMaps                              = 1,
    EShadowMapMethod                               = 2

};


// Enum  Engine.ECastRayTracedShadow
enum class ECastRayTracedShadow : uint8_t
{
    Disabled                                       = 0,
    UseProjectSetting                              = 1,
    Enabled                                        = 2,
    ECastRayTracedShadow                           = 3

};


// Enum  Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
    SCS                                            = 0,
    SCS                                            = 1,
    SCS                                            = 2,
    SCS                                            = 3,
    SCS                                            = 4,
    SCS                                            = 5,
    SCS                                            = 6,
    SCS                                            = 7,
    SCS                                            = 8,
    SCS                                            = 9,
    SCS                                            = 10

};


// Enum  Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
    SCCM                                           = 0,
    SCCM                                           = 1,
    SCCM                                           = 2,
    SCCM                                           = 3

};


// Enum  Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
    Force8BitsPerChannel                           = 0,
    Default                                        = 1,
    HighPrecisionNormals                           = 3,
    Force16BitsPerChannel                          = 5,
    EGBufferFormat                                 = 6

};


// Enum  Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
    ETrailWidthMode                                = 0,
    ETrailWidthMode                                = 1,
    ETrailWidthMode                                = 2,
    ETrailWidthMode                                = 3

};


// Enum  Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
    SceneDepth                                     = 0,
    DistanceField                                  = 1,
    EParticleCollisionMode                         = 2

};


// Enum  Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
    MSM                                            = 0,
    MSM                                            = 1,
    MSM                                            = 2,
    MSM                                            = 3,
    MSM                                            = 4,
    MSM                                            = 5,
    MSM                                            = 6,
    MSM                                            = 7,
    MSM                                            = 8,
    MSM                                            = 9,
    MSM                                            = 10,
    MSM                                            = 11,
    MSM                                            = 12,
    MSM                                            = 13,
    MSM                                            = 14,
    MSM                                            = 15,
    MSM                                            = 16

};


// Enum  Engine.EStrataShadingModel
enum class EStrataShadingModel : uint8_t
{
    SSM                                            = 0,
    SSM                                            = 1,
    SSM                                            = 2,
    SSM                                            = 3,
    SSM                                            = 4,
    SSM                                            = 5,
    SSM                                            = 6,
    SSM                                            = 7,
    SSM                                            = 8,
    SSM                                            = 9,
    SSM                                            = 10

};


// Enum  Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
    SAMPLERTYPE                                    = 0,
    SAMPLERTYPE                                    = 1,
    SAMPLERTYPE                                    = 2,
    SAMPLERTYPE                                    = 3,
    SAMPLERTYPE                                    = 4,
    SAMPLERTYPE                                    = 5,
    SAMPLERTYPE                                    = 6,
    SAMPLERTYPE                                    = 7,
    SAMPLERTYPE                                    = 8,
    SAMPLERTYPE                                    = 9,
    SAMPLERTYPE                                    = 10,
    SAMPLERTYPE                                    = 11,
    SAMPLERTYPE                                    = 12,
    SAMPLERTYPE                                    = 13,
    SAMPLERTYPE                                    = 14,
    SAMPLERTYPE                                    = 15,
    SAMPLERTYPE                                    = 16,
    SAMPLERTYPE                                    = 17

};


// Enum  Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
    MSC                                            = 0,
    MSC                                            = 1,
    MSC                                            = 2,
    MSC                                            = 3,
    MSC                                            = 4,
    MSC                                            = 5,
    MSC                                            = 6,
    MSC                                            = 7,
    MSC                                            = 8,
    MSC                                            = 9

};


// Enum  Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
    MSR                                            = 0,
    MSR                                            = 1,
    MSR                                            = 2,
    MSR                                            = 3,
    MSR                                            = 4,
    MSR                                            = 5,
    MSR                                            = 6,
    MSR                                            = 7,
    MSR                                            = 8

};


// Enum  Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
    Quality                                        = 0,
    Quality                                        = 1,
    Quality                                        = 2,
    Quality                                        = 3,
    Quality                                        = 4

};


// Enum  Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
    Disabled                                       = 0,
    Linear                                         = 1,
    Exponential                                    = 2,
    ENetworkSmoothingMode                          = 3

};


// Enum  Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
    OverlapFilter                                  = 0,
    OverlapFilter                                  = 1,
    OverlapFilter                                  = 2,
    OverlapFilter                                  = 3

};


// Enum  Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
    BSIT                                           = 0,
    BSIT                                           = 1,
    BSIT                                           = 2,
    BSIT                                           = 3,
    BSIT                                           = 4,
    BSIT                                           = 5,
    BSIT                                           = 6

};


// Enum  Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
    ETS                                            = 0,
    ETS                                            = 1,
    ETS                                            = 2,
    ETS                                            = 3,
    ETS                                            = 4,
    ETS                                            = 5

};


// Enum  Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
    LMPT                                           = 0,
    LMPT                                           = 1,
    LMPT                                           = 2,
    LMPT                                           = 3

};


// Enum  Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
    SMF                                            = 0,
    SMF                                            = 1,
    SMF                                            = 2

};


// Enum  Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
    ShiftBucket0                                   = 0,
    ShiftBucket1                                   = 1,
    ShiftBucket2                                   = 2,
    ShiftBucket3                                   = 3,
    ShiftBucket4                                   = 4,
    ShiftBucket5                                   = 5,
    ShiftBucketMax                                 = 6,
    EUpdateRateShiftBucket                         = 7

};


// Enum  Engine.ENetRole
enum class ENetRole : uint8_t
{
    ROLE                                           = 0,
    ROLE                                           = 1,
    ROLE                                           = 2,
    ROLE                                           = 3,
    ROLE                                           = 4

};


// Enum  Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
    DORM                                           = 0,
    DORM                                           = 1,
    DORM                                           = 2,
    DORM                                           = 3,
    DORM                                           = 4,
    DORM                                           = 5,
    DORM                                           = 6

};


// Enum  Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
    Disabled                                       = 0,
    Player0                                        = 1,
    Player1                                        = 2,
    Player2                                        = 3,
    Player3                                        = 4,
    Player4                                        = 5,
    Player5                                        = 6,
    Player6                                        = 7,
    Player7                                        = 8,
    EAutoReceiveInput                              = 9

};


// Enum  Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
    Disabled                                       = 0,
    PlacedInWorld                                  = 1,
    Spawned                                        = 2,
    PlacedInWorldOrSpawned                         = 3,
    EAutoPossessAI                                 = 4

};


// Enum  Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Cyan                                           = 3,
    Magenta                                        = 4,
    Yellow                                         = 5,
    White                                          = 6,
    Black                                          = 7,
    MAX                                            = 8

};


// Enum  Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
    Invalid                                        = 0,
    Bone                                           = 1,
    Socket                                         = 2,
    EComponentSocketType                           = 3

};


// Enum  Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
    Undefined                                      = 0,
    AlwaysSpawn                                    = 1,
    AdjustIfPossibleButAlwaysSpawn                 = 2,
    AdjustIfPossibleButDontSpawnIfColliding        = 3,
    DontSpawnIfColliding                           = 4,
    ESpawnActorCollisionHandlingMethod             = 5

};


// Enum  Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
    Default                                        = 0,
    ForceCPUAndGPU                                 = 1,
    EMeshBufferAccess                              = 2

};


// Enum  Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
    FontICS                                        = 0,
    FontICS                                        = 1,
    FontICS                                        = 2,
    FontICS                                        = 3

};


// Enum  Engine.EStandbyType
enum class EStandbyType : uint8_t
{
    STDBY                                          = 0,
    STDBY                                          = 1,
    STDBY                                          = 2,
    STDBY                                          = 3

};


// Enum  Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
    DoNotTrace                                     = 0,
    TraceFullPath                                  = 1,
    OnlyTraceWhileAscending                        = 2,
    ESuggestProjVelocityTraceOption                = 3

};


// Enum  Engine.EHISMViewRelevanceType
enum class EHISMViewRelevanceType : uint8_t
{
    Grass                                          = 0,
    Foliage                                        = 1,
    HISM                                           = 2,
    EHISMViewRelevanceType                         = 3

};


// Enum  Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
    HPP                                            = 0,
    HPP                                            = 1,
    HPP                                            = 2,
    HPP                                            = 3,
    HPP                                            = 4

};


// Enum  Engine.EHLODBatchingPolicy
enum class EHLODBatchingPolicy : uint8_t
{
    None                                           = 0,
    MeshSection                                    = 1,
    Instancing                                     = 2,
    EHLODBatchingPolicy                            = 3

};


// Enum  Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
    AMD                                            = 0,
    AMD                                            = 1,
    AMD                                            = 2

};


// Enum  Engine.EScreenPercentageMode
enum class EScreenPercentageMode : uint8_t
{
    Manual                                         = 0,
    BasedOnDisplayResolution                       = 1,
    BasedOnDPIScale                                = 2,
    EScreenPercentageMode                          = 3

};


// Enum  Engine.ELevelInstanceRuntimeBehavior
enum class ELevelInstanceRuntimeBehavior : uint8_t
{
    None                                           = 0,
    Embedded                                       = 1,
    Partitioned                                    = 2,
    LevelStreaming                                 = 3,
    ELevelInstanceRuntimeBehavior                  = 4

};


// Enum  Engine.ELevelInstanceCreationType
enum class ELevelInstanceCreationType : uint8_t
{
    LevelInstance                                  = 0,
    PackedLevelActor                               = 1,
    ELevelInstanceCreationType                     = 2

};


// Enum  Engine.ELevelInstancePivotType
enum class ELevelInstancePivotType : uint8_t
{
    CenterMinZ                                     = 0,
    Center                                         = 1,
    Actor                                          = 2,
    WorldOrigin                                    = 3,
    ELevelInstancePivotType                        = 4

};


// Enum  Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
    SVB                                            = 0,
    SVB                                            = 1,
    SVB                                            = 2,
    SVB                                            = 3,
    SVB                                            = 4,
    SVB                                            = 5

};


// Enum  Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
    DBM                                            = 0,
    DBM                                            = 1,
    DBM                                            = 2,
    DBM                                            = 3,
    DBM                                            = 4,
    DBM                                            = 5,
    DBM                                            = 6,
    DBM                                            = 7,
    DBM                                            = 8,
    DBM                                            = 9,
    DBM                                            = 10,
    DBM                                            = 11,
    DBM                                            = 12,
    DBM                                            = 13,
    DBM                                            = 14,
    DBM                                            = 15,
    DBM                                            = 16,
    DBM                                            = 17

};


// Enum  Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
    MDR                                            = 0,
    MDR                                            = 1,
    MDR                                            = 2,
    MDR                                            = 3,
    MDR                                            = 4,
    MDR                                            = 5,
    MDR                                            = 6,
    MDR                                            = 7,
    MDR                                            = 8

};


// Enum  Engine.EMaterialTranslucencyPass
enum class EMaterialTranslucencyPass : uint8_t
{
    MTP                                            = 0,
    MTP                                            = 1,
    MTP                                            = 2,
    MTP                                            = 3

};


// Enum  Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
    TCC                                            = 0,
    TCC                                            = 1,
    TCC                                            = 2,
    TCC                                            = 3,
    TCC                                            = 4

};


// Enum  Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
    Blend                                          = 0,
    UseA                                           = 1,
    UseB                                           = 2,
    EMaterialAttributeBlend                        = 3

};


// Enum  Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    EChannelMaskParameterColor                     = 4

};


// Enum  Engine.EClampMode
enum class EClampMode : uint8_t
{
    CMODE                                          = 0,
    CMODE                                          = 1,
    CMODE                                          = 2,
    CMODE                                          = 3

};


// Enum  Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
    CMOT                                           = 0,
    CMOT                                           = 1,
    CMOT                                           = 2,
    CMOT                                           = 3,
    CMOT                                           = 4,
    CMOT                                           = 5

};


// Enum  Engine.EDBufferTextureId
enum class EDBufferTextureId : uint8_t
{
    DBT                                            = 0,
    DBT                                            = 1,
    DBT                                            = 2,
    DBT                                            = 3

};


// Enum  Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
    TDOF                                           = 0,
    TDOF                                           = 1,
    TDOF                                           = 2,
    TDOF                                           = 3,
    TDOF                                           = 4

};


// Enum  Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
    FunctionInput                                  = 0,
    FunctionInput                                  = 1,
    FunctionInput                                  = 2,
    FunctionInput                                  = 3,
    FunctionInput                                  = 4,
    FunctionInput                                  = 5,
    FunctionInput                                  = 6,
    FunctionInput                                  = 7,
    FunctionInput                                  = 8,
    FunctionInput                                  = 9,
    FunctionInput                                  = 10,
    FunctionInput                                  = 11

};


// Enum  Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
    NOISEFUNCTION                                  = 0,
    NOISEFUNCTION                                  = 1,
    NOISEFUNCTION                                  = 2,
    NOISEFUNCTION                                  = 3,
    NOISEFUNCTION                                  = 4,
    NOISEFUNCTION                                  = 5,
    NOISEFUNCTION                                  = 6

};


// Enum  Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
    RVTMVM                                         = 0,
    RVTMVM                                         = 1,
    RVTMVM                                         = 2,
    RVTMVM                                         = 3,
    RVTMVM                                         = 4

};


// Enum  Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
    RVTTA                                          = 0,
    RVTTA                                          = 1,
    RVTTA                                          = 2

};


// Enum  Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
    Coordinates                                    = 0,
    OffsetFraction                                 = 1,
    EMaterialSceneAttributeInputMode               = 2

};


// Enum  Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
    STG                                            = 0,
    STG                                            = 1,
    STG                                            = 2,
    STG                                            = 3,
    STG                                            = 4,
    STG                                            = 5

};


// Enum  Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
    STW                                            = 0,
    STW                                            = 1,
    STW                                            = 2,
    STW                                            = 3,
    STW                                            = 4,
    STW                                            = 5,
    STW                                            = 6,
    STW                                            = 7

};


// Enum  Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
    STLOD                                          = 0,
    STLOD                                          = 1,
    STLOD                                          = 2

};


// Enum  Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
    TMTM                                           = 0,
    TMTM                                           = 1,
    TMTM                                           = 2

};


// Enum  Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
    TRANSFORMSOURCE                                = 0,
    TRANSFORMSOURCE                                = 1,
    TRANSFORMSOURCE                                = 2,
    TRANSFORMSOURCE                                = 3,
    TRANSFORMSOURCE                                = 4,
    TRANSFORMSOURCE                                = 5,
    TRANSFORMSOURCE                                = 6,
    TRANSFORMSOURCE                                = 7

};


// Enum  Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
    TRANSFORM                                      = 0,
    TRANSFORM                                      = 1,
    TRANSFORM                                      = 2,
    TRANSFORM                                      = 3,
    TRANSFORM                                      = 4,
    TRANSFORM                                      = 5,
    TRANSFORM                                      = 6,
    TRANSFORM                                      = 7

};


// Enum  Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
    TRANSFORMPOSSOURCE                             = 0,
    TRANSFORMPOSSOURCE                             = 1,
    TRANSFORMPOSSOURCE                             = 2,
    TRANSFORMPOSSOURCE                             = 3,
    TRANSFORMPOSSOURCE                             = 4,
    TRANSFORMPOSSOURCE                             = 5,
    TRANSFORMPOSSOURCE                             = 6,
    TRANSFORMPOSSOURCE                             = 7

};


// Enum  Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
    VNF                                            = 0,
    VNF                                            = 1,
    VNF                                            = 2,
    VNF                                            = 3,
    VNF                                            = 4,
    VNF                                            = 5

};


// Enum  Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
    MEVP                                           = 0,
    MEVP                                           = 1,
    MEVP                                           = 2,
    MEVP                                           = 3,
    MEVP                                           = 4,
    MEVP                                           = 5,
    MEVP                                           = 6,
    MEVP                                           = 7,
    MEVP                                           = 8,
    MEVP                                           = 9,
    MEVP                                           = 10,
    MEVP                                           = 11,
    MEVP                                           = 12,
    MEVP                                           = 13,
    MEVP                                           = 14,
    MEVP                                           = 15

};


// Enum  Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
    WPT                                            = 0,
    WPT                                            = 1,
    WPT                                            = 2,
    WPT                                            = 3,
    WPT                                            = 4

};


// Enum  Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
    Default                                        = 0,
    MaterialLayer                                  = 1,
    MaterialLayerBlend                             = 2,
    EMaterialFunctionUsage                         = 3

};


// Enum  Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
    MATUSAGE                                       = 0,
    MATUSAGE                                       = 1,
    MATUSAGE                                       = 2,
    MATUSAGE                                       = 3,
    MATUSAGE                                       = 4,
    MATUSAGE                                       = 5,
    MATUSAGE                                       = 6,
    MATUSAGE                                       = 7,
    MATUSAGE                                       = 8,
    MATUSAGE                                       = 9,
    MATUSAGE                                       = 10,
    MATUSAGE                                       = 11,
    MATUSAGE                                       = 12,
    MATUSAGE                                       = 13,
    MATUSAGE                                       = 14,
    MATUSAGE                                       = 15,
    MATUSAGE                                       = 16,
    MATUSAGE                                       = 17,
    MATUSAGE                                       = 18,
    MATUSAGE                                       = 19

};


// Enum  Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8_t
{
    Uninitialized                                  = 0,
    LinkedToParent                                 = 1,
    UnlinkedFromParent                             = 2,
    NotFromParent                                  = 3,
    EMaterialLayerLinkState                        = 4

};


// Enum  Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
    TextureSizingType                              = 0,
    TextureSizingType                              = 1,
    TextureSizingType                              = 2,
    TextureSizingType                              = 3,
    TextureSizingType                              = 4,
    TextureSizingType                              = 5,
    TextureSizingType                              = 6,
    TextureSizingType                              = 7

};


// Enum  Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
    MaterialMergeType                              = 0,
    MaterialMergeType                              = 1,
    MaterialMergeType                              = 2

};


// Enum  Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
    PPI                                            = 0,
    PPI                                            = 1,
    PPI                                            = 2,
    PPI                                            = 3,
    PPI                                            = 4,
    PPI                                            = 5,
    PPI                                            = 6,
    PPI                                            = 7,
    PPI                                            = 8,
    PPI                                            = 9,
    PPI                                            = 10,
    PPI                                            = 11,
    PPI                                            = 12,
    PPI                                            = 13,
    PPI                                            = 14,
    PPI                                            = 15,
    PPI                                            = 16,
    PPI                                            = 17,
    PPI                                            = 18,
    PPI                                            = 19,
    PPI                                            = 20,
    PPI                                            = 21,
    PPI                                            = 22,
    PPI                                            = 23,
    PPI                                            = 24,
    PPI                                            = 25,
    PPI                                            = 26,
    PPI                                            = 27,
    PPI                                            = 28,
    PPI                                            = 29,
    PPI                                            = 30,
    PPI                                            = 31

};


// Enum  Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
    MD                                             = 0,
    MD                                             = 1,
    MD                                             = 2,
    MD                                             = 3,
    MD                                             = 4,
    MD                                             = 5,
    MD                                             = 6,
    MD                                             = 7

};


// Enum  Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
    LayerParameter                                 = 0,
    BlendParameter                                 = 1,
    GlobalParameter                                = 2,
    EMaterialParameterAssociation                  = 3

};


// Enum  Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
    MTD                                            = 0,
    MTD                                            = 1,
    MTD                                            = 2

};


// Enum  Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
    MTR                                            = 0,
    MTR                                            = 1,
    MTR                                            = 2,
    MTR                                            = 3,
    MTR                                            = 4

};


// Enum  Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
    BothWays                                       = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ENavLinkDirection                              = 3

};


// Enum  Engine.EPingType
enum class EPingType : uint8_t
{
    None                                           = 0,
    RoundTrip                                      = 1,
    RoundTripExclFrame                             = 2,
    ICMP                                           = 4,
    UDPQoS                                         = 8,
    Max                                            = 8,
    Count                                          = 4

};


// Enum  Engine.EPingAverageType
enum class EPingAverageType : uint8_t
{
    None                                           = 0,
    MovingAverage                                  = 1,
    PlayerStateAvg                                 = 2,
    EPingAverageType                               = 3

};


// Enum  Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
    EPBM                                           = 0,
    EPBM                                           = 1,
    EPBM                                           = 2

};


// Enum  Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
    PSUVIM                                         = 0,
    PSUVIM                                         = 1,
    PSUVIM                                         = 2,
    PSUVIM                                         = 3,
    PSUVIM                                         = 4,
    PSUVIM                                         = 5

};


// Enum  Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
    ERM                                            = 0,
    ERM                                            = 1,
    ERM                                            = 2,
    ERM                                            = 3,
    ERM                                            = 4,
    ERM                                            = 5

};


// Enum  Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
    PDM                                            = 0,
    PDM                                            = 1,
    PDM                                            = 2,
    PDM                                            = 3

};


// Enum  Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Critical                                       = 3,
    Num                                            = 4,
    EParticleSignificanceLevel                     = 5

};


// Enum  Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
    Auto                                           = 0,
    Complete                                       = 1,
    DisableTick                                    = 2,
    DisableTickAndKill                             = 3,
    Num                                            = 4,
    EParticleSystemInsignificanceReaction          = 5

};


// Enum  Engine.EModuleType
enum class EModuleType : uint8_t
{
    EPMT                                           = 0,
    EPMT                                           = 1,
    EPMT                                           = 2,
    EPMT                                           = 3,
    EPMT                                           = 4,
    EPMT                                           = 5,
    EPMT                                           = 6,
    EPMT                                           = 7,
    EPMT                                           = 8,
    EPMT                                           = 9

};


// Enum  Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
    EPSSM                                          = 0,
    EPSSM                                          = 1,
    EPSSM                                          = 2

};


// Enum  Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
    EAPSM                                          = 0,
    EAPSM                                          = 1,
    EAPSM                                          = 2

};


// Enum  Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8_t
{
    PEB2STM                                        = 0,
    PEB2STM                                        = 1,
    PEB2STM                                        = 2,
    PEB2STM                                        = 3,
    PEB2STM                                        = 4,
    PEB2STM                                        = 5

};


// Enum  Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8_t
{
    PEB2STTM                                       = 0,
    PEB2STTM                                       = 1,
    PEB2STTM                                       = 2,
    PEB2STTM                                       = 3,
    PEB2STTM                                       = 4

};


// Enum  Engine.BeamModifierType
enum class BeamModifierType : uint8_t
{
    PEB2MT                                         = 0,
    PEB2MT                                         = 1,
    PEB2MT                                         = 2

};


// Enum  Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
    EPCOUM                                         = 0,
    EPCOUM                                         = 1,
    EPCOUM                                         = 2,
    EPCOUM                                         = 3

};


// Enum  Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
    EPCC                                           = 0,
    EPCC                                           = 1,
    EPCC                                           = 2,
    EPCC                                           = 3,
    EPCC                                           = 4,
    EPCC                                           = 5,
    EPCC                                           = 6

};


// Enum  Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
    Bounce                                         = 0,
    Stop                                           = 1,
    Kill                                           = 2,
    EParticleCollisionResponse                     = 3

};


// Enum  Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
    BONESOCKETSOURCE                               = 0,
    BONESOCKETSOURCE                               = 1,
    BONESOCKETSOURCE                               = 2

};


// Enum  Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
    BONESOCKETSEL                                  = 0,
    BONESOCKETSEL                                  = 1,
    BONESOCKETSEL                                  = 2

};


// Enum  Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
    ELESM                                          = 0,
    ELESM                                          = 1,
    ELESM                                          = 2

};


// Enum  Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8_t
{
    PMLPC                                          = 0,
    PMLPC                                          = 1,
    PMLPC                                          = 2,
    PMLPC                                          = 3

};


// Enum  Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
    VERTSURFACESOURCE                              = 0,
    VERTSURFACESOURCE                              = 1,
    VERTSURFACESOURCE                              = 2

};


// Enum  Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
    EOChainMode                                    = 0,
    EOChainMode                                    = 1,
    EOChainMode                                    = 2,
    EOChainMode                                    = 3

};


// Enum  Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
    EPAL                                           = 0,
    EPAL                                           = 1,
    EPAL                                           = 2,
    EPAL                                           = 3,
    EPAL                                           = 4,
    EPAL                                           = 5,
    EPAL                                           = 6,
    EPAL                                           = 7,
    EPAL                                           = 8,
    EPAL                                           = 9,
    EPAL                                           = 10

};


// Enum  Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
    EDPV                                           = 0,
    EDPV                                           = 1,
    EDPV                                           = 2,
    EDPV                                           = 3,
    EDPV                                           = 4,
    EDPV                                           = 5,
    EDPV                                           = 6

};


// Enum  Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
    None                                           = 0,
    FlipUV                                         = 1,
    FlipUOnly                                      = 2,
    FlipVOnly                                      = 3,
    RandomFlipUV                                   = 4,
    RandomFlipUOnly                                = 5,
    RandomFlipVOnly                                = 6,
    RandomFlipUVIndependent                        = 7,
    EParticleUVFlipMode                            = 8

};


// Enum  Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
    PSORTMODE                                      = 0,
    PSORTMODE                                      = 1,
    PSORTMODE                                      = 2,
    PSORTMODE                                      = 3,
    PSORTMODE                                      = 4,
    PSORTMODE                                      = 5

};


// Enum  Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
    ENM                                            = 0,
    ENM                                            = 1,
    ENM                                            = 2,
    ENM                                            = 3

};


// Enum  Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
    PET2SRCM                                       = 0,
    PET2SRCM                                       = 1,
    PET2SRCM                                       = 2,
    PET2SRCM                                       = 3

};


// Enum  Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
    PEB2M                                          = 0,
    PEB2M                                          = 1,
    PEB2M                                          = 2,
    PEB2M                                          = 3

};


// Enum  Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
    PEBTM                                          = 0,
    PEBTM                                          = 1,
    PEBTM                                          = 2,
    PEBTM                                          = 3

};


// Enum  Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
    PSMA                                           = 0,
    PSMA                                           = 1,
    PSMA                                           = 2,
    PSMA                                           = 3

};


// Enum  Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
    CameraFacing                                   = 0,
    CameraFacing                                   = 1,
    CameraFacing                                   = 2,
    CameraFacing                                   = 3,
    CameraFacing                                   = 4,
    CameraFacing                                   = 5

};


// Enum  Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
    XAxisFacing                                    = 0,
    XAxisFacing                                    = 1,
    XAxisFacing                                    = 2,
    XAxisFacing                                    = 3,
    XAxisFacing                                    = 4,
    LockedAxis                                     = 5,
    LockedAxis                                     = 6,
    LockedAxis                                     = 7,
    LockedAxis                                     = 8,
    VelocityAligned                                = 9,
    VelocityAligned                                = 10,
    VelocityAligned                                = 11,
    VelocityAligned                                = 12,
    EMeshCameraFacingOptions                       = 13

};


// Enum  Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
    Trails                                         = 0,
    Trails                                         = 1,
    Trails                                         = 2,
    Trails                                         = 3

};


// Enum  Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
    PSA                                            = 0,
    PSA                                            = 1,
    PSA                                            = 2,
    PSA                                            = 3,
    PSA                                            = 4,
    PSA                                            = 5,
    PSA                                            = 6,
    PSA                                            = 7

};


// Enum  Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
    EPSUM                                          = 0,
    EPSUM                                          = 1,
    EPSUM                                          = 2

};


// Enum  Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8_t
{
    PARTICLESYSTEMLODMETHOD                        = 0,
    PARTICLESYSTEMLODMETHOD                        = 1,
    PARTICLESYSTEMLODMETHOD                        = 2,
    PARTICLESYSTEMLODMETHOD                        = 3

};


// Enum  Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
    EPSOBM                                         = 0,
    EPSOBM                                         = 1,
    EPSOBM                                         = 2,
    EPSOBM                                         = 3

};


// Enum  Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
    PSPT                                           = 0,
    PSPT                                           = 1,
    PSPT                                           = 2,
    PSPT                                           = 3,
    PSPT                                           = 4,
    PSPT                                           = 5,
    PSPT                                           = 6,
    PSPT                                           = 7,
    PSPT                                           = 8,
    PSPT                                           = 9

};


// Enum  Engine.ParticleReplayState
enum class ParticleReplayState : uint8_t
{
    PRS                                            = 0,
    PRS                                            = 1,
    PRS                                            = 2,
    PRS                                            = 3

};


// Enum  Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
    EPET                                           = 0,
    EPET                                           = 1,
    EPET                                           = 2,
    EPET                                           = 3,
    EPET                                           = 4,
    EPET                                           = 5,
    EPET                                           = 6

};


// Enum  Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
    VTBlend                                        = 0,
    VTBlend                                        = 1,
    VTBlend                                        = 2,
    VTBlend                                        = 3,
    VTBlend                                        = 4,
    VTBlend                                        = 5,
    VTBlend                                        = 6

};


// Enum  Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
    RCIM                                           = 0,
    RCIM                                           = 1,
    RCIM                                           = 2,
    RCIM                                           = 3,
    RCIM                                           = 4

};


// Enum  Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
    RCCE                                           = 0,
    RCCE                                           = 1,
    RCCE                                           = 2,
    RCCE                                           = 3,
    RCCE                                           = 4,
    RCCE                                           = 5,
    RCCE                                           = 6

};


// Enum  Engine.EReplayResult
enum class EReplayResult : uint8_t
{
    Success                                        = 0,
    ReplayNotFound                                 = 1,
    Corrupt                                        = 2,
    UnsupportedCheckpoint                          = 3,
    GameSpecific                                   = 4,
    InitConnect                                    = 5,
    LoadMap                                        = 6,
    Serialization                                  = 7,
    StreamerError                                  = 8,
    ConnectionClosed                               = 9,
    MissingArchive                                 = 10,
    Unknown                                        = 11,
    EReplayResult                                  = 12

};


// Enum  Engine.ReverbPreset
enum class ReverbPreset : uint8_t
{
    REVERB                                         = 0,
    REVERB                                         = 1,
    REVERB                                         = 2,
    REVERB                                         = 3,
    REVERB                                         = 4,
    REVERB                                         = 5,
    REVERB                                         = 6,
    REVERB                                         = 7,
    REVERB                                         = 8,
    REVERB                                         = 9,
    REVERB                                         = 10,
    REVERB                                         = 11,
    REVERB                                         = 12,
    REVERB                                         = 13,
    REVERB                                         = 14,
    REVERB                                         = 15,
    REVERB                                         = 16,
    REVERB                                         = 17,
    REVERB                                         = 18,
    REVERB                                         = 19,
    REVERB                                         = 20,
    REVERB                                         = 21,
    REVERB                                         = 22,
    REVERB                                         = 23

};


// Enum  Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
    RCTM                                           = 0,
    RCTM                                           = 1,
    RCTM                                           = 2,
    RCTM                                           = 3,
    RCTM                                           = 4

};


// Enum  Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
    RCTWM                                          = 0,
    RCTWM                                          = 1,
    RCTWM                                          = 2,
    RCTWM                                          = 3,
    RCTWM                                          = 4

};


// Enum  Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
    RCCF                                           = 0,
    RCCF                                           = 1,
    RCCF                                           = 2,
    RCCF                                           = 3,
    RCCF                                           = 4,
    RCCF                                           = 5,
    RCCF                                           = 6

};


// Enum  Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
    RCKTCF                                         = 0,
    RCKTCF                                         = 1,
    RCKTCF                                         = 2

};


// Enum  Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
    BaseColor                                      = 0,
    BaseColor                                      = 1,
    BaseColor                                      = 2,
    BaseColor                                      = 3,
    BaseColor                                      = 4,
    BaseColor                                      = 5,
    WorldHeight                                    = 6,
    Count                                          = 7,
    ERuntimeVirtualTextureMaterialType             = 8

};


// Enum  Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
    DOFM                                           = 0,
    DOFM                                           = 1,
    DOFM                                           = 2,
    DOFM                                           = 3

};


// Enum  Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
    AEM                                            = 0,
    AEM                                            = 1,
    AEM                                            = 2,
    AEM                                            = 3

};


// Enum  Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
    BM                                             = 0,
    BM                                             = 1,
    BM                                             = 2

};


// Enum  Engine.ETemperatureMethod
enum class ETemperatureMethod : uint8_t
{
    TEMP                                           = 0,
    TEMP                                           = 1,
    TEMP                                           = 2

};


// Enum  Engine.ELightUnits
enum class ELightUnits : uint8_t
{
    Unitless                                       = 0,
    Candelas                                       = 1,
    Lumens                                         = 2,
    ELightUnits                                    = 3

};


// Enum  Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
    ScreenSpace                                    = 0,
    RayTracing                                     = 1,
    EReflectionsType                               = 2

};


// Enum  Engine.ELumenRayLightingModeOverride
enum class ELumenRayLightingModeOverride : uint8_t
{
    Default                                        = 0,
    SurfaceCache                                   = 1,
    HitLighting                                    = 2,
    ELumenRayLightingModeOverride                  = 3

};


// Enum  Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
    Raster                                         = 0,
    RayTracing                                     = 1,
    ETranslucencyType                              = 2

};


// Enum  Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
    Disabled                                       = 0,
    BruteForce                                     = 1,
    FinalGather                                    = 2,
    ERayTracingGlobalIlluminationType              = 3

};


// Enum  Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
    Disabled                                       = 0,
    Hard                                           = 1,
    Area                                           = 2,
    EReflectedAndRefractedRayTracedShadows         = 3

};


// Enum  Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8_t
{
    Usual                                          = 0,
    MobilePPRExclusive                             = 1,
    MobilePPR                                      = 2,
    EMobilePlanarReflectionMode                    = 3

};


// Enum  Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8_t
{
    Disabled                                       = 0,
    BestPerformance                                = 1,
    BetterQuality                                  = 2,
    BestQuality                                    = 3,
    EMobilePixelProjectedReflectionQuality         = 4

};


// Enum  Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
    MP                                             = 0,
    MP                                             = 1,
    MP                                             = 2,
    MP                                             = 3,
    MP                                             = 4,
    MP                                             = 5,
    MP                                             = 6,
    MP                                             = 7,
    MP                                             = 8,
    MP                                             = 9,
    MP                                             = 10,
    MP                                             = 11,
    MP                                             = 12,
    MP                                             = 13,
    MP                                             = 14,
    MP                                             = 15,
    MP                                             = 16,
    MP                                             = 17,
    MP                                             = 18,
    MP                                             = 19,
    MP                                             = 20,
    MP                                             = 21,
    MP                                             = 22,
    MP                                             = 23,
    MP                                             = 24,
    MP                                             = 25,
    MP                                             = 26,
    MP                                             = 27,
    MP                                             = 28,
    MP                                             = 29,
    MP                                             = 30,
    MP                                             = 31,
    MP                                             = 32,
    MP                                             = 33

};


// Enum  Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
    AAM                                            = 0,
    AAM                                            = 1,
    AAM                                            = 2,
    AAM                                            = 3,
    AAM                                            = 4,
    AAM                                            = 5

};


// Enum  Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
    Before                                         = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshGeoImportVersions                 = 3

};


// Enum  Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
    Before                                         = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshSkinningImportVersions            = 3

};


// Enum  Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8_t
{
    SMTC                                           = 0,
    SMTC                                           = 1,
    SMTC                                           = 2,
    SMTC                                           = 3,
    SMTC                                           = 4,
    SMTC                                           = 5,
    SMTC                                           = 6

};


// Enum  Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8_t
{
    SMOT                                           = 0,
    SMOT                                           = 1,
    SMOT                                           = 2,
    SMOT                                           = 3

};


// Enum  Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8_t
{
    SMOI                                           = 0,
    SMOI                                           = 1,
    SMOI                                           = 2,
    SMOI                                           = 3,
    SMOI                                           = 4,
    SMOI                                           = 5,
    SMOI                                           = 6

};


// Enum  Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
    Auto                                           = 0,
    Disabled                                       = 255,
    Enabled                                        = 1,
    ESkinCacheUsage                                = 256

};


// Enum  Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    ESkinCacheDefaultBehavior                      = 2

};


// Enum  Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
    BVS                                            = 0,
    BVS                                            = 1,
    BVS                                            = 2,
    BVS                                            = 3

};


// Enum  Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
    PBO                                            = 0,
    PBO                                            = 1,
    PBO                                            = 2

};


// Enum  Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
    AlwaysTickPoseAndRefreshBones                  = 0,
    AlwaysTickPose                                 = 1,
    OnlyTickMontagesWhenNotRendered                = 2,
    OnlyTickPoseWhenRendered                       = 3,
    EVisibilityBasedAnimTickOption                 = 4

};


// Enum  Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
    WorldSpace                                     = 0,
    ComponentSpace                                 = 1,
    EBoneSpaces                                    = 2

};


// Enum  Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
    SLS                                            = 0,
    SLS                                            = 1,
    SLS                                            = 2

};


// Enum  Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
    SOUNDDISTANCE                                  = 0,
    SOUNDDISTANCE                                  = 1,
    SOUNDDISTANCE                                  = 2,
    SOUNDDISTANCE                                  = 3,
    SOUNDDISTANCE                                  = 4

};


// Enum  Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
    SPATIALIZATION                                 = 0,
    SPATIALIZATION                                 = 1,
    SPATIALIZATION                                 = 2

};


// Enum  Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    EAirAbsorptionMethod                           = 2

};


// Enum  Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EReverbSendMethod                              = 3

};


// Enum  Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESubmixSendMethod                              = 3

};


// Enum  Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EPriorityAttenuationMethod                     = 3

};


// Enum  Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
    SOUNDGROUP                                     = 0,
    SOUNDGROUP                                     = 1,
    SOUNDGROUP                                     = 2,
    SOUNDGROUP                                     = 3,
    SOUNDGROUP                                     = 4,
    SOUNDGROUP                                     = 5,
    SOUNDGROUP                                     = 6,
    SOUNDGROUP                                     = 7,
    SOUNDGROUP                                     = 8,
    SOUNDGROUP                                     = 9,
    SOUNDGROUP                                     = 10,
    SOUNDGROUP                                     = 11,
    SOUNDGROUP                                     = 12,
    SOUNDGROUP                                     = 13,
    SOUNDGROUP                                     = 14,
    SOUNDGROUP                                     = 15,
    SOUNDGROUP                                     = 16,
    SOUNDGROUP                                     = 17,
    SOUNDGROUP                                     = 18,
    SOUNDGROUP                                     = 19,
    SOUNDGROUP                                     = 20,
    SOUNDGROUP                                     = 21,
    SOUNDGROUP                                     = 22,
    SOUNDGROUP                                     = 23,
    SOUNDGROUP                                     = 24,
    SOUNDGROUP                                     = 25

};


// Enum  Engine.ModulationParamMode
enum class ModulationParamMode : uint8_t
{
    MPM                                            = 0,
    MPM                                            = 1,
    MPM                                            = 2,
    MPM                                            = 3

};


// Enum  Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESourceBusSendLevelControlMethod               = 3

};


// Enum  Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
    DTYPE                                          = 0,
    DTYPE                                          = 1,
    DTYPE                                          = 2,
    DTYPE                                          = 3,
    DTYPE                                          = 4,
    DTYPE                                          = 5,
    DTYPE                                          = 6,
    DTYPE                                          = 7,
    DTYPE                                          = 8

};


// Enum  Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
    VerySmall                                      = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    VeryLarge                                      = 4,
    ESoundWaveFFTSize                              = 5

};


// Enum  Engine.ESoundAssetCompressionType
enum class ESoundAssetCompressionType : uint8_t
{
    BinkAudio                                      = 0,
    ADPCM                                          = 1,
    PCM                                            = 2,
    PlatformSpecific                               = 3,
    ProjectDefined                                 = 4,
    ESoundAssetCompressionType                     = 5

};


// Enum  Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
    Inherited                                      = 0,
    RetainOnLoad                                   = 1,
    PrimeOnLoad                                    = 2,
    LoadOnDemand                                   = 3,
    ForceInline                                    = 4,
    Uninitialized                                  = 255,
    ESoundWaveLoadingBehavior                      = 256

};


// Enum  Engine.ENormalMode
enum class ENormalMode : uint8_t
{
    NM                                             = 0,
    NM                                             = 1,
    NM                                             = 2,
    NM                                             = 3,
    TEMP                                           = 4,
    ENormalMode                                    = 5

};


// Enum  Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
    IL                                             = 0,
    IL                                             = 1,
    IL                                             = 2,
    IL                                             = 3,
    IL                                             = 4,
    IL                                             = 5,
    TEMP                                           = 6,
    EImportanceLevel                               = 7

};


// Enum  Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
    OT                                             = 0,
    OT                                             = 1,
    OT                                             = 2

};


// Enum  Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
    SLT                                            = 0,
    SLT                                            = 1,
    SLT                                            = 2,
    SLT                                            = 3

};


// Enum  Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
    SLSH                                           = 0,
    SLSH                                           = 1,
    SLSH                                           = 2,
    SLSH                                           = 3,
    SLSH                                           = 4

};


// Enum  Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
    BVC                                            = 0,
    BVC                                            = 1,
    BVC                                            = 2

};


// Enum  Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
    OSM                                            = 0,
    OSM                                            = 1,
    OSM                                            = 2,
    OSM                                            = 3,
    OSM                                            = 4,
    OSM                                            = 5

};


// Enum  Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
    EHTA                                           = 0,
    EHTA                                           = 1,
    EHTA                                           = 2,
    EHTA                                           = 3

};


// Enum  Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
    EVRTA                                          = 0,
    EVRTA                                          = 1,
    EVRTA                                          = 2,
    EVRTA                                          = 3,
    EVRTA                                          = 4

};


// Enum  Engine.TextureFilter
enum class TextureFilter : uint8_t
{
    TF                                             = 0,
    TF                                             = 1,
    TF                                             = 2,
    TF                                             = 3,
    TF                                             = 4

};


// Enum  Engine.TextureAddress
enum class TextureAddress : uint8_t
{
    TA                                             = 0,
    TA                                             = 1,
    TA                                             = 2,
    TA                                             = 3

};


// Enum  Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
    TMC                                            = 0,
    TMC                                            = 1,
    TMC                                            = 2,
    TMC                                            = 3

};


// Enum  Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
    TCQ                                            = 0,
    TCQ                                            = 1,
    TCQ                                            = 2,
    TCQ                                            = 3,
    TCQ                                            = 4,
    TCQ                                            = 5,
    TCQ                                            = 6

};


// Enum  Engine.TextureGroup
enum class TextureGroup : uint8_t
{
    TEXTUREGROUP                                   = 0,
    TEXTUREGROUP                                   = 1,
    TEXTUREGROUP                                   = 2,
    TEXTUREGROUP                                   = 3,
    TEXTUREGROUP                                   = 4,
    TEXTUREGROUP                                   = 5,
    TEXTUREGROUP                                   = 6,
    TEXTUREGROUP                                   = 7,
    TEXTUREGROUP                                   = 8,
    TEXTUREGROUP                                   = 9,
    TEXTUREGROUP                                   = 10,
    TEXTUREGROUP                                   = 11,
    TEXTUREGROUP                                   = 12,
    TEXTUREGROUP                                   = 13,
    TEXTUREGROUP                                   = 14,
    TEXTUREGROUP                                   = 15,
    TEXTUREGROUP                                   = 16,
    TEXTUREGROUP                                   = 17,
    TEXTUREGROUP                                   = 18,
    TEXTUREGROUP                                   = 19,
    TEXTUREGROUP                                   = 20,
    TEXTUREGROUP                                   = 21,
    TEXTUREGROUP                                   = 22,
    TEXTUREGROUP                                   = 23,
    TEXTUREGROUP                                   = 24,
    TEXTUREGROUP                                   = 25,
    TEXTUREGROUP                                   = 26,
    TEXTUREGROUP                                   = 27,
    TEXTUREGROUP                                   = 28,
    TEXTUREGROUP                                   = 29,
    TEXTUREGROUP                                   = 30,
    TEXTUREGROUP                                   = 31,
    TEXTUREGROUP                                   = 32,
    TEXTUREGROUP                                   = 33,
    TEXTUREGROUP                                   = 34,
    TEXTUREGROUP                                   = 35,
    TEXTUREGROUP                                   = 36,
    TEXTUREGROUP                                   = 37,
    TEXTUREGROUP                                   = 38,
    TEXTUREGROUP                                   = 39,
    TEXTUREGROUP                                   = 40,
    TEXTUREGROUP                                   = 41,
    TEXTUREGROUP                                   = 42,
    TEXTUREGROUP                                   = 43,
    TEXTUREGROUP                                   = 44,
    TEXTUREGROUP                                   = 45,
    TEXTUREGROUP                                   = 46,
    TEXTUREGROUP                                   = 47,
    TEXTUREGROUP                                   = 48,
    TEXTUREGROUP                                   = 49,
    TEXTUREGROUP                                   = 50,
    TEXTUREGROUP                                   = 51,
    TEXTUREGROUP                                   = 52

};


// Enum  Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8_t
{
    TMGS                                           = 0,
    TMGS                                           = 1,
    TMGS                                           = 2,
    TMGS                                           = 3,
    TMGS                                           = 4,
    TMGS                                           = 5,
    TMGS                                           = 6,
    TMGS                                           = 7,
    TMGS                                           = 8,
    TMGS                                           = 9,
    TMGS                                           = 10,
    TMGS                                           = 11,
    TMGS                                           = 12,
    TMGS                                           = 13,
    TMGS                                           = 14,
    TMGS                                           = 15,
    TMGS                                           = 16,
    TMGS                                           = 17,
    TMGS                                           = 18,
    TMGS                                           = 19,
    TMGS                                           = 20,
    TMGS                                           = 21,
    TMGS                                           = 22

};


// Enum  Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
    None                                           = 0,
    PadToPowerOfTwo                                = 1,
    PadToSquarePowerOfTwo                          = 2,
    ETexturePowerOfTwoSetting                      = 3

};


// Enum  Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
    Point                                          = 0,
    Bilinear                                       = 1,
    Trilinear                                      = 2,
    AnisotropicPoint                               = 3,
    AnisotropicLinear                              = 4,
    ETextureSamplerFilter                          = 5

};


// Enum  Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
    Default                                        = 0,
    AllMips                                        = 1,
    OnlyFirstMip                                   = 2,
    ETextureMipLoadOptions                         = 3

};


// Enum  Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
    Default                                        = 0,
    Unfiltered                                     = 1,
    SimpleAverage                                  = 2,
    Sharpen0                                       = 3,
    Sharpen1                                       = 4,
    Sharpen2                                       = 5,
    Sharpen3                                       = 6,
    Sharpen4                                       = 7,
    Sharpen5                                       = 8,
    Sharpen6                                       = 9,
    Sharpen7                                       = 10,
    Sharpen8                                       = 11,
    Sharpen9                                       = 12,
    Sharpen10                                      = 13,
    ETextureDownscaleOptions                       = 14

};


// Enum  Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
    TLCA                                           = 0,
    TLCA                                           = 1,
    TLCA                                           = 2,
    TLCA                                           = 3,
    TLCA                                           = 4,
    TLCA                                           = 5,
    TLCA                                           = 6,
    TLCA                                           = 7

};


// Enum  Engine.ETextureEncodeSpeed
enum class ETextureEncodeSpeed : uint8_t
{
    Final                                          = 0,
    FinalIfAvailable                               = 1,
    Fast                                           = 2,
    ETextureEncodeSpeed                            = 3

};


// Enum  Engine.ETextureClass
enum class ETextureClass : uint8_t
{
    Invalid                                        = 0,
    TwoD                                           = 1,
    Cube                                           = 2,
    Array                                          = 3,
    CubeArray                                      = 4,
    Volume                                         = 5,
    TwoDDynamic                                    = 6,
    RenderTarget                                   = 7,
    Other2DNoSource                                = 8,
    OtherUnknown                                   = 9,
    ETextureClass                                  = 10

};


// Enum  Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
    CTM                                            = 0,
    CTM                                            = 1,
    CTM                                            = 2,
    CTM                                            = 3,
    CTM                                            = 4,
    CTM                                            = 5

};


// Enum  Engine.ETextureSourceCompressionFormat
enum class ETextureSourceCompressionFormat : uint8_t
{
    TSCF                                           = 0,
    TSCF                                           = 1,
    TSCF                                           = 2,
    TSCF                                           = 3

};


// Enum  Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
    TSF                                            = 0,
    TSF                                            = 1,
    TSF                                            = 2,
    TSF                                            = 3,
    TSF                                            = 4,
    TSF                                            = 5,
    TSF                                            = 6,
    TSF                                            = 7,
    TSF                                            = 8,
    TSF                                            = 9,
    TSF                                            = 10,
    TSF                                            = 11,
    TSF                                            = 12,
    TSF                                            = 6,
    TSF                                            = 7

};


// Enum  Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8_t
{
    TC                                             = 0,
    TC                                             = 1,
    TC                                             = 2,
    TC                                             = 3,
    TC                                             = 4,
    TC                                             = 5,
    TC                                             = 6,
    TC                                             = 7,
    TC                                             = 8,
    TC                                             = 9,
    TC                                             = 10,
    TC                                             = 11,
    TC                                             = 12,
    TC                                             = 13,
    TC                                             = 14,
    TC                                             = 15,
    TC                                             = 16,
    TC                                             = 17

};


// Enum  Engine.ETextureSourceEncoding
enum class ETextureSourceEncoding : uint8_t
{
    TSE                                            = 0,
    TSE                                            = 1,
    TSE                                            = 2,
    TSE                                            = 3,
    TSE                                            = 4,
    TSE                                            = 5,
    TSE                                            = 6,
    TSE                                            = 7,
    TSE                                            = 8,
    TSE                                            = 9,
    TSE                                            = 10,
    TSE                                            = 11,
    TSE                                            = 12,
    TSE                                            = 13,
    TSE                                            = 14,
    TSE                                            = 15,
    TSE                                            = 16,
    TSE                                            = 17

};


// Enum  Engine.ETextureColorSpace
enum class ETextureColorSpace : uint8_t
{
    TCS                                            = 0,
    TCS                                            = 1,
    TCS                                            = 2,
    TCS                                            = 3,
    TCS                                            = 4,
    TCS                                            = 5,
    TCS                                            = 6,
    TCS                                            = 7,
    TCS                                            = 8,
    TCS                                            = 9,
    TCS                                            = 10,
    TCS                                            = 11,
    TCS                                            = 12,
    TCS                                            = 13,
    TCS                                            = 99,
    TCS                                            = 100

};


// Enum  Engine.ETextureChromaticAdaptationMethod
enum class ETextureChromaticAdaptationMethod : uint8_t
{
    TCAM                                           = 0,
    TCAM                                           = 1,
    TCAM                                           = 2,
    TCAM                                           = 3

};


// Enum  Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
    RTF                                            = 0,
    RTF                                            = 1,
    RTF                                            = 2,
    RTF                                            = 3,
    RTF                                            = 4,
    RTF                                            = 5,
    RTF                                            = 6,
    RTF                                            = 7,
    RTF                                            = 8,
    RTF                                            = 9,
    RTF                                            = 10,
    RTF                                            = 11

};


// Enum  Engine.TgfMaterial
enum class TgfMaterial : uint8_t
{
    Default                                        = 0,
    TgfFOVConfig                                   = 1,
    TgfFOVDstPos                                   = 2,
    TgfFOVSrcPos                                   = 3,
    TgfPBRConfig                                   = 4,
    TgfRampTexture                                 = 5,
    TgfMaterial                                    = 6

};


// Enum  Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
    TL                                             = 0,
    TL                                             = 1,
    TL                                             = 2

};


// Enum  Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    ETimelineDirection                             = 2

};


// Enum  Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
    TRM                                            = 0,
    TRM                                            = 1,
    TRM                                            = 2,
    TRM                                            = 3

};


// Enum  Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
    TID                                            = 0,
    TID                                            = 1,
    TID                                            = 2,
    TID                                            = 3

};


// Enum  Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
    UDSS                                           = 0,
    UDSS                                           = 1,
    UDSS                                           = 2,
    UDSS                                           = 3,
    UDSS                                           = 4

};


// Enum  Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
    VFCO                                           = 0,
    VFCO                                           = 1,
    VFCO                                           = 2

};


// Enum  Engine.ESplitScreenType
enum class ESplitScreenType : uint8_t
{
    None                                           = 0,
    TwoPlayer                                      = 1,
    TwoPlayer                                      = 2,
    ThreePlayer                                    = 3,
    ThreePlayer                                    = 4,
    ThreePlayer                                    = 5,
    ThreePlayer                                    = 6,
    FourPlayer                                     = 7,
    FourPlayer                                     = 8,
    FourPlayer                                     = 9,
    SplitTypeCount                                 = 10,
    ESplitScreenType                               = 11

};


// Enum  Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
    Directional                                    = 0,
    Point                                          = 1,
    EWindSourceType                                = 2

};


// Enum  Engine.EStreamingSourceTargetState
enum class EStreamingSourceTargetState : uint8_t
{
    Loaded                                         = 0,
    Activated                                      = 1,
    EStreamingSourceTargetState                    = 2

};


// Enum  Engine.EStreamingSourcePriority
enum class EStreamingSourcePriority : uint8_t
{
    Highest                                        = 0,
    High                                           = 64,
    Normal                                         = 128,
    Low                                            = 192,
    Lowest                                         = 255,
    Default                                        = 128,
    EStreamingSourcePriority                       = 256

};


// Enum  Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
    VIS                                            = 0,
    VIS                                            = 1,
    VIS                                            = 2,
    VIS                                            = 3

};


// Enum  Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
    VLM                                            = 0,
    VLM                                            = 1,
    VLM                                            = 2

};


// Enum  Engine.EHierarchicalSimplificationMethod
enum class EHierarchicalSimplificationMethod : uint8_t
{
    None                                           = 0,
    Merge                                          = 1,
    Simplify                                       = 2,
    Approximate                                    = 3,
    EHierarchicalSimplificationMethod              = 4

};


// Enum  Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8_t
{
    HalfNote                                       = 0,
    QuarterNote                                    = 1,
    EighthNote                                     = 2,
    SixteenthNote                                  = 3,
    ThirtySecondNote                               = 4,
    Count                                          = 5,
    EQuartzTimeSignatureQuantization               = 6

};


// Enum  Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8_t
{
    MetronomeTick                                  = 0,
    CommandEvent                                   = 1,
    Count                                          = 2,
    EQuartzDelegateType                            = 3

};


// Enum  Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8_t
{
    BarRelative                                    = 0,
    TransportRelative                              = 1,
    CurrentTimeRelative                            = 2,
    Count                                          = 3,
    EQuarztQuantizationReference                   = 4

};


// Enum  Engine.EQuartzCommandType
enum class EQuartzCommandType : uint8_t
{
    PlaySound                                      = 0,
    QueueSoundToPlay                               = 1,
    RetriggerSound                                 = 2,
    TickRateChange                                 = 3,
    TransportReset                                 = 4,
    StartOtherClock                                = 5,
    Custom                                         = 6,
    EQuartzCommandType                             = 7

};


// Enum  Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
    UseConfigDefault                               = 0,
    AlwaysUpdate                                   = 1,
    OnlyUpdateMovable                              = 2,
    NeverUpdate                                    = 3,
    EActorUpdateOverlapsMethod                     = 4

};


// Enum  Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t
{
    InvalidMode                                    = 0,
    GameMode                                       = 1,
    EditorMode                                     = 2,
    SimulationMode                                 = 3,
    PIEMode                                        = 4,
    InferFromWorldMode                             = 5,
    EditorWorldPartitionBuildMode                  = 6,
    FNavigationSystemRunMode                       = 7

};


// Enum  Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3

};


// Enum  Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
    Default                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringMode                          = 3

};


// Enum  Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
    Invalid                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringModeConfig                    = 3

};


// Enum  Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
    Cleared                                        = 0,
    NewPath                                        = 1,
    UpdatedDueToGoalMoved                          = 2,
    UpdatedDueToNavigationChanged                  = 3,
    Invalidated                                    = 4,
    RePathFailed                                   = 5,
    MetaPathUpdate                                 = 6,
    Custom                                         = 7,
    ENavPathEvent                                  = 8

};


// Enum  Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
    Invalid                                        = 0,
    Error                                          = 1,
    Fail                                           = 2,
    Success                                        = 3,
    ENavigationQueryResult                         = 4

};


// Enum  Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    HermiteCubic                                   = 2,
    Sinusoidal                                     = 3,
    QuadraticInOut                                 = 4,
    CubicInOut                                     = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    Custom                                         = 14,
    EAlphaBlendOption                              = 15

};


// Enum  Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
    CanBeLeader                                    = 0,
    AlwaysFollower                                 = 1,
    AlwaysLeader                                   = 2,
    TransitionLeader                               = 3,
    TransitionFollower                             = 4,
    EAnimGroupRole                                 = 5

};


// Enum  Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8_t
{
    Local                                          = 0,
    Component                                      = 1,
    EAnimSyncGroupScope                            = 2

};


// Enum  Engine.EAnimSyncMethod
enum class EAnimSyncMethod : uint8_t
{
    DoNotSync                                      = 0,
    SyncGroup                                      = 1,
    Graph                                          = 2,
    EAnimSyncMethod                                = 3

};


// Enum  Engine.EAnimExecutionContextConversionResult
enum class EAnimExecutionContextConversionResult : uint8_t
{
    Succeeded                                      = 1,
    Failed                                         = 0,
    EAnimExecutionContextConversionResult          = 2

};


// Enum  Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
    MontageLength                                  = 0,
    Duration                                       = 1,
    EMontagePlayReturnType                         = 2

};


// Enum  Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
    DirectionalArrow                               = 0,
    Sphere                                         = 1,
    Line                                           = 2,
    OnScreenMessage                                = 3,
    CoordinateSystem                               = 4,
    Point                                          = 5,
    Circle                                         = 6,
    Cone                                           = 7,
    EDrawDebugItemType                             = 8

};


// Enum  Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    Proportional                                   = 2,
    EAnimLinkMethod                                = 3

};


// Enum  Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
    Begin                                          = 0,
    End                                            = 1,
    EAnimNotifyEventType                           = 2

};


// Enum  Engine.EMontageBlendMode
enum class EMontageBlendMode : uint8_t
{
    Standard                                       = 0,
    Inertialization                                = 1,
    EMontageBlendMode                              = 2

};


// Enum  Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
    Moved                                          = 0,
    NotMoved                                       = 1,
    InvalidSection                                 = 2,
    InvalidMontage                                 = 3,
    EMontageSubStepResult                          = 4

};


// Enum  Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
    NeverAsPin                                     = 0,
    PinHiddenByDefault                             = 1,
    PinShownByDefault                              = 2,
    AlwaysAsPin                                    = 3,
    EPinHidingMode                                 = 4

};


// Enum  Engine.EAnimNodeDataFlags
enum class EAnimNodeDataFlags : uint8_t
{
    None                                           = 0,
    HasInitialUpdateFunction                       = 1,
    HasBecomeRelevantFunction                      = 2,
    HasUpdateFunction                              = 4,
    EAnimNodeDataFlags                             = 5

};


// Enum  Engine.EAnimNodeReferenceConversionResult
enum class EAnimNodeReferenceConversionResult : uint8_t
{
    Succeeded                                      = 1,
    Failed                                         = 0,
    EAnimNodeReferenceConversionResult             = 2

};


// Enum  Engine.EInertializationState
enum class EInertializationState : uint8_t
{
    Inactive                                       = 0,
    Pending                                        = 1,
    Active                                         = 2,
    EInertializationState                          = 3

};


// Enum  Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    Excluded                                       = 2,
    EInertializationBoneState                      = 3

};


// Enum  Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
    Default                                        = 0,
    WorldSpace                                     = 1,
    WorldRotation                                  = 2,
    EInertializationSpace                          = 3

};


// Enum  Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
    EDS                                            = 0,
    EDS                                            = 1,
    EDS                                            = 2

};


// Enum  Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
    EM                                             = 0,
    EM                                             = 1,
    EM                                             = 2,
    EM                                             = 3

};


// Enum  Engine.ETransitionRequestQueueMode
enum class ETransitionRequestQueueMode : uint8_t
{
    Shared                                         = 0,
    Unique                                         = 1,
    ETransitionRequestQueueMode                    = 2

};


// Enum  Engine.ETransitionRequestOverwriteMode
enum class ETransitionRequestOverwriteMode : uint8_t
{
    Append                                         = 0,
    Ignore                                         = 1,
    Overwrite                                      = 2,
    ETransitionRequestOverwriteMode                = 3

};


// Enum  Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
    TBM                                            = 0,
    TBM                                            = 1,
    TBM                                            = 2

};


// Enum  Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
    TLT                                            = 0,
    TLT                                            = 1,
    TLT                                            = 2,
    TLT                                            = 3

};


// Enum  Engine.EAnimPropertyAccessCallSite
enum class EAnimPropertyAccessCallSite : uint8_t
{
    WorkerThread                                   = 0,
    WorkerThread                                   = 1,
    WorkerThread                                   = 2,
    GameThread                                     = 3,
    GameThread                                     = 4,
    EAnimPropertyAccessCallSite                    = 5

};


// Enum  Engine.EBlendProfileMode
enum class EBlendProfileMode : uint8_t
{
    TimeFactor                                     = 0,
    WeightFactor                                   = 1,
    BlendMask                                      = 2,
    EBlendProfileMode                              = 3

};


// Enum  Engine.ETransformCurveChannel
enum class ETransformCurveChannel : uint8_t
{
    Position                                       = 0,
    Rotation                                       = 1,
    Scale                                          = 2,
    Invalid                                        = 3,
    ETransformCurveChannel                         = 4

};


// Enum  Engine.EVectorCurveChannel
enum class EVectorCurveChannel : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    Invalid                                        = 3,
    EVectorCurveChannel                            = 4

};


// Enum  Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
    None                                           = 0,
    LogicalNegateBool                              = 1,
    EPostCopyOperation                             = 2

};


// Enum  Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
    Float                                          = 0,
    Bool                                           = 1,
    Curve                                          = 2,
    EAnimAlphaInputType                            = 3

};


// Enum  Engine.EMirrorRowType
enum class EMirrorRowType : uint8_t
{
    Bone                                           = 0,
    AnimationNotify                                = 1,
    Curve                                          = 2,
    SyncMarker                                     = 3,
    Custom                                         = 4,
    EMirrorRowType                                 = 5

};


// Enum  Engine.EMirrorFindReplaceMethod
enum class EMirrorFindReplaceMethod : uint8_t
{
    Prefix                                         = 0,
    Suffix                                         = 1,
    RegularExpression                              = 2,
    EMirrorFindReplaceMethod                       = 3

};


// Enum  Engine.ETrajectorySampleDomain
enum class ETrajectorySampleDomain : uint8_t
{
    None                                           = 0,
    Time                                           = 1,
    Distance                                       = 2,
    ETrajectorySampleDomain                        = 3

};


// Enum  Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
    Orientation                                    = 0,
    Translation                                    = 1,
    MAX                                            = 2

};


// Enum  Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    EConstraintTransform                           = 2

};


// Enum  Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
    Animation                                      = 0,
    Skeleton                                       = 1,
    AnimationScaled                                = 2,
    AnimationRelative                              = 3,
    OrientAndScale                                 = 4,
    EBoneTranslationRetargetingMode                = 5

};


// Enum  Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
    T                                              = 0,
    T                                              = 1,
    T                                              = 2,
    MAX                                            = 3

};


// Enum  Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
    LinkedLayers                                   = 0,
    LinkedAnimGraph                                = 1,
    EPreviewAnimationBlueprintApplicationMethod    = 2

};


// Enum  Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
    Unknown                                        = 0,
    NeverCook                                      = 1,
    DevelopmentCook                                = 2,
    DevelopmentAlwaysCook                          = 3,
    AlwaysCook                                     = 4,
    EPrimaryAssetCookRule                          = 5

};


// Enum  Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    Inverse                                        = 2,
    LogReverse                                     = 3,
    NaturalSound                                   = 4,
    Custom                                         = 5,
    EAttenuationDistanceModel                      = 6

};


// Enum  Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
    Sphere                                         = 0,
    Capsule                                        = 1,
    Box                                            = 2,
    Cone                                           = 3,
    EAttenuationShape                              = 4

};


// Enum  Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
    Continues                                      = 0,
    Silent                                         = 1,
    Hold                                           = 2,
    ENaturalSoundFalloffMode                       = 3

};


// Enum  Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Quad                                           = 3,
    FivePointOne                                   = 5,
    SevenPointOne                                  = 7,
    EAudioBusChannels                              = 8

};


// Enum  Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
    Low16000Hz                                     = 16000,
    Normal24000Hz                                  = 24000,
    EVoiceSampleRate                               = 24001

};


// Enum  Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    EPanningMethod                                 = 2

};


// Enum  Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    FullVolume                                     = 2,
    EMonoChannelUpmixMethod                        = 3

};


// Enum  Engine.EDefaultAudioCompressionType
enum class EDefaultAudioCompressionType : uint8_t
{
    BinkAudio                                      = 0,
    ADPCM                                          = 1,
    PCM                                            = 2,
    PlatformSpecific                               = 3,
    EDefaultAudioCompressionType                   = 4

};


// Enum  Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8_t
{
    InsideTheVolume                                = 0,
    OutsideTheVolume                               = 1,
    EAudioVolumeLocationState                      = 2

};


// Enum  Engine.EInterfaceValidResult
enum class EInterfaceValidResult : uint8_t
{
    Valid                                          = 0,
    Invalid                                        = 1,
    EInterfaceValidResult                          = 2

};


// Enum  Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8_t
{
    ApplyAsAbsolute                                = 1,
    SkipAutoScale                                  = 2,
    SkipAutoPlaySpace                              = 4,
    Default                                        = 0,
    ECameraShakeUpdateResultFlags                  = 5

};


// Enum  Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
    Fixed                                          = 0,
    Infinite                                       = 1,
    Custom                                         = 2,
    ECameraShakeDurationType                       = 3

};


// Enum  Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
    Linear                                         = 0,
    Quadratic                                      = 1,
    ECameraShakeAttenuation                        = 2

};


// Enum  Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
    CABM                                           = 0,
    CABM                                           = 1,
    CABM                                           = 2

};


// Enum  Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    SCurve                                         = 2,
    Sin                                            = 3,
    Count                                          = 4,
    EAudioFaderCurve                               = 5

};


// Enum  Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
    CAS                                            = 0,
    CAS                                            = 1,
    CAS                                            = 2

};


// Enum  Engine.ESyncOption
enum class ESyncOption : uint8_t
{
    Drive                                          = 0,
    Passive                                        = 1,
    Disabled                                       = 2,
    ESyncOption                                    = 3

};


// Enum  Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
    CapturedScene                                  = 0,
    SpecifiedCubemap                               = 1,
    EReflectionSourceType                          = 2

};


// Enum  Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
    PRM                                            = 0,
    PRM                                            = 1,
    PRM                                            = 2,
    PRM                                            = 3

};


// Enum  Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
    AttributeCurve                                 = 0,
    MaterialCurve                                  = 1,
    MorphTargetCurve                               = 2,
    MaxAnimCurveType                               = 3,
    EAnimCurveType                                 = 4

};


// Enum  Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8_t
{
    BoneOnly                                       = 0,
    ImmediateParent                                = 1,
    ParentHierarchy                                = 2,
    ECustomBoneAttributeLookup                     = 3

};


// Enum  Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
    SkipSimulatingBones                            = 0,
    SkipAllBones                                   = 1,
    EKinematicBonesUpdateToPhysics                 = 2

};


// Enum  Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
    AnimationBlueprint                             = 0,
    AnimationSingleNode                            = 1,
    AnimationCustomMode                            = 2,
    EAnimationMode                                 = 3

};


// Enum  Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
    SimulationUpatesComponentTransform             = 0,
    ComponentTransformIsKinematic                  = 1,
    EPhysicsTransformUpdateMode                    = 2

};


// Enum  Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
    PlanetTopAtAbsoluteWorldOrigin                 = 0,
    PlanetTopAtComponentTransform                  = 1,
    PlanetCenterAtComponentTransform               = 2,
    ESkyAtmosphereTransformMode                    = 3

};


// Enum  Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
    Linear                                         = 0,
    Curve                                          = 1,
    Constant                                       = 2,
    CurveClamped                                   = 3,
    CurveCustomTangent                             = 4,
    ESplinePointType                               = 5

};


// Enum  Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
    Local                                          = 0,
    World                                          = 1,
    ESplineCoordinateSpace                         = 2

};


// Enum  Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ESplineMeshAxis                                = 3

};


// Enum  Engine.EVolumetricCloudTracingMaxDistanceMode
enum class EVolumetricCloudTracingMaxDistanceMode : uint8_t
{
    DistanceFromCloudLayerEntryPoint               = 0,
    DistanceFromPointOfView                        = 1,
    EVolumetricCloudTracingMaxDistanceMode         = 2

};


// Enum  Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
    Empty                                          = 0,
    SimpleCurves                                   = 1,
    RichCurves                                     = 2,
    ECurveTableMode                                = 3

};


// Enum  Engine.FDataDrivenCVarType
enum class FDataDrivenCVarType : uint8_t
{
    CVarFloat                                      = 0,
    CVarInt                                        = 1,
    CVarBool                                       = 2,
    FDataDrivenCVarType                            = 3

};


// Enum  Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
    RowFound                                       = 0,
    RowNotFound                                    = 1,
    EEvaluateCurveTableResult                      = 2

};


// Enum  Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
    Line                                           = 0,
    Dash                                           = 1,
    EReporterLineStyle                             = 2

};


// Enum  Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
    Lines                                          = 0,
    Notches                                        = 1,
    Grid                                           = 2,
    EGraphAxisStyle                                = 3

};


// Enum  Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
    Lines                                          = 0,
    Filled                                         = 1,
    EGraphDataStyle                                = 2

};


// Enum  Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
    Outside                                        = 0,
    Inside                                         = 1,
    ELegendPosition                                = 2

};


// Enum  Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
    Neuter                                         = 0,
    Masculine                                      = 1,
    Feminine                                       = 2,
    Mixed                                          = 3,
    EGrammaticalGender                             = 4

};


// Enum  Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
    Singular                                       = 0,
    Plural                                         = 1,
    EGrammaticalNumber                             = 2

};


// Enum  Engine.ETypedElementWorldType
enum class ETypedElementWorldType : uint8_t
{
    Game                                           = 0,
    Editor                                         = 1,
    ETypedElementWorldType                         = 2

};


// Enum  Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ECustomTimeStepSynchronizationState            = 4

};


// Enum  Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
    RoundWholeNumber                               = 0,
    RoundOneDecimal                                = 1,
    RoundTwoDecimals                               = 2,
    EVectorQuantization                            = 3

};


// Enum  Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
    ByteComponents                                 = 0,
    ShortComponents                                = 1,
    ERotatorQuantization                           = 2

};


// Enum  Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ETimecodeProviderSynchronizationState          = 4

};


// Enum  Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
    Offline                                        = 0,
    Runtime                                        = 1,
    EFontCacheType                                 = 2

};


// Enum  Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    ERootMotionAccumulateMode                      = 2

};


// Enum  Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
    Prepared                                       = 1,
    Finished                                       = 2,
    MarkedForRemoval                               = 4,
    ERootMotionSourceStatusFlags                   = 5

};


// Enum  Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
    UseSensitiveLiftoffCheck                       = 1,
    DisablePartialEndTick                          = 2,
    IgnoreZAccumulate                              = 4,
    ERootMotionSourceSettingsFlags                 = 5

};


// Enum  Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
    MaintainLastRootMotionVelocity                 = 0,
    SetVelocity                                    = 1,
    ClampVelocity                                  = 2,
    ERootMotionFinishVelocityMode                  = 3

};


// Enum  Engine.EWindowMode
enum class EWindowMode : uint8_t
{
    Fullscreen                                     = 0,
    WindowedFullscreen                             = 1,
    Windowed                                       = 2,
    EWindowMode                                    = 3

};


// Enum  Engine.ETGFSSMode
enum class ETGFSSMode : uint8_t
{
    TGFSSMODE                                      = 0,
    TGFSSMODE                                      = 1,
    TGFSSMODE                                      = 2,
    TGFSSMODE                                      = 3,
    TGFSSMODE                                      = 4,
    TGFSSMODE                                      = 5,
    TGFSSMODE                                      = 6,
    TGFSSMODE                                      = 7,
    TGFSSMODE                                      = 8,
    TGFSSMODE                                      = 9,
    TGFSSMODE                                      = 10,
    TGFSSMODE                                      = 11,
    TGFSSMODE                                      = 12

};


// Enum  Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
    None                                           = 0,
    Scroll                                         = 1,
    Magnify                                        = 2,
    Swipe                                          = 3,
    Rotate                                         = 4,
    LongPress                                      = 5,
    ESlateGesture                                  = 6

};


// Enum  Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8_t
{
    None                                           = 0,
    Transient                                      = 1,
    EMIDCreationFlags                              = 2

};


// Enum  Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    SinusoidalIn                                   = 2,
    SinusoidalOut                                  = 3,
    SinusoidalInOut                                = 4,
    EaseIn                                         = 5,
    EaseOut                                        = 6,
    EaseInOut                                      = 7,
    ExpoIn                                         = 8,
    ExpoOut                                        = 9,
    ExpoInOut                                      = 10,
    CircularIn                                     = 11,
    CircularOut                                    = 12,
    CircularInOut                                  = 13,
    EEasingFunc                                    = 14

};


// Enum  Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
    QuatInterp                                     = 0,
    EulerInterp                                    = 1,
    DualQuatInterp                                 = 2,
    ELerpInterpolationMode                         = 3

};


// Enum  Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
    First                                          = 0,
    Second                                         = 1,
    Third                                          = 2,
    Fourth                                         = 3,
    EMatrixColumns                                 = 4

};


// Enum  Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
    Luminance                                      = 0,
    Red                                            = 1,
    Green                                          = 2,
    Blue                                           = 3,
    Alpha                                          = 4,
    EImportanceWeight                              = 5

};


// Enum  Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
    Off                                            = 0,
    Lowest                                         = 1,
    Low                                            = 2,
    Normal                                         = 3,
    High                                           = 4,
    Highest                                        = 5,
    EMeshFeatureImportance                         = 6

};


// Enum  Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
    Triangles                                      = 0,
    Vertices                                       = 1,
    Any                                            = 2,
    EStaticMeshReductionTerimationCriterion        = 3

};


// Enum  Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
    High                                           = 0,
    Medium                                         = 1,
    Low                                            = 2,
    ELandscapeCullingPrecision                     = 3

};


// Enum  Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
    AngleWeighted                                  = 0,
    AreaWeighted                                   = 1,
    EqualWeighted                                  = 2,
    EProxyNormalComputationMethod                  = 3

};


// Enum  Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
    AllLODs                                        = 0,
    SpecificLOD                                    = 1,
    CalculateLOD                                   = 2,
    LowestDetailLOD                                = 3,
    EMeshLODSelectionType                          = 4

};


// Enum  Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
    MeshMergeType                                  = 0,
    MeshMergeType                                  = 1,
    MeshMergeType                                  = 2

};


// Enum  Engine.EUVOutput
enum class EUVOutput : uint8_t
{
    DoNotOutputChannel                             = 0,
    OutputChannel                                  = 1,
    EUVOutput                                      = 2

};


// Enum  Engine.EMeshApproximationType
enum class EMeshApproximationType : uint8_t
{
    MeshAndMaterials                               = 0,
    MeshShapeOnly                                  = 1,
    EMeshApproximationType                         = 2

};


// Enum  Engine.EMeshApproximationBaseCappingType
enum class EMeshApproximationBaseCappingType : uint8_t
{
    NoBaseCapping                                  = 0,
    ConvexPolygon                                  = 1,
    ConvexSolid                                    = 2,
    EMeshApproximationBaseCappingType              = 3

};


// Enum  Engine.EOccludedGeometryFilteringPolicy
enum class EOccludedGeometryFilteringPolicy : uint8_t
{
    NoOcclusionFiltering                           = 0,
    VisibilityBasedFiltering                       = 1,
    EOccludedGeometryFilteringPolicy               = 2

};


// Enum  Engine.EMeshApproximationSimplificationPolicy
enum class EMeshApproximationSimplificationPolicy : uint8_t
{
    FixedTriangleCount                             = 0,
    TrianglesPerArea                               = 1,
    GeometricTolerance                             = 2,
    EMeshApproximationSimplificationPolicy         = 3

};


// Enum  Engine.EMeshApproximationGroundPlaneClippingPolicy
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8_t
{
    NoGroundClipping                               = 0,
    DiscardWithZPlane                              = 1,
    CutWithZPlane                                  = 2,
    CutAndFillWithZPlane                           = 3,
    EMeshApproximationGroundPlaneClippingPolicy    = 4

};


// Enum  Engine.EMeshApproximationUVGenerationPolicy
enum class EMeshApproximationUVGenerationPolicy : uint8_t
{
    PreferUVAtlas                                  = 0,
    PreferXAtlas                                   = 1,
    PreferPatchBuilder                             = 2,
    EMeshApproximationUVGenerationPolicy           = 3

};


// Enum  Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    EVertexPaintAxis                               = 3

};


// Enum  Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease                                  = 3,
    FreeInPool                                     = 4,
    EPSCPoolMethod                                 = 5

};


// Enum  Engine.EPerQualityLevels
enum class EPerQualityLevels : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Epic                                           = 3,
    Cinematic                                      = 4,
    Num                                            = 5,
    EPerQualityLevels                              = 6

};


// Enum  Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
    SLERP                                          = 0,
    TwistAndSwing                                  = 1,
    EAngularDriveMode                              = 2

};


// Enum  Engine.EConstraintTransformComponentFlags
enum class EConstraintTransformComponentFlags : uint8_t
{
    None                                           = 0,
    ChildPosition                                  = 1,
    ChildRotation                                  = 2,
    ParentPosition                                 = 4,
    ParentRotation                                 = 8,
    AllChild                                       = 3,
    AllParent                                      = 12,
    AllPosition                                    = 5,
    AllRotation                                    = 10,
    All                                            = 15,
    EConstraintTransformComponentFlags             = 16

};


// Enum  Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8_t
{
    RBAN                                           = 0,
    World                                          = 1,
    EPhysicsAssetSolverType                        = 2

};


// Enum  Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
    Full3D                                         = 0,
    YZPlane                                        = 1,
    XZPlane                                        = 2,
    XYPlane                                        = 3,
    ESettingsDOF                                   = 4

};


// Enum  Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    Invalid                                        = 4,
    ESettingsLockedAxis                            = 5

};


// Enum  Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
    Start                                          = 0,
    Update                                         = 1,
    Stop                                           = 2,
    EDynamicForceFeedbackAction                    = 3

};


// Enum  Engine.EVoiceBlockReasons
enum class EVoiceBlockReasons : uint8_t
{
    None                                           = 0,
    Muted                                          = 1,
    MutedBy                                        = 2,
    Gameplay                                       = 4,
    Blocked                                        = 8,
    BlockedBy                                      = 16,
    EVoiceBlockReasons                             = 17

};


// Enum  Engine.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
    InternalUnbatched                              = 0,
    ExternalUnbatched                              = 1,
    InternalBatched                                = 2,
    ExternalBatched                                = 3,
    Count                                          = 4,
    EPropertyAccessCopyBatch                       = 5

};


// Enum  Engine.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
    Offset                                         = 0,
    Object                                         = 1,
    Array                                          = 2,
    ScriptFunction                                 = 3,
    NativeFunction                                 = 4,
    EPropertyAccessIndirectionType                 = 5

};


// Enum  Engine.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    WeakObject                                     = 2,
    SoftObject                                     = 3,
    EPropertyAccessObjectType                      = 4

};


// Enum  Engine.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
    None                                           = 0,
    Plain                                          = 1,
    Complex                                        = 2,
    Bool                                           = 3,
    Struct                                         = 4,
    Object                                         = 5,
    Name                                           = 6,
    Array                                          = 7,
    PromoteBoolToByte                              = 8,
    PromoteBoolToInt32                             = 9,
    PromoteBoolToInt64                             = 10,
    PromoteBoolToFloat                             = 11,
    PromoteBoolToDouble                            = 12,
    PromoteByteToInt32                             = 13,
    PromoteByteToInt64                             = 14,
    PromoteByteToFloat                             = 15,
    PromoteByteToDouble                            = 16,
    PromoteInt32ToInt64                            = 17,
    PromoteInt32ToFloat                            = 18,
    PromoteInt32ToDouble                           = 19,
    PromoteFloatToDouble                           = 20,
    DemoteDoubleToFloat                            = 21,
    PromoteArrayFloatToDouble                      = 22,
    DemoteArrayDoubleToFloat                       = 23,
    PromoteMapValueFloatToDouble                   = 24,
    DemoteMapValueDoubleToFloat                    = 25,
    EPropertyAccessCopyType                        = 26

};


// Enum  Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
    NoClear                                        = 0,
    HardwareClear                                  = 1,
    QuadAtMaxZ                                     = 2,
    EClearSceneOptions                             = 3

};


// Enum  Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
    One                                            = 1,
    Two                                            = 2,
    Four                                           = 4,
    Eight                                          = 8,
    ECompositingSampleCount                        = 9

};


// Enum  Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    EnabledOnDemand                                = 2,
    EnabledWithStencil                             = 3,
    ECustomDepthStencil                            = 4

};


// Enum  Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
    None                                           = 0,
    OpaqueOnly                                     = 1,
    OpaqueAndMasked                                = 2,
    Auto                                           = 3,
    EEarlyZPass                                    = 4

};


// Enum  Engine.EVelocityOutputPass
enum class EVelocityOutputPass : uint8_t
{
    DepthPass                                      = 0,
    BasePass                                       = 1,
    AfterBasePass                                  = 2,
    EVelocityOutputPass                            = 3

};


// Enum  Engine.EVertexDeformationOutputsVelocity
enum class EVertexDeformationOutputsVelocity : uint8_t
{
    Off                                            = 0,
    On                                             = 1,
    Auto                                           = 2,
    EVertexDeformationOutputsVelocity              = 3

};


// Enum  Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
    Disabled                                       = 0,
    LinearColorSpaceOnly                           = 1,
    AllowThroughTonemapper                         = 2,
    EAlphaChannelMode                              = 3

};


// Enum  Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
    AEM                                            = 0,
    AEM                                            = 1,
    AEM                                            = 2,
    AEM                                            = 3

};


// Enum  Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
    DBBPF                                          = 0,
    DBBPF                                          = 1,
    DBBPF                                          = 2,
    DBBPF                                          = 3,
    DBBPF                                          = 4,
    DBBPF                                          = 5

};


// Enum  Engine.EFixedFoveationLevels
enum class EFixedFoveationLevels : uint8_t
{
    Disabled                                       = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    HighTop                                        = 4,
    EFixedFoveationLevels                          = 5

};


// Enum  Engine.EMobileAntiAliasingMethod
enum class EMobileAntiAliasingMethod : uint8_t
{
    None                                           = 0,
    FXAA                                           = 1,
    TemporalAA                                     = 2,
    MSAA                                           = 3,
    EMobileAntiAliasingMethod                      = 4

};


// Enum  Engine.EMobileFloatPrecisionMode
enum class EMobileFloatPrecisionMode : uint8_t
{
    Half                                           = 0,
    Full                                           = 1,
    Full                                           = 2,
    EMobileFloatPrecisionMode                      = 3

};


// Enum  Engine.EMobileShadingPath
enum class EMobileShadingPath : uint8_t
{
    Forward                                        = 0,
    Deferred                                       = 1,
    EMobileShadingPath                             = 2

};


// Enum  Engine.EShaderCompressionFormat
enum class EShaderCompressionFormat : uint8_t
{
    None                                           = 0,
    LZ4                                            = 1,
    Oodle                                          = 2,
    Zlib                                           = 3,
    EShaderCompressionFormat                       = 4

};


// Enum  Engine.ELumenSoftwareTracingMode
enum class ELumenSoftwareTracingMode : uint8_t
{
    DetailTracing                                  = 1,
    GlobalTracing                                  = 0,
    ELumenSoftwareTracingMode                      = 2

};


// Enum  Engine.ELumenRayLightingMode
enum class ELumenRayLightingMode : uint8_t
{
    SurfaceCache                                   = 0,
    HitLighting                                    = 2,
    ELumenRayLightingMode                          = 3

};


// Enum  Engine.EWorkingColorSpace
enum class EWorkingColorSpace : uint8_t
{
    sRGB                                           = 1,
    Rec2020                                        = 2,
    ACESAP0                                        = 3,
    ACESAP1                                        = 4,
    P3DCI                                          = 5,
    P3D65                                          = 6,
    Custom                                         = 7,
    EWorkingColorSpace                             = 8

};


// Enum  Engine.ESkeletalMeshAsyncProperties
enum class ESkeletalMeshAsyncProperties : uint8_t
{
    None                                           = 0,
    Materials                                      = 1,
    Skeleton                                       = 2,
    RefSkeleton                                    = 4,
    RetargetBasePose                               = 8,
    RefBasesInvMatrix                              = 16,
    MeshClothingAssets                             = 32,
    UseLegacyMeshDerivedDataKey                    = 64,
    HasActiveClothingAssets                        = 128,
    LODSettings                                    = 256,
    HasVertexColors                                = 512,
    VertexColorGuid                                = 1024,
    MorphTargets                                   = 2048,
    SkeletalMeshRenderData                         = 4096,
    MeshEditorDataObject                           = 8192,
    NeverStream                                    = 16384,
    OverrideLODStreamingSettings                   = 32768,
    SupportLODStreaming                            = 65536,
    MaxNumStreamedLODs                             = 131072,
    MaxNumOptionalLODs                             = 262144,
    ImportedModel                                  = 524288,
    LODInfo                                        = 1048576,
    SkinWeightProfiles                             = 2097152,
    CachedComposedRefPoseMatrices                  = 4194304,
    SamplingInfo                                   = 8388608,
    NodeMappingData                                = 16777216,
    ShadowPhysicsAsset                             = 33554432,
    SkelMirrorTable                                = 67108864,
    MinLod                                         = 134217728,
    DisableBelowMinLodStripping                    = 268435456,
    SkelMirrorAxis                                 = 536870912,
    SkelMirrorFlipAxis                             = 1073741824,
    DefaultAnimationRig                            = 2147483648,
    NegativeBoundsExtension                        = 0,
    PositiveBoundsExtension                        = 0,
    ExtendedBounds                                 = 0,
    HasBeenSimplified                              = 0,
    EnablePerPolyCollision                         = 0,
    BodySetup                                      = 0,
    MorphTargetIndexMap                            = 0,
    FloorOffset                                    = 0,
    ImportedBounds                                 = 0,
    PhysicsAsset                                   = 0,
    AssetImportData                                = 0,
    ThumbnailInfo                                  = 0,
    HasCustomDefaultEditorCamera                   = 0,
    DefaultEditorCameraLocation                    = 0,
    DefaultEditorCameraRotation                    = 0,
    RequiresLODScreenSizeConversion                = 0,
    PostProcessAnimBlueprint                       = 0,
    DefaultEditorCameraLookAt                      = 0,
    PreviewAttachedAssetContainer                  = 0,
    DefaultEditorCameraOrthoZoom                   = 0,
    RequiresLODHysteresisConversion                = 0,
    bSupportRayTracing                             = 0,
    RayTracingMinLOD                               = 0,
    ClothLODBiasMode                               = 0,
    DefaultMeshDeformer                            = 0,
    All                                            = 4294967295,
    ESkeletalMeshAsyncProperties                   = 1

};


// Enum  Engine.EClothLODBiasMode
enum class EClothLODBiasMode : uint8_t
{
    MappingsToSameLOD                              = 0,
    MappingsToMinLOD                               = 1,
    MappingsToAnyLOD                               = 2,
    EClothLODBiasMode                              = 3

};


// Enum  Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
    Remove                                         = 0,
    Keep                                           = 1,
    Invalid                                        = 2,
    EBoneFilterActionOption                        = 3

};


// Enum  Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
    Disabled                                       = 0,
    PlayWhenSilent                                 = 1,
    Restart                                        = 2,
    EVirtualizationMode                            = 3

};


// Enum  Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
    PreventNew                                     = 0,
    StopOldest                                     = 1,
    StopFarthestThenPreventNew                     = 2,
    StopFarthestThenOldest                         = 3,
    StopLowestPriority                             = 4,
    StopQuietest                                   = 5,
    StopLowestPriorityThenPreventNew               = 6,
    Count                                          = 7,
    EMaxConcurrentResolutionRule                   = 8

};


// Enum  Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8_t
{
    Default                                        = 0,
    Distance                                       = 1,
    Priority                                       = 2,
    EConcurrencyVolumeScaleMode                    = 3

};


// Enum  Engine.EModulationRouting
enum class EModulationRouting : uint8_t
{
    Disable                                        = 0,
    Inherit                                        = 1,
    Override                                       = 2,
    Union                                          = 3,
    EModulationRouting                             = 4

};


// Enum  Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    ESourceBusChannels                             = 2

};


// Enum  Engine.EFFTSize
enum class EFFTSize : uint8_t
{
    DefaultSize                                    = 0,
    Min                                            = 1,
    Small                                          = 2,
    Medium                                         = 3,
    Large                                          = 4,
    VeryLarge                                      = 5,
    Max                                            = 6

};


// Enum  Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
    NearestNeighbor                                = 0,
    Linear                                         = 1,
    Quadratic                                      = 2,
    ConstantQ                                      = 3,
    EFFTPeakInterpolationMethod                    = 4

};


// Enum  Engine.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
    None                                           = 0,
    Hamming                                        = 1,
    Hann                                           = 2,
    Blackman                                       = 3,
    EFFTWindowType                                 = 4

};


// Enum  Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
    MagnitudeSpectrum                              = 0,
    PowerSpectrum                                  = 1,
    Decibel                                        = 2,
    EAudioSpectrumType                             = 3

};


// Enum  Engine.EGainParamMode
enum class EGainParamMode : uint8_t
{
    Linear                                         = 0,
    Decibels                                       = 1,
    EGainParamMode                                 = 2

};


// Enum  Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8_t
{
    KickDrum                                       = 0,
    SnareDrum                                      = 1,
    Voice                                          = 2,
    Cymbals                                        = 3,
    EAudioSpectrumBandPresetType                   = 4

};


// Enum  Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
    SoundWave                                      = 0,
    WavFile                                        = 1,
    EAudioRecordingExportType                      = 2

};


// Enum  Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESendLevelControlMethod                        = 3

};


// Enum  Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8_t
{
    PostDistanceAttenuation                        = 0,
    PreDistanceAttenuation                         = 1,
    ESubmixSendStage                               = 2

};


// Enum  Engine.ETextureEncodeEffort
enum class ETextureEncodeEffort : uint8_t
{
    Default                                        = 0,
    Low                                            = 10,
    Normal                                         = 20,
    High                                           = 30,
    ETextureEncodeEffort                           = 31

};


// Enum  Engine.ETextureUniversalTiling
enum class ETextureUniversalTiling : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Enabled                                        = 2,
    ETextureUniversalTiling                        = 3

};


// Enum  Engine.ETextureEncodeSpeedOverride
enum class ETextureEncodeSpeedOverride : uint8_t
{
    Disabled                                       = 255,
    Final                                          = 0,
    FinalIfAvailable                               = 1,
    Fast                                           = 2,
    ETextureEncodeSpeedOverride                    = 256

};


// Enum  Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
    Always                                         = 0,
    NonPointer                                     = 1,
    NavigationOnly                                 = 2,
    Never                                          = 3,
    ERenderFocusRule                               = 4

};


// Enum  Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
    ShortestSide                                   = 0,
    LongestSide                                    = 1,
    Horizontal                                     = 2,
    Vertical                                       = 3,
    ScaleToFit                                     = 4,
    Custom                                         = 5,
    EUIScalingRule                                 = 6

};


// Enum  Engine.EDataLayerState
enum class EDataLayerState : uint8_t
{
    Unloaded                                       = 0,
    Loaded                                         = 1,
    Activated                                      = 2,
    EDataLayerState                                = 3

};


// Enum  Engine.EHLODLayerType
enum class EHLODLayerType : uint8_t
{
    Instancing                                     = 0,
    MeshMerge                                      = 1,
    MeshSimplify                                   = 2,
    MeshApproximate                                = 3,
    Custom                                         = 4,
    EHLODLayerType                                 = 5

};


// Enum  Engine.EWorldPartitionRuntimeCellState
enum class EWorldPartitionRuntimeCellState : uint8_t
{
    Unloaded                                       = 0,
    Loaded                                         = 1,
    Activated                                      = 2,
    EWorldPartitionRuntimeCellState                = 3

};


// Enum  Engine.EWorldPartitionStreamingPerformance
enum class EWorldPartitionStreamingPerformance : uint8_t
{
    Good                                           = 0,
    Slow                                           = 1,
    Critical                                       = 2,
    EWorldPartitionStreamingPerformance            = 3

};


// Enum  ClothingSystemRuntimeCommon.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
    EClothingWindMethod                            = 0,
    EClothingWindMethod                            = 1,
    EClothingWindMethod                            = 2

};


// Enum  ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
    None                                           = 0,
    MaxDistance                                    = 1,
    BackstopDistance                               = 2,
    BackstopRadius                                 = 3,
    AnimDriveStiffness                             = 4,
    AnimDriveDamping                               = 5,
    EWeightMapTargetCommon                         = 6

};


// Enum  ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8_t
{
    UniformMass                                    = 0,
    TotalMass                                      = 1,
    Density                                        = 2,
    MaxClothMassMode                               = 3,
    EClothMassMode                                 = 4

};


// Enum  ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
    Legacy                                         = 0,
    Accurate                                       = 1,
    EClothingWindMethodNv                          = 2

};


// Enum  VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    Num                                            = 3,
    EVectorVMBaseTypes                             = 4

};


// Enum  VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
    Register                                       = 0,
    Constant                                       = 1,
    Num                                            = 2,
    EVectorVMOperandLocation                       = 3

};


// Enum  GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
    Uninitialized                                  = 0,
    AwaitingActivation                             = 1,
    Paused                                         = 2,
    Active                                         = 3,
    Finished                                       = 4,
    EGameplayTaskState                             = 5

};


// Enum  NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
    Static                                         = 0,
    DynamicModifiersOnly                           = 1,
    Dynamic                                        = 2,
    LegacyGeneration                               = 3,
    ERuntimeGenerationType                         = 4

};


// Enum  NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
    TotalCost                                      = 0,
    HeuristicOnly                                  = 1,
    RealCostOnly                                   = 2,
    ENavCostDisplay                                = 3

};


// Enum  NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
    Monotone                                       = 0,
    Watershed                                      = 1,
    ChunkyMonotone                                 = 2,
    ERecastPartitioning                            = 3

};


// Enum  NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
    Override                                       = 0,
    Append                                         = 1,
    Skip                                           = 2,
    ENavSystemOverridePolicy                       = 3

};


// Enum  AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
    Success                                        = 0,
    Blocked                                        = 1,
    OffPath                                        = 2,
    Aborted                                        = 3,
    Skipped                                        = 4,
    Invalid                                        = 5,
    EPathFollowingResult                           = 6

};


// Enum  AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
    Processing                                     = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Aborted                                        = 3,
    OwnerLost                                      = 4,
    MissingParam                                   = 5,
    EEnvQueryStatus                                = 6

};


// Enum  AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3

};


// Enum  AIModule.FAIDistanceType
enum class FAIDistanceType : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    MAX                                            = 3

};


// Enum  AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
    NeverStarted                                   = 0,
    NotBeingAborted                                = 1,
    MarkPendingAbort                               = 2,
    LatentAbortInProgress                          = 3,
    AbortDone                                      = 4,
    MAX                                            = 5

};


// Enum  AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
    NotStarted                                     = 0,
    InProgress                                     = 1,
    Success                                        = 2,
    Failed                                         = 3,
    Aborted                                        = 4,
    EPawnActionResult                              = 5

};


// Enum  AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
    Invalid                                        = 0,
    FailedToStart                                  = 1,
    InstantAbort                                   = 2,
    FinishedAborting                               = 3,
    FinishedExecution                              = 4,
    Push                                           = 5,
    EPawnActionEventType                           = 6

};


// Enum  AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
    SoftScript                                     = 0,
    Logic                                          = 1,
    HardScript                                     = 2,
    Reaction                                       = 3,
    Ultimate                                       = 4,
    MAX                                            = 5

};


// Enum  AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
    Animation                                      = 0,
    Logic                                          = 1,
    Script                                         = 2,
    Gameplay                                       = 3,
    MAX                                            = 4

};


// Enum  AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
    Less                                           = 0,
    LessOrEqual                                    = 1,
    Equal                                          = 2,
    NotEqual                                       = 3,
    GreaterOrEqual                                 = 4,
    Greater                                        = 5,
    IsTrue                                         = 6,
    MAX                                            = 7

};


// Enum  AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
    Filter                                         = 0,
    Score                                          = 1,
    FilterAndScore                                 = 2,
    EEnvTestPurpose                                = 3

};


// Enum  AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
    Minimum                                        = 0,
    Maximum                                        = 1,
    Range                                          = 2,
    Match                                          = 3,
    EEnvTestFilterType                             = 4

};


// Enum  AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
    Linear                                         = 0,
    Square                                         = 1,
    InverseLinear                                  = 2,
    SquareRoot                                     = 3,
    Constant                                       = 4,
    EEnvTestScoreEquation                          = 5

};


// Enum  AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
    None                                           = 0,
    Square                                         = 1,
    Inverse                                        = 2,
    Unused                                         = 3,
    Constant                                       = 4,
    Skip                                           = 5,
    EEnvTestWeight                                 = 6

};


// Enum  AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    EEnvTestCost                                   = 3

};


// Enum  AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
    AllPass                                        = 0,
    AnyPass                                        = 1,
    EEnvTestFilterOperator                         = 2

};


// Enum  AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
    AverageScore                                   = 0,
    MinScore                                       = 1,
    MaxScore                                       = 2,
    Multiply                                       = 3,
    EEnvTestScoreOperator                          = 4

};


// Enum  AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
    SingleResult                                   = 0,
    RandomBest5Pct                                 = 1,
    RandomBest25Pct                                = 2,
    AllMatching                                    = 3,
    EEnvQueryRunMode                               = 4

};


// Enum  AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    EEnvQueryParam                                 = 3

};


// Enum  AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    MAX                                            = 3

};


// Enum  AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
    None                                           = 0,
    Navigation                                     = 1,
    GeometryByChannel                              = 2,
    GeometryByProfile                              = 3,
    NavigationOverLedges                           = 4,
    EEnvQueryTrace                                 = 5

};


// Enum  AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
    Line                                           = 0,
    Box                                            = 1,
    Sphere                                         = 2,
    Capsule                                        = 3,
    EEnvTraceShape                                 = 4

};


// Enum  AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
    Box                                            = 0,
    Sphere                                         = 1,
    Capsule                                        = 2,
    EEnvOverlapShape                               = 3

};


// Enum  AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
    TwoPoints                                      = 0,
    Rotation                                       = 1,
    EEnvDirection                                  = 2

};


// Enum  AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
    None                                           = 0,
    SpecifiedValue                                 = 1,
    FilterThreshold                                = 2,
    EEnvQueryTestClamping                          = 3

};


// Enum  AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
    Friendly                                       = 0,
    Neutral                                        = 1,
    Hostile                                        = 2,
    ETeamAttitude                                  = 3

};


// Enum  AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
    CopyBeforeTriggering                           = 0,
    ReuseInstances                                 = 1,
    EPawnSubActionTriggeringPolicy                 = 2

};


// Enum  AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
    RequireSuccess                                 = 0,
    IgnoreFailure                                  = 1,
    EPawnActionFailHandling                        = 2

};


// Enum  AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
    UsePathfinding                                 = 0,
    StraightLine                                   = 1,
    EPawnActionMoveMode                            = 2

};


// Enum  AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
    Succeeded                                      = 0,
    Failed                                         = 1,
    Aborted                                        = 2,
    InProgress                                     = 3,
    EBTNodeResult                                  = 4

};


// Enum  AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
    None                                           = 0,
    LowerPriority                                  = 1,
    Self                                           = 2,
    Both                                           = 3,
    EBTFlowAbortMode                               = 4

};


// Enum  AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
    Set                                            = 0,
    NotSet                                         = 1,
    EBasicKeyOperation                             = 2

};


// Enum  AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Less                                           = 2,
    LessOrEqual                                    = 3,
    Greater                                        = 4,
    GreaterOrEqual                                 = 5,
    EArithmeticKeyOperation                        = 6

};


// Enum  AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Contain                                        = 2,
    NotContain                                     = 3,
    ETextKeyOperation                              = 4

};


// Enum  AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
    FirstNode                                      = 0,
    TaskNode                                       = 1,
    EBTChildIndex                                  = 2

};


// Enum  AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
    Invalid                                        = 0,
    Test                                           = 1,
    And                                            = 2,
    Or                                             = 3,
    Not                                            = 4,
    EBTDecoratorLogic                              = 5

};


// Enum  AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
    AbortBackground                                = 0,
    WaitForBackground                              = 1,
    EBTParallelMode                                = 2

};


// Enum  AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
    ValueChange                                    = 0,
    ResultChange                                   = 1,
    EBTBlackboardRestart                           = 2

};


// Enum  AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    EBlackBoardEntryComparison                     = 2

};


// Enum  AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
    NavmeshRaycast2D                               = 0,
    HierarchicalQuery                              = 1,
    RegularPathFinding                             = 2,
    EPathExistanceQueryType                        = 3

};


// Enum  AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
    Absolute                                       = 0,
    RelativeToScores                               = 1,
    EEQSNormalizationType                          = 2

};


// Enum  AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
    All                                            = 0,
    Best5Pct                                       = 1,
    Best25Pct                                      = 2,
    EEnvQueryHightlightMode                        = 3

};


// Enum  AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
    BySpaceBetween                                 = 0,
    ByNumberOfPoints                               = 1,
    EPointOnCircleSpacingMethod                    = 2

};


// Enum  AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    DistanceAbsoluteZ                              = 3,
    EEnvTestDistance                               = 4

};


// Enum  AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
    Dot3D                                          = 0,
    Dot2D                                          = 1,
    EEnvTestDot                                    = 2

};


// Enum  AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
    PathExist                                      = 0,
    PathCost                                       = 1,
    PathLength                                     = 2,
    EEnvTestPathfinding                            = 3

};


// Enum  AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
    Idle                                           = 0,
    Waiting                                        = 1,
    Paused                                         = 2,
    Moving                                         = 3,
    EPathFollowingStatus                           = 4

};


// Enum  AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
    Error                                          = 0,
    NoMove                                         = 1,
    DirectMove                                     = 2,
    PartialPath                                    = 3,
    PathToGoal                                     = 4,
    EPathFollowingAction                           = 5

};


// Enum  AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
    Failed                                         = 0,
    AlreadyAtGoal                                  = 1,
    RequestSuccessful                              = 2,
    EPathFollowingRequestResult                    = 3

};


// Enum  AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
    OnEveryPerception                              = 0,
    OnPerceptionChange                             = 1,
    EAISenseNotifyType                             = 2

};


// Enum  AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
    Lowest                                         = 0,
    Low                                            = 64,
    AutonomousAI                                   = 127,
    High                                           = 192,
    Ultimate                                       = 254,
    EAITaskPriority                                = 255

};


// Enum  InteractiveToolsFramework.EGizmoElementState
enum class EGizmoElementState : uint8_t
{
    None                                           = 0,
    Visible                                        = 2,
    Hittable                                       = 4,
    VisibleAndHittable                             = 6,
    EGizmoElementState                             = 7

};


// Enum  InteractiveToolsFramework.EGizmoElementInteractionState
enum class EGizmoElementInteractionState : uint8_t
{
    None                                           = 0,
    Hovering                                       = 1,
    Interacting                                    = 2,
    EGizmoElementInteractionState                  = 3

};


// Enum  InteractiveToolsFramework.EGizmoElementViewDependentType
enum class EGizmoElementViewDependentType : uint8_t
{
    None                                           = 0,
    Axis                                           = 1,
    Plane                                          = 2,
    EGizmoElementViewDependentType                 = 3

};


// Enum  InteractiveToolsFramework.EGizmoElementViewAlignType
enum class EGizmoElementViewAlignType : uint8_t
{
    None                                           = 0,
    PointOnly                                      = 1,
    PointEye                                       = 2,
    PointScreen                                    = 3,
    Axial                                          = 4,
    EGizmoElementViewAlignType                     = 5

};


// Enum  InteractiveToolsFramework.EGizmoElementPartialType
enum class EGizmoElementPartialType : uint8_t
{
    None                                           = 0,
    Partial                                        = 1,
    PartialViewDependent                           = 2,
    EGizmoElementPartialType                       = 3

};


// Enum  InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
    VertexColorMaterial                            = 1,
    EStandardToolContextMaterials                  = 2

};


// Enum  InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
    World                                          = 0,
    Local                                          = 1,
    EToolContextCoordinateSystem                   = 2

};


// Enum  InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
    Internal                                       = 0,
    UserMessage                                    = 1,
    UserNotification                               = 2,
    UserWarning                                    = 3,
    UserError                                      = 4,
    EToolMessageLevel                              = 5

};


// Enum  InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
    Replace                                        = 0,
    Add                                            = 1,
    Remove                                         = 2,
    Clear                                          = 3,
    ESelectedObjectsModificationType               = 4

};


// Enum  InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8_t
{
    None                                           = 0,
    Hovered                                        = 1,
    Focused                                        = 2,
    EViewInteractionState                          = 3

};


// Enum  InteractiveToolsFramework.EGizmoElementArrowHeadType
enum class EGizmoElementArrowHeadType : uint8_t
{
    Cone                                           = 0,
    Cube                                           = 1,
    EGizmoElementArrowHeadType                     = 2

};


// Enum  InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Both                                           = 3,
    Any                                            = 99,
    EInputCaptureSide                              = 100

};


// Enum  InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
    Begin                                          = 1,
    Ignore                                         = 2,
    EInputCaptureRequestType                       = 3

};


// Enum  InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
    Begin                                          = 1,
    Continue                                       = 2,
    End                                            = 3,
    Ignore                                         = 4,
    EInputCaptureState                             = 5

};


// Enum  InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint8_t
{
    None                                           = 0,
    Keyboard                                       = 1,
    Mouse                                          = 2,
    Gamepad                                        = 4,
    OculusTouch                                    = 8,
    HTCViveWands                                   = 16,
    AnySpatialDevice                               = 24,
    TabletFingers                                  = 1024,
    EInputDevices                                  = 1025

};


// Enum  InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
    None                                           = 0,
    TranslateAxisX                                 = 2,
    TranslateAxisY                                 = 4,
    TranslateAxisZ                                 = 8,
    TranslateAllAxes                               = 14,
    TranslatePlaneXY                               = 16,
    TranslatePlaneXZ                               = 32,
    TranslatePlaneYZ                               = 64,
    TranslateAllPlanes                             = 112,
    RotateAxisX                                    = 128,
    RotateAxisY                                    = 256,
    RotateAxisZ                                    = 512,
    RotateAllAxes                                  = 896,
    ScaleAxisX                                     = 1024,
    ScaleAxisY                                     = 2048,
    ScaleAxisZ                                     = 4096,
    ScaleAllAxes                                   = 7168,
    ScalePlaneYZ                                   = 8192,
    ScalePlaneXZ                                   = 16384,
    ScalePlaneXY                                   = 32768,
    ScaleAllPlanes                                 = 57344,
    ScaleUniform                                   = 65536,
    StandardTranslateRotate                        = 1022,
    TranslateRotateUniformScale                    = 66558,
    FullTranslateRotateScale                       = 131070,
    ETransformGizmoSubElements                     = 131071

};


// Enum  InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
    Left                                           = 1,
    Mouse                                          = 1,
    Right                                          = 2,
    EToolSide                                      = 3

};


// Enum  InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
    NoChangeTracking                               = 1,
    UndoToExit                                     = 2,
    FullUndoRedo                                   = 3,
    EToolChangeTrackingMode                        = 4

};


// Enum  InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
    Position                                       = 1,
    Rotation                                       = 2,
    ESceneSnapQueryType                            = 3

};


// Enum  InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
    None                                           = 0,
    MeshVertex                                     = 1,
    MeshEdge                                       = 2,
    Grid                                           = 4,
    All                                            = 7,
    ESceneSnapQueryTargetType                      = 8

};


// Enum  GeometryFramework.EDynamicMeshComponentTangentsMode
enum class EDynamicMeshComponentTangentsMode : uint8_t
{
    NoTangents                                     = 0,
    AutoCalculated                                 = 1,
    ExternallyProvided                             = 2,
    EDynamicMeshComponentTangentsMode              = 3

};


// Enum  GeometryFramework.EDynamicMeshComponentColorOverrideMode
enum class EDynamicMeshComponentColorOverrideMode : uint8_t
{
    None                                           = 0,
    VertexColors                                   = 1,
    Polygroups                                     = 2,
    Constant                                       = 3,
    EDynamicMeshComponentColorOverrideMode         = 4

};


// Enum  GeometryFramework.EDynamicMeshComponentRenderUpdateMode
enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
{
    NoUpdate                                       = 0,
    FullUpdate                                     = 1,
    FastUpdate                                     = 2,
    EDynamicMeshComponentRenderUpdateMode          = 3

};


// Enum  GeometryFramework.EDynamicMeshChangeType
enum class EDynamicMeshChangeType : uint8_t
{
    GeneralEdit                                    = 0,
    MeshChange                                     = 1,
    MeshReplacementChange                          = 2,
    MeshVertexChange                               = 3,
    DeformationEdit                                = 4,
    AttributeEdit                                  = 5,
    EDynamicMeshChangeType                         = 6

};


// Enum  GeometryFramework.EDynamicMeshAttributeChangeFlags
enum class EDynamicMeshAttributeChangeFlags : uint8_t
{
    Unknown                                        = 0,
    MeshTopology                                   = 1,
    VertexPositions                                = 2,
    NormalsTangents                                = 4,
    VertexColors                                   = 8,
    UVs                                            = 16,
    TriangleGroups                                 = 32,
    EDynamicMeshAttributeChangeFlags               = 33

};


// Enum  TGFFramework.EOpenWindowReason
enum class EOpenWindowReason : uint8_t
{
    OWR                                            = 0,
    OWR                                            = 1,
    OWR                                            = 2

};


// Enum  TGFFramework.EZOrderType
enum class EZOrderType : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    Panel                                          = 10,
    SubPanel                                       = 20,
    PopPanel                                       = 30,
    Popup                                          = 100,
    EZOrderType                                    = 101

};


// Enum  LISlua425.EINTLPropertyClass
enum class EINTLPropertyClass : uint8_t
{
    Byte                                           = 0,
    Int8                                           = 1,
    Int16                                          = 2,
    Int                                            = 3,
    Int64                                          = 4,
    UInt16                                         = 5,
    UInt32                                         = 6,
    UInt64                                         = 7,
    UnsizedInt                                     = 8,
    UnsizedUInt                                    = 9,
    Float                                          = 10,
    Double                                         = 11,
    Bool                                           = 12,
    SoftClass                                      = 13,
    WeakObject                                     = 14,
    LazyObject                                     = 15,
    SoftObject                                     = 16,
    Class                                          = 17,
    Object                                         = 18,
    Interface                                      = 19,
    Name                                           = 20,
    Str                                            = 21,
    Array                                          = 22,
    Map                                            = 23,
    Set                                            = 24,
    Struct                                         = 25,
    Delegate                                       = 26,
    MulticastDelegate                              = 27,
    Text                                           = 28,
    Enum                                           = 29,
    EINTLPropertyClass                             = 30

};


// Enum  TGFGame.EAlertResult
enum class EAlertResult : uint8_t
{
    Confirmed                                      = 0,
    Unknown                                        = 1,
    EAlertResult                                   = 2

};


// Enum  TGFGame.EConfirmResult
enum class EConfirmResult : uint8_t
{
    Confirmed                                      = 0,
    Cancelled                                      = 1,
    Unknown                                        = 2,
    EConfirmResult                                 = 3

};


// Enum  TGFGame.EAppState
enum class EAppState : uint8_t
{
    None                                           = 0,
    Login                                          = 1,
    Hall                                           = 2,
    Battle                                         = 3,
    Max                                            = 4

};


// Enum  TGFGame.EHallState
enum class EHallState : uint8_t
{
    HallEmpty                                      = 0,
    HallMain                                       = 1,
    CreateRole                                     = 2,
    Wardrobe                                       = 3,
    StoreDetail                                    = 4,
    UICover                                        = 5,
    Max                                            = 6

};


// Enum  TGFGame.ETGFBattlePassTaskType
enum class ETGFBattlePassTaskType : uint8_t
{
    Normal                                         = 0,
    Dispatch                                       = 1,
    Sealed                                         = 2,
    ETGFBattlePassTaskType                         = 3

};


// Enum  TGFGame.EBattleType
enum class EBattleType : uint8_t
{
    None                                           = 0,
    Local                                          = 1,
    Remote                                         = 2,
    EBattleType                                    = 3

};


// Enum  TGFGame.ETgfFusionStateType
enum class ETgfFusionStateType : uint8_t
{
    None                                           = 0,
    Unlock                                         = 1,
    Running                                        = 2,
    Finish                                         = 3,
    ETgfFusionStateType                            = 4

};


// Enum  TGFGame.EMarqueeType
enum class EMarqueeType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5

};


// Enum  TGFGame.EMatchState
enum class EMatchState : uint8_t
{
    None                                           = 0,
    Matching                                       = 1,
    Matched                                        = 2,
    EMatchState                                    = 3

};


// Enum  TGFGame.ENMatchWindowStatus
enum class ENMatchWindowStatus : uint8_t
{
    None                                           = 0,
    Matching                                       = 1,
    Matched                                        = 2,
    ENMatchWindowStatus                            = 3

};


// Enum  TGFGame.EPVPRoomMemberCamp
enum class EPVPRoomMemberCamp : uint8_t
{
    None                                           = 0,
    CampA                                          = 1,
    CampB                                          = 2,
    Watcher                                        = 3,
    EPVPRoomMemberCamp                             = 4

};


// Enum  TGFGame.ESocialToggleType
enum class ESocialToggleType : uint8_t
{
    E                                              = 0,
    E                                              = 10,
    E                                              = 11,
    E                                              = 12,
    E                                              = 20,
    E                                              = 30,
    E                                              = 40,
    E                                              = 41,
    E                                              = 42,
    E                                              = 43

};


// Enum  TGFGame.ESearchPlayerTag
enum class ESearchPlayerTag : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3

};


// Enum  TGFGame.ECreateRoleFrom
enum class ECreateRoleFrom : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3

};


// Enum  TGFGame.ETeamRole
enum class ETeamRole : uint8_t
{
    None                                           = 0,
    Captain                                        = 1,
    Member                                         = 2,
    ETeamRole                                      = 3

};


// Enum  TGFGame.EnRoleGenderType
enum class EnRoleGenderType : uint8_t
{
    EN                                             = 0,
    EN                                             = 1,
    EN                                             = 2,
    EN                                             = 3

};


// Enum  TGFGame.ETimeFormatType
enum class ETimeFormatType : uint8_t
{
    None                                           = 0,
    DateTime                                       = 1,
    TimeOnly                                       = 2,
    DateOnly                                       = 3,
    ETimeFormatType                                = 4

};


// Enum  TGFGame.ETradeBidOrderState
enum class ETradeBidOrderState : uint8_t
{
    None                                           = 0,
    Failed                                         = 1,
    CurrentlyWinning                               = 2,
    OutBid                                         = 3,
    Success                                        = 4,
    Processing                                     = 5,
    OrderError                                     = 6,
    ETradeBidOrderState                            = 7

};


// Enum  TGFGame.ETradeSaleOrderType
enum class ETradeSaleOrderType : uint8_t
{
    None                                           = 0,
    Hint                                           = 1,
    Auction                                        = 2,
    ETradeSaleOrderType                            = 3

};


// Enum  TGFGame.ETradeSaleOrderState
enum class ETradeSaleOrderState : uint8_t
{
    None                                           = 0,
    Trading                                        = 1,
    Expired                                        = 2,
    Cancel                                         = 3,
    SoldOut                                        = 4,
    Processing                                     = 5,
    OrderError                                     = 6,
    ETradeSaleOrderState                           = 7

};


// Enum  TGFGame.ETradeMarketId
enum class ETradeMarketId : uint8_t
{
    None                                           = 0,
    HomogenTrade                                   = 1,
    Auction                                        = 2,
    ETradeMarketId                                 = 3

};


// Enum  RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    IO                                             = 2,
    Visible                                        = 3,
    Hidden                                         = 4,
    Invalid                                        = 5,
    ERigVMPinDirection                             = 6

};


// Enum  RigVM.ERigVMBreakpointAction
enum class ERigVMBreakpointAction : uint8_t
{
    None                                           = 0,
    Resume                                         = 1,
    StepOver                                       = 2,
    StepInto                                       = 3,
    StepOut                                        = 4,
    Max                                            = 5

};


// Enum  RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    Invalid                                        = 2,
    ERigVMParameterType                            = 3

};


// Enum  RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
    Execute                                        = 0,
    Execute                                        = 1,
    Execute                                        = 2,
    Execute                                        = 3,
    Execute                                        = 4,
    Execute                                        = 5,
    Execute                                        = 6,
    Execute                                        = 7,
    Execute                                        = 8,
    Execute                                        = 9,
    Execute                                        = 10,
    Execute                                        = 11,
    Execute                                        = 12,
    Execute                                        = 13,
    Execute                                        = 14,
    Execute                                        = 15,
    Execute                                        = 16,
    Execute                                        = 17,
    Execute                                        = 18,
    Execute                                        = 19,
    Execute                                        = 20,
    Execute                                        = 21,
    Execute                                        = 22,
    Execute                                        = 23,
    Execute                                        = 24,
    Execute                                        = 25,
    Execute                                        = 26,
    Execute                                        = 27,
    Execute                                        = 28,
    Execute                                        = 29,
    Execute                                        = 30,
    Execute                                        = 31,
    Execute                                        = 32,
    Execute                                        = 33,
    Execute                                        = 34,
    Execute                                        = 35,
    Execute                                        = 36,
    Execute                                        = 37,
    Execute                                        = 38,
    Execute                                        = 39,
    Execute                                        = 40,
    Execute                                        = 41,
    Execute                                        = 42,
    Execute                                        = 43,
    Execute                                        = 44,
    Execute                                        = 45,
    Execute                                        = 46,
    Execute                                        = 47,
    Execute                                        = 48,
    Execute                                        = 49,
    Execute                                        = 50,
    Execute                                        = 51,
    Execute                                        = 52,
    Execute                                        = 53,
    Execute                                        = 54,
    Execute                                        = 55,
    Execute                                        = 56,
    Execute                                        = 57,
    Execute                                        = 58,
    Execute                                        = 59,
    Execute                                        = 60,
    Execute                                        = 61,
    Execute                                        = 62,
    Execute                                        = 63,
    Execute                                        = 64,
    Zero                                           = 65,
    BoolFalse                                      = 66,
    BoolTrue                                       = 67,
    Copy                                           = 68,
    Increment                                      = 69,
    Decrement                                      = 70,
    Equals                                         = 71,
    NotEquals                                      = 72,
    JumpAbsolute                                   = 73,
    JumpForward                                    = 74,
    JumpBackward                                   = 75,
    JumpAbsoluteIf                                 = 76,
    JumpForwardIf                                  = 77,
    JumpBackwardIf                                 = 78,
    ChangeType                                     = 79,
    Exit                                           = 80,
    BeginBlock                                     = 81,
    EndBlock                                       = 82,
    ArrayReset                                     = 83,
    ArrayGetNum                                    = 84,
    ArraySetNum                                    = 85,
    ArrayGetAtIndex                                = 86,
    ArraySetAtIndex                                = 87,
    ArrayAdd                                       = 88,
    ArrayInsert                                    = 89,
    ArrayRemove                                    = 90,
    ArrayFind                                      = 91,
    ArrayAppend                                    = 92,
    ArrayClone                                     = 93,
    ArrayIterator                                  = 94,
    ArrayUnion                                     = 95,
    ArrayDifference                                = 96,
    ArrayIntersection                              = 97,
    ArrayReverse                                   = 98,
    InvokeEntry                                    = 99,
    Invalid                                        = 100,
    FirstArrayOpCode                               = 83,
    LastArrayOpCode                                = 98,
    ERigVMOpCode                                   = 101

};


// Enum  RigVM.ERigVMCopyType
enum class ERigVMCopyType : uint8_t
{
    Default                                        = 0,
    FloatToDouble                                  = 1,
    DoubleToFloat                                  = 2,
    ERigVMCopyType                                 = 3

};


// Enum  RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
    Work                                           = 0,
    Literal                                        = 1,
    External                                       = 2,
    Debug                                          = 3,
    Invalid                                        = 4,
    ERigVMMemoryType                               = 5

};


// Enum  RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
    Plain                                          = 0,
    String                                         = 1,
    Name                                           = 2,
    Struct                                         = 3,
    Invalid                                        = 4,
    ERigVMRegisterType                             = 5

};


// Enum  RigVM.ERigVMUserWorkflowType
enum class ERigVMUserWorkflowType : uint8_t
{
    Invalid                                        = 0,
    NodeContext                                    = 1,
    PinContext                                     = 2,
    OnPinDefaultChanged                            = 4,
    All                                            = 7,
    ERigVMUserWorkflowType                         = 8

};


// Enum  LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
    Perspective                                    = 0,
    Orthographic                                   = 1,
    ELiveLinkCameraProjectionMode                  = 2

};


// Enum  LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
    Latest                                         = 0,
    EngineTime                                     = 1,
    Timecode                                       = 2,
    ELiveLinkSourceMode                            = 3

};


// UserDefinedEnum  Engine.Default
enum class Default : uint8_t
{

};


// UserDefinedEnum  TGF.TGF
enum class TGF : uint8_t
{
    TGF                                            = 0,
    TGF                                            = 1,
    TGF                                            = 2,
    TGF                                            = 3

};


// UserDefinedEnum  EMonsterDormantable.EMonsterDormantable
enum class EMonsterDormantable : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    EMonsterDormantable                            = 3

};


// UserDefinedEnum  EActorSpawnOptionAction.EActorSpawnOptionAction
enum class EActorSpawnOptionAction : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    EActorSpawnOptionAction                        = 2

};


// UserDefinedEnum  TGF.TGF
enum class TGF : uint8_t
{
    TGF                                            = 0,
    TGF                                            = 1,
    TGF                                            = 2,
    TGF                                            = 3,
    TGF                                            = 4

};


// UserDefinedEnum  TGF.TGF
enum class TGF : uint8_t
{
    TGF                                            = 0,
    TGF                                            = 1,
    TGF                                            = 2,
    TGF                                            = 3

};


// UserDefinedEnum  EPatrolMode.EPatrolMode
enum class EPatrolMode : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    EPatrolMode                                    = 4

};


// UserDefinedEnum  Enum.Enum
enum class Enum : uint8_t
{
    Enum                                           = 0,
    Enum                                           = 1,
    Enum                                           = 2,
    Enum                                           = 3

};


// UserDefinedEnum  AnimEnum.AnimEnum
enum class AnimEnum : uint8_t
{
    AnimEnum                                       = 0,
    AnimEnum                                       = 1,
    AnimEnum                                       = 2,
    AnimEnum                                       = 3,
    AnimEnum                                       = 4,
    AnimEnum                                       = 5

};


// UserDefinedEnum  E.E
enum class E : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


// UserDefinedEnum  E.E
enum class E : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


