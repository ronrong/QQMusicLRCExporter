//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "QMChannelInteractiveProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ChannelV4Cell : QQMusicCell <QMChannelInteractiveProtocol>
{
    id _cellData;
    id <QMChannelInteractiveProtocol> _delegate;
}

+ (float)cellHeightWithRowData:(id)arg1;
@property(nonatomic) __weak id <QMChannelInteractiveProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id cellData; // @synthesize cellData=_cellData;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (id)imageWithColor:(id)arg1;
- (void)showChannel:(id)arg1;
- (void)updateUI;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

