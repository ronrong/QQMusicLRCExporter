//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableString, NSNumber, NSString, QLHotspotItem, QLThumbItem;

@interface QLMovieItem : NSObject <NSCoding>
{
    BOOL _currentMovieItemOnTop;
    BOOL _noSubTitle;
    BOOL _isLiveVideo;
    BOOL _appPlay;
    BOOL _webPlay;
    BOOL _canDownload;
    BOOL _isCover;
    BOOL _isColumn;
    BOOL _isTop;
    BOOL _isTrailer;
    BOOL _isDrm;
    BOOL _blooperON;
    BOOL _isPotraitHome;
    BOOL _isShowUpdateNotify;
    BOOL _isListStyle;
    BOOL _isPosterVertical;
    BOOL _hotspot;
    BOOL _wxHots;
    BOOL _isOuterVideo;
    BOOL _fullTag;
    BOOL _isBarrageSwitch;
    BOOL _isBarrageAutoPlay;
    BOOL _interactiveFlag;
    NSString *_updateTime;
    NSString *_title;
    NSString *_imageurl;
    NSString *_imageurl2;
    NSString *_desc;
    NSString *_summaryText;
    int _videoIndex;
    NSString *_style;
    NSMutableString *_director;
    NSMutableString *_actor;
    NSMutableString *_year;
    NSMutableString *_area;
    NSString *_ratingCaption;
    NSString *_titleType;
    int _length;
    unsigned int _playCount;
    NSDictionary *_dicFamous;
    NSArray *_aryActor;
    NSArray *_aryDirector;
    int _typeID;
    int _varietySubType;
    int _columnid;
    NSString *_columnname;
    NSString *_source;
    int _videoType;
    NSString *_subType;
    NSString *_destinationUrl;
    int _updatedEpisodeNumber;
    int _totalEpisodeCount;
    NSString *_belongedCoverID;
    int _payState;
    float _priceVIP;
    float _priceNormal;
    float _priceDiscount;
    NSString *_rawTitle;
    NSString *_rawActor;
    NSString *_rawDirector;
    NSString *_rawArea;
    NSString *_rawYear;
    NSString *_rawSubtype;
    NSString *_selectedCommentID;
    NSString *_exclusiveTag;
    NSString *_screenshotUrl;
    NSString *_videoID;
    NSString *_coverID;
    NSString *_commentID;
    NSString *_jumpPageID;
    unsigned int _programType;
    float _programVersion;
    NSString *_specialTopicID;
    int _rank;
    NSString *_zbID;
    NSString *_zbURL;
    NSArray *_aryImgTagItems;
    NSString *_channelID;
    int _numChapter;
    int _isVarietyExtra;
    int _thumbTempletID;
    QLThumbItem *_thumbItem;
    unsigned int _openTo;
    unsigned int _moviecopyright;
    NSMutableArray *_thumbExtendedTempletItemIDs;
    int _modeIndex;
    NSString *_URL;
    NSString *_pID;
    NSString *_matchId;
    NSString *_competitionId;
    NSString *_openSource;
    NSString *_songTitle;
    NSString *_songUrl;
    NSString *_aunTitle;
    NSString *_aunUrl;
    NSString *_qid;
    NSString *_searchQuery;
    NSString *_language;
    int _copyrightFrom;
    NSNumber *_play_increment;
    NSString *_vidForLocateInWorldCup;
    NSString *_voteId;
    NSString *_pageEntry;
    QLHotspotItem *_hotspotItem;
    NSString *_weiXinPublicAccountID;
    NSString *_weiXinPublicAccountName;
    NSString *_weiXinPublicAccountCode;
    NSString *_weiXinPublicAccountImgURL;
    NSString *_algID;
    NSString *_tplID;
    NSString *_tplName;
    NSString *_linkType;
    NSDictionary *_linkTypes;
    int _updateflag;
    double _rating;
    double _scoreIMDB;
    long long _videoSize;
    double _voteEffectStartPoint;
}

+ (id)itemWithVID:(id)arg1 title:(id)arg2 imageURL:(id)arg3 screenShot:(id)arg4 noSubTitle:(BOOL)arg5 index:(int)arg6;
@property(nonatomic) int updateflag; // @synthesize updateflag=_updateflag;
@property(nonatomic) BOOL interactiveFlag; // @synthesize interactiveFlag=_interactiveFlag;
@property(retain) NSDictionary *linkTypes; // @synthesize linkTypes=_linkTypes;
@property(copy, nonatomic) NSString *linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSString *tplName; // @synthesize tplName=_tplName;
@property(copy, nonatomic) NSString *tplID; // @synthesize tplID=_tplID;
@property(copy, nonatomic) NSString *algID; // @synthesize algID=_algID;
@property(copy, nonatomic) NSString *weiXinPublicAccountImgURL; // @synthesize weiXinPublicAccountImgURL=_weiXinPublicAccountImgURL;
@property(copy, nonatomic) NSString *weiXinPublicAccountCode; // @synthesize weiXinPublicAccountCode=_weiXinPublicAccountCode;
@property(copy, nonatomic) NSString *weiXinPublicAccountName; // @synthesize weiXinPublicAccountName=_weiXinPublicAccountName;
@property(copy, nonatomic) NSString *weiXinPublicAccountID; // @synthesize weiXinPublicAccountID=_weiXinPublicAccountID;
@property(retain, nonatomic) QLHotspotItem *hotspotItem; // @synthesize hotspotItem=_hotspotItem;
@property(copy, nonatomic) NSString *pageEntry; // @synthesize pageEntry=_pageEntry;
@property(nonatomic) BOOL isBarrageAutoPlay; // @synthesize isBarrageAutoPlay=_isBarrageAutoPlay;
@property(nonatomic) BOOL isBarrageSwitch; // @synthesize isBarrageSwitch=_isBarrageSwitch;
@property(nonatomic) double voteEffectStartPoint; // @synthesize voteEffectStartPoint=_voteEffectStartPoint;
@property(copy, nonatomic) NSString *voteId; // @synthesize voteId=_voteId;
@property(retain, nonatomic) NSString *vidForLocateInWorldCup; // @synthesize vidForLocateInWorldCup=_vidForLocateInWorldCup;
@property(retain, nonatomic) NSNumber *play_increment; // @synthesize play_increment=_play_increment;
@property(nonatomic) int copyrightFrom; // @synthesize copyrightFrom=_copyrightFrom;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) BOOL fullTag; // @synthesize fullTag=_fullTag;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(nonatomic) BOOL isOuterVideo; // @synthesize isOuterVideo=_isOuterVideo;
@property(nonatomic) BOOL wxHots; // @synthesize wxHots=_wxHots;
@property(nonatomic) BOOL hotspot; // @synthesize hotspot=_hotspot;
@property(copy, nonatomic) NSString *aunUrl; // @synthesize aunUrl=_aunUrl;
@property(copy, nonatomic) NSString *aunTitle; // @synthesize aunTitle=_aunTitle;
@property(copy, nonatomic) NSString *songUrl; // @synthesize songUrl=_songUrl;
@property(copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(copy, nonatomic) NSString *openSource; // @synthesize openSource=_openSource;
@property(copy, nonatomic) NSString *competitionId; // @synthesize competitionId=_competitionId;
@property(copy, nonatomic) NSString *matchId; // @synthesize matchId=_matchId;
@property(copy, nonatomic) NSString *pID; // @synthesize pID=_pID;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property BOOL isPosterVertical; // @synthesize isPosterVertical=_isPosterVertical;
@property BOOL isListStyle; // @synthesize isListStyle=_isListStyle;
@property int modeIndex; // @synthesize modeIndex=_modeIndex;
@property(retain) NSMutableArray *thumbExtendedTempletItemIDs; // @synthesize thumbExtendedTempletItemIDs=_thumbExtendedTempletItemIDs;
@property unsigned int moviecopyright; // @synthesize moviecopyright=_moviecopyright;
@property unsigned int openTo; // @synthesize openTo=_openTo;
@property(retain) QLThumbItem *thumbItem; // @synthesize thumbItem=_thumbItem;
@property int thumbTempletID; // @synthesize thumbTempletID=_thumbTempletID;
@property(nonatomic) BOOL isShowUpdateNotify; // @synthesize isShowUpdateNotify=_isShowUpdateNotify;
@property int isVarietyExtra; // @synthesize isVarietyExtra=_isVarietyExtra;
@property int numChapter; // @synthesize numChapter=_numChapter;
@property(copy) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain) NSArray *aryImgTagItems; // @synthesize aryImgTagItems=_aryImgTagItems;
@property BOOL isPotraitHome; // @synthesize isPotraitHome=_isPotraitHome;
@property BOOL blooperON; // @synthesize blooperON=_blooperON;
@property(copy) NSString *zbURL; // @synthesize zbURL=_zbURL;
@property(copy) NSString *zbID; // @synthesize zbID=_zbID;
@property int rank; // @synthesize rank=_rank;
@property(copy) NSString *specialTopicID; // @synthesize specialTopicID=_specialTopicID;
@property float programVersion; // @synthesize programVersion=_programVersion;
@property unsigned int programType; // @synthesize programType=_programType;
@property(copy, nonatomic) NSString *jumpPageID; // @synthesize jumpPageID=_jumpPageID;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(copy, nonatomic) NSString *coverID; // @synthesize coverID=_coverID;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(copy, nonatomic) NSString *screenshotUrl; // @synthesize screenshotUrl=_screenshotUrl;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *exclusiveTag; // @synthesize exclusiveTag=_exclusiveTag;
@property(copy, nonatomic) NSString *selectedCommentID; // @synthesize selectedCommentID=_selectedCommentID;
@property(copy, nonatomic) NSString *rawSubtype; // @synthesize rawSubtype=_rawSubtype;
@property(copy, nonatomic) NSString *rawYear; // @synthesize rawYear=_rawYear;
@property(copy, nonatomic) NSString *rawArea; // @synthesize rawArea=_rawArea;
@property(copy, nonatomic) NSString *rawDirector; // @synthesize rawDirector=_rawDirector;
@property(copy, nonatomic) NSString *rawActor; // @synthesize rawActor=_rawActor;
@property(copy, nonatomic) NSString *rawTitle; // @synthesize rawTitle=_rawTitle;
@property(nonatomic) double scoreIMDB; // @synthesize scoreIMDB=_scoreIMDB;
@property(nonatomic) float priceDiscount; // @synthesize priceDiscount=_priceDiscount;
@property(nonatomic) float priceNormal; // @synthesize priceNormal=_priceNormal;
@property(nonatomic) float priceVIP; // @synthesize priceVIP=_priceVIP;
@property(nonatomic) int payState; // @synthesize payState=_payState;
@property(nonatomic) BOOL isDrm; // @synthesize isDrm=_isDrm;
@property(copy, nonatomic) NSString *belongedCoverID; // @synthesize belongedCoverID=_belongedCoverID;
@property(nonatomic) int totalEpisodeCount; // @synthesize totalEpisodeCount=_totalEpisodeCount;
@property(nonatomic) int updatedEpisodeNumber; // @synthesize updatedEpisodeNumber=_updatedEpisodeNumber;
@property(copy, nonatomic) NSString *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
@property(nonatomic) BOOL isTrailer; // @synthesize isTrailer=_isTrailer;
@property(copy, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(nonatomic) BOOL isTop; // @synthesize isTop=_isTop;
@property(nonatomic) BOOL isColumn; // @synthesize isColumn=_isColumn;
@property(nonatomic) BOOL isCover; // @synthesize isCover=_isCover;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *columnname; // @synthesize columnname=_columnname;
@property(nonatomic) int columnid; // @synthesize columnid=_columnid;
@property(nonatomic) int varietySubType; // @synthesize varietySubType=_varietySubType;
@property(nonatomic) int typeID; // @synthesize typeID=_typeID;
@property(nonatomic) BOOL canDownload; // @synthesize canDownload=_canDownload;
@property(nonatomic) BOOL webPlay; // @synthesize webPlay=_webPlay;
@property(nonatomic) BOOL appPlay; // @synthesize appPlay=_appPlay;
@property(retain) NSArray *aryDirector; // @synthesize aryDirector=_aryDirector;
@property(retain) NSArray *aryActor; // @synthesize aryActor=_aryActor;
@property(retain) NSDictionary *dicFamous; // @synthesize dicFamous=_dicFamous;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) int length; // @synthesize length=_length;
@property(copy, nonatomic) NSString *titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *ratingCaption; // @synthesize ratingCaption=_ratingCaption;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSMutableString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSMutableString *year; // @synthesize year=_year;
@property(retain, nonatomic) NSMutableString *actor; // @synthesize actor=_actor;
@property(retain, nonatomic) NSMutableString *director; // @synthesize director=_director;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(nonatomic) int videoIndex; // @synthesize videoIndex=_videoIndex;
@property(nonatomic) BOOL isLiveVideo; // @synthesize isLiveVideo=_isLiveVideo;
@property(nonatomic) BOOL noSubTitle; // @synthesize noSubTitle=_noSubTitle;
@property(copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *imageurl2; // @synthesize imageurl2=_imageurl2;
@property(copy, nonatomic) NSString *imageurl; // @synthesize imageurl=_imageurl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL currentMovieItemOnTop; // @synthesize currentMovieItemOnTop=_currentMovieItemOnTop;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)vidImageUrlIsPriorityUse;
- (void)setBarrageSwitchOnItem:(BOOL)arg1 withBarrageAutoPlay:(BOOL)arg2;
@property(readonly, nonatomic) NSString *movieId;
- (id)getMovieId;
- (BOOL)isPayed;
- (void)dealloc;
@property(retain, nonatomic, getter=getUpdateTimeFromCache, setter=setUpdateTimeToCache:) NSString *updateTime; // @synthesize updateTime=_updateTime;
- (id)init;

@end

